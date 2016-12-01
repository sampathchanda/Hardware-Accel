#include <xparameters.h>
#include <xaxicdma.h>
#include <xil_cache.h>
#include <xobj_detector.h>
#include <cstdio>
#include <cstdlib>
#include <cfloat>
#include <cmath>
#include <limits.h>
#include "ff.h"
#include "xstatus.h"
#include "diskio.h"
#include "main.h"


#define CDMA_A_ID XPAR_HIER_BRAM_0_AXI_CDMA_0_DEVICE_ID
#define CDMA_A_BASE XPAR_HIER_BRAM_0_AXI_CDMA_0_BASEADDR

#define CDMA_W0_ID XPAR_HIER_BRAM_1_AXI_CDMA_0_DEVICE_ID
#define CDMA_W0_BASE XPAR_HIER_BRAM_1_AXI_CDMA_0_BASEADDR

#define CDMA_W1_ID XPAR_HIER_BRAM_2_AXI_CDMA_0_DEVICE_ID
#define CDMA_W1_BASE XPAR_HIER_BRAM_2_AXI_CDMA_0_BASEADDR

#define CDMA_RES_ID XPAR_HIER_BRAM_3_AXI_CDMA_0_DEVICE_ID
#define CDMA_RES_BASE XPAR_HIER_BRAM_3_AXI_CDMA_0_BASEADDR

#define OBJ_DETECTOR_ID XPAR_OBJ_DETECTOR_0_DEVICE_ID

#define BRAM_A_ID 0xC0000000
#define BRAM_W0_ID 0xC2000000
#define BRAM_W1_ID 0xC4000000
#define BRAM_RES_ID 0xC6000000

#define CLOCKS_PER_SEC (XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ/2)
//CPU 32-bit timer (SCUTIMER) clocked at half the CPU frequency
unsigned int * const TIMER_LOAD_PTR = (unsigned int *)XPAR_PS7_SCUTIMER_0_BASEADDR;
unsigned int * const TIMER_PTR = XPAR_PS7_SCUTIMER_0_BASEADDR + (unsigned int *)0x04;
unsigned int * const TIMER_CONFIG_PTR = XPAR_PS7_SCUTIMER_0_BASEADDR + (unsigned int *)0x08;

//double buffered
float in_mat_a[N][N];
float in_mat_w0[NUM_NEURONS][M][M];
float in_mat_w1[NUM_CLASSES][NUM_NEURONS*((N-M+1)/2)*((N-M+1)/2)];
mat_conv hw_result[NUM_CLASSES], sw_result[NUM_CLASSES];

//devices and configuration pointers for CDMA IPs used to transfer data to/from DRAM and BRAM
XAxiCdma		 cdma_dev_a;
XAxiCdma_Config *cdma_config_a;
XAxiCdma		 cdma_dev_w0;
XAxiCdma_Config *cdma_config_w0;
XAxiCdma		 cdma_dev_w1;
XAxiCdma_Config *cdma_config_w1;
XAxiCdma		 cdma_dev_res;
XAxiCdma_Config *cdma_config_res;

//device and configuration pointer for the Lab 2 matrix mult HLS IP
XObj_detector		 obj_detector_dev;
XObj_detector_Config *obj_detector_config;

// Descriptors for reading SD card
FATFS FS_Instance;
FIL images;
FIL labels;

#define EPSILON (1e-4)  // do not chanage this value

#define IMAGES_HEADER_BYTES 16
#define LABELS_HEADER_BYTES 8
#define IMAGE_BYTES 28*28
#define LABEL_BYTES 1

bool nearlyEqual(float a, float b);
void initialize(int &error);
int initialize_sdcard();
int sdcard_read(FIL *file, void *buff, UINT num_bytes);

void obj_detector(
		 float a[N][N],
		 float w0[NUM_NEURONS][M][M],
		 float w1[NUM_CLASSES][NUM_NEURONS*((N-M+1)/2)*((N-M+1)/2)],
		 float res[NUM_CLASSES]
		 );


