############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project cnn_filter
set_top feature_extractor
add_files cnn_filter/.settings/feature_extractor.c
add_files cnn_filter/.settings/feature_extractor.h
add_files cnn_filter/.settings/feature_extractor_relu.c
add_files cnn_filter/.settings/feature_extractor_relu.cpp
add_files -tb cnn_filter/.settings/tb.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./cnn_filter/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
