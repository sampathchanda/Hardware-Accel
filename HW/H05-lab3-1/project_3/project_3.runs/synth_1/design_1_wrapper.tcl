# 
# Synthesis run script generated by Vivado
# 

debug::add_scope template.lib 1
set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z020clg484-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir C:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.cache/wt [current_project]
set_property parent.project_path C:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part em.avnet.com:zed:part0:1.3 [current_project]
set_property ip_repo_paths c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/project_softmax/solution1/impl/ip [current_project]
add_files C:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/design_1.bd
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0/design_1_processing_system7_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/ipshared/xilinx.com/softmax_v1_0/1fd6623b/constraints/softmax_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_axi_bram_ctrl_0_0/design_1_axi_bram_ctrl_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_rst_processing_system7_0_100M_0/design_1_rst_processing_system7_0_100M_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_rst_processing_system7_0_100M_0/design_1_rst_processing_system7_0_100M_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_rst_processing_system7_0_100M_0/design_1_rst_processing_system7_0_100M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_softmax_0_bram_0/design_1_softmax_0_bram_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_softmax_0_bram_0_0/design_1_softmax_0_bram_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_axi_cdma_0_0/design_1_axi_cdma_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_axi_cdma_0_0/design_1_axi_cdma_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_xbar_0/design_1_xbar_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_axi_cdma_0_1/design_1_axi_cdma_0_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_axi_cdma_0_1/design_1_axi_cdma_0_1.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_axi_bram_ctrl_0_1/design_1_axi_bram_ctrl_0_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_xbar_1/design_1_xbar_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_xbar_2/design_1_xbar_2_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_pc_0/design_1_auto_pc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_ds_0/design_1_auto_ds_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_ds_0/design_1_auto_ds_0_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_pc_1/design_1_auto_pc_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_us_0/design_1_auto_us_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_us_0/design_1_auto_us_0_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_ds_1/design_1_auto_ds_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_ds_1/design_1_auto_ds_1_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_pc_2/design_1_auto_pc_2_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_us_1/design_1_auto_us_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/ip/design_1_auto_us_1/design_1_auto_us_1_clocks.xdc]
set_property used_in_implementation false [get_files -all C:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/design_1_ooc.xdc]
set_property is_locked true [get_files C:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/design_1.bd]

read_verilog -library xil_defaultlib C:/Users/AraniBasu/Documents/GitHub/Reconfig-project/Hardware-Accel/HW/H05-lab3-1/project_3/project_3.srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
synth_design -top design_1_wrapper -part xc7z020clg484-1
write_checkpoint -noxdef design_1_wrapper.dcp
catch { report_utilization -file design_1_wrapper_utilization_synth.rpt -pb design_1_wrapper_utilization_synth.pb }