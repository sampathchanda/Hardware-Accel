create_project prj -part xc7z020clg484-1 -force
set_property target_language verilog [current_project]
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_fptrunc_0_no_dsp_64_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_ddiv_29_no_dsp_64_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_dadd_3_full_dsp_64_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_fadd_3_full_dsp_32_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_fdiv_14_no_dsp_32_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_fmul_2_max_dsp_32_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_fpext_0_no_dsp_32_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_dexp_16_full_dsp_64_ip.tcl"
source "/home/littlefoot/18643_project/Hardware-Accel/HW/proj1_hls/solution1/syn/verilog/obj_detector_ap_fcmp_0_no_dsp_32_ip.tcl"