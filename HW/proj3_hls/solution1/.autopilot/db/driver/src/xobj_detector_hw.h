// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// AXILiteS
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of A
//        bit 31~0 - A[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of W0
//        bit 31~0 - W0[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of W1
//        bit 31~0 - W1[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of res
//        bit 31~0 - res[31:0] (Read/Write)
// 0x2c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XOBJ_DETECTOR_AXILITES_ADDR_A_DATA   0x10
#define XOBJ_DETECTOR_AXILITES_BITS_A_DATA   32
#define XOBJ_DETECTOR_AXILITES_ADDR_W0_DATA  0x18
#define XOBJ_DETECTOR_AXILITES_BITS_W0_DATA  32
#define XOBJ_DETECTOR_AXILITES_ADDR_W1_DATA  0x20
#define XOBJ_DETECTOR_AXILITES_BITS_W1_DATA  32
#define XOBJ_DETECTOR_AXILITES_ADDR_RES_DATA 0x28
#define XOBJ_DETECTOR_AXILITES_BITS_RES_DATA 32

// control
// 0x0 : Control signals
//       bit 0  - ap_start (Read/Write/COH)
//       bit 1  - ap_done (Read/COR)
//       bit 2  - ap_idle (Read)
//       bit 3  - ap_ready (Read)
//       bit 7  - auto_restart (Read/Write)
//       others - reserved
// 0x4 : Global Interrupt Enable Register
//       bit 0  - Global Interrupt Enable (Read/Write)
//       others - reserved
// 0x8 : IP Interrupt Enable Register (Read/Write)
//       bit 0  - Channel 0 (ap_done)
//       bit 1  - Channel 1 (ap_ready)
//       others - reserved
// 0xc : IP Interrupt Status Register (Read/TOW)
//       bit 0  - Channel 0 (ap_done)
//       bit 1  - Channel 1 (ap_ready)
//       others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XOBJ_DETECTOR_CONTROL_ADDR_AP_CTRL 0x0
#define XOBJ_DETECTOR_CONTROL_ADDR_GIE     0x4
#define XOBJ_DETECTOR_CONTROL_ADDR_IER     0x8
#define XOBJ_DETECTOR_CONTROL_ADDR_ISR     0xc
