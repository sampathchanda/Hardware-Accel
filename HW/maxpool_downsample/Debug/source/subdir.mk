################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../.settings/maxpool_downsample.cpp 

OBJS += \
./source/maxpool_downsample.o 

CPP_DEPS += \
./source/maxpool_downsample.d 


# Each subdirectory must supply rules for building sources it contributes
source/maxpool_downsample.o: /home/littlefoot/18643_project/Hardware-Accel/HW/maxpool_downsample/.settings/maxpool_downsample.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -I/home/littlefoot/vivado/Vivado_HLS/2015.2/include/etc -I/home/littlefoot/18643_project/Hardware-Accel/HW -I/home/littlefoot/vivado/Vivado_HLS/2015.2/lnx64/tools/systemc/include -I/home/littlefoot/vivado/Vivado_HLS/2015.2/lnx64/tools/auto_cc/include -I/home/littlefoot/vivado/Vivado_HLS/2015.2/include -I/home/littlefoot/vivado/Vivado_HLS/2015.2/include/ap_sysc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