int main() {

  printf("\nBegin Object detection\n");
  int error_count = 0;
  char buff[N*N];

  initialize(error_count); // initialize timer and IPs

  if (error_count) return XST_FAILURE;

  //char temp[8] = {0xff, 0x6c, 0x0, 0x94, 0x93, 0x3f, 0xf1, 0xbf};
  //void *temp1;
  //float temp1 = 0xff6c0094933ff1bf;
  double temp1 = 0xbff13f9394006cff;
  printf("temp: %g\n", temp1);

  //Xil_DCacheDisable();

  // Reading from SD card
  initialize_sdcard();

  // Reading out header
  sdcard_read(&images, buff, IMAGES_HEADER_BYTES);

  // Reading an image
  sdcard_read(&images, buff, IMAGE_BYTES);

  for (int i=0; i<N*N; i++) {
	  //printf("integer: %d\n", (int)buff[i]);
  }

  // Initialize the input matrices with random values
  //for(int phase = 0; phase < 2; phase++) {
	int i,j,k;
	for(i = 0; i < N; i++) {
	  for(j = 0; j < N; j++) {
	in_mat_a[i][j]=((float)rand())/RAND_MAX;
	  }
	}
	for (k=0; k<NUM_NEURONS; k++) {
	  for(i = 0; i < M; i++) {
	    for(j = 0; j < M; j++) {
	      in_mat_w0[k][i][j]=((float)rand())/RAND_MAX;
	    }
	  }
	}
	for(i = 0; i < NUM_CLASSES; i++) {
	  for(j = 0; j < (NUM_NEURONS*((N-M+1)/2)*((N-M+1)/2)); j++) {
	    in_mat_w1[i][j]=((float)rand())/RAND_MAX;
	  }
	}


  Xil_DCacheFlush(); // Flush the initialized matrices from the CPU cache to DRAM
  // The CDMA IPs are connected through incoherent ports to main memory

    // Run the Vivado HLS matrix multiplier
    obj_detector(in_mat_a, in_mat_w0, in_mat_w1, hw_result);

    // Invalidate the hw_result matrix range so the CPU reads from main memory
    Xil_DCacheInvalidateRange((u32)(hw_result),(N-M+1)*(N-M+1)*sizeof(float));

    // Print product matrix
    for (int i = 0; i < NUM_CLASSES; i++) {
      //for (int j = 0; j < N-M+1; j++) {
	// Check result of HLS vs. expected
	if (!nearlyEqual(hw_result[i], sw_result[i])) {
	  printf("Phase: \tRes[%d]\tHW: %0.2f\tSW: %0.2f\n",i,hw_result[i],sw_result[i]);
	  error_count++;
	}
      }
    //}
  //}

  if (error_count)
    printf("TEST FAIL: %d Results do not match!\n", error_count);
  else
    printf("Test passed!\n");

  return error_count;
}

void obj_detector(
		 float a[N][N],
		 float w0[NUM_NEURONS][M][M],
		 float w1[NUM_CLASSES][NUM_NEURONS*((N-M+1)/2)*((N-M+1)/2)],
		 float res[NUM_CLASSES]
		)
{

	// Transfer the a and b matrices from DRAM to BRAM
	// Pointer arithmatic and indexing done here for transfers
	XAxiCdma_SimpleTransfer(&cdma_dev_a, (u32)(a), (u32)(BRAM_A_ID), N*N*sizeof(float), NULL, NULL);
	XAxiCdma_SimpleTransfer(&cdma_dev_w0, (u32)(w0), (u32)(BRAM_W0_ID), NUM_NEURONS*M*M*sizeof(float), NULL, NULL);
	XAxiCdma_SimpleTransfer(&cdma_dev_w1, (u32)(w1), (u32)(BRAM_W1_ID), NUM_CLASSES*NUM_NEURONS*(N-M+1)*(N-M+1)*sizeof(float), NULL, NULL);
	while (XAxiCdma_IsBusy(&cdma_dev_a) || XAxiCdma_IsBusy(&cdma_dev_w0) || (XAxiCdma_IsBusy(&cdma_dev_w1)));

	// Issue Start signal to the Matrix Mult IP
	XObj_detector_Start(&obj_detector_dev);
	// Spin check the Done signal from the Matrix Mult IP
	while (!XObj_detector_IsDone(&obj_detector_dev));

	// Transfer the product matrix from BRAM to DRAM
	XAxiCdma_SimpleTransfer(&cdma_dev_res, (u32)(BRAM_RES_ID), (u32)(res), (NUM_CLASSES)*sizeof(float), NULL, NULL);
	while (XAxiCdma_IsBusy(&cdma_dev_res));
	printf("%f\n", res[0]);
}

bool nearlyEqual(float a, float b) {
  // The Floating Point Guide, http://floating-point-gui.de/errors/comparison/
  float absA = abs(a);
  float absB = abs(b);
  float diff = abs(a - b);

  if (a == b) { // shortcut, handles infinities
    return true;
  } else if (a == 0 || b == 0 || diff < FLT_MIN) {
    // a or b is zero or both are extremely close to it
    // relative error is less meaningful here
    return diff < (EPSILON * FLT_MIN);
  } else { // use relative error
    return diff / fmin((absA + absB), FLT_MAX) < EPSILON;
  }
}

void initialize(int &error) {
    *TIMER_CONFIG_PTR = 0x00000003;
	*TIMER_PTR = UINT_MAX; //count down from max amount

	obj_detector_config = XObj_detector_LookupConfig(OBJ_DETECTOR_ID);
	int status = XObj_detector_CfgInitialize(&obj_detector_dev,obj_detector_config);
	if(status !=XST_SUCCESS){
		printf("ERROR: Obj_detector Setup Failed\n");
		error++;
	}

	cdma_config_a = XAxiCdma_LookupConfig(CDMA_A_ID);
	status = XAxiCdma_CfgInitialize(&cdma_dev_a,cdma_config_a,CDMA_A_BASE);

	if(status !=XST_SUCCESS){
		printf("ERROR: CDMA A Setup Failed\n");
		error++;
	}
	cdma_config_w0 = XAxiCdma_LookupConfig(CDMA_W0_ID);
	status = XAxiCdma_CfgInitialize(&cdma_dev_w0,cdma_config_w0,CDMA_W0_BASE);
	if(status !=XST_SUCCESS){
		printf("ERROR: CDMA W0 Setup Failed\n");
		error++;
	}
	cdma_config_w1 = XAxiCdma_LookupConfig(CDMA_W1_ID);
	status = XAxiCdma_CfgInitialize(&cdma_dev_w1,cdma_config_w1,CDMA_W1_BASE);
	if(status !=XST_SUCCESS){
		printf("ERROR: CDMA W1 Setup Failed\n");
		error++;
	}
	cdma_config_res = XAxiCdma_LookupConfig(CDMA_RES_ID);
	status = XAxiCdma_CfgInitialize(&cdma_dev_res,cdma_config_res,CDMA_RES_BASE);
	if(status !=XST_SUCCESS){
		printf("ERROR: CDMA RES Setup Failed\n");
		error++;
	}

}

int initialize_sdcard() {
	FRESULT result;

	//DSTATUS init_status;
	//init_status = disk_status(0);
	  //printf("Status: %d\n", init_status);

	  //init_status = disk_initialize(0);
	  //if ((init_status)) {
		//  printf("Error: Disk initialization failed: %d\n", init_status);
		 // return XST_FAILURE;
	  //}

	result = f_mount(&FS_Instance, "0:/", 0);
	if (result != 0) {
		printf("Error: f_mount returned %d\n", result);
		return XST_FAILURE;
	}

	result = f_open(&images, "images.bin", FA_READ);
	if (result != 0) {
		printf("Error: f_open returned %d while trying to open images\n", result);
		return XST_FAILURE;
	}

	result = f_open(&labels, "labels.bin", FA_READ);
	if (result != 0) {
		printf("Error: f_open returned %d while trying to open labels\n", result);
		return XST_FAILURE;
	}
	return 0;
}

int sdcard_read(FIL *file, void *buff, UINT num_bytes) {
	int result;
	UINT bytes_read;

	result = f_read(file, buff, num_bytes, &bytes_read);
	if (result) {
		printf("Error: SDCard read failed with error code: %d\n", result);
		return XST_FAILURE;
	}

	if (num_bytes != bytes_read) {
		printf("Number of bytes to read and bytes read don't match. %d vs %d\n", num_bytes, bytes_read);
		return XST_FAILURE;
	}
	return 0;

}