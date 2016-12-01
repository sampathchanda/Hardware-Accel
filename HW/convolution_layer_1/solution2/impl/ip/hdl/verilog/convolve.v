// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="convolve,hls_ip_2015_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=8.528500,HLS_SYN_LAT=91882,HLS_SYN_TPT=91883,HLS_SYN_MEM=1,HLS_SYN_DSP=5,HLS_SYN_FF=3554,HLS_SYN_LUT=4128}" *)

module convolve (
        image_V_dout,
        image_V_empty_n,
        image_V_read,
        weights_address0,
        weights_ce0,
        weights_d0,
        weights_q0,
        weights_we0,
        weights_address1,
        weights_ce1,
        weights_d1,
        weights_q1,
        weights_we1,
        conv_output_V_din,
        conv_output_V_full_n,
        conv_output_V_write,
        done,
        ap_clk,
        ap_rst,
        ap_done,
        ap_start,
        ap_idle,
        ap_ready
);

parameter    ap_const_logic_0 = 1'b0;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv8_0 = 8'b00000000;
parameter    ap_const_logic_1 = 1'b1;
parameter    ap_true = 1'b1;

input  [7:0] image_V_dout;
input   image_V_empty_n;
output   image_V_read;
output  [4:0] weights_address0;
output   weights_ce0;
output  [31:0] weights_d0;
input  [31:0] weights_q0;
output   weights_we0;
output  [4:0] weights_address1;
output   weights_ce1;
output  [31:0] weights_d1;
input  [31:0] weights_q1;
output   weights_we1;
output  [7:0] conv_output_V_din;
input   conv_output_V_full_n;
output   conv_output_V_write;
output   done;
input   ap_clk;
input   ap_rst;
output   ap_done;
input   ap_start;
output   ap_idle;
output   ap_ready;

reg ap_idle;
wire    convolve_Loop_BUFFER_RESET_proc_U0_ap_start;
wire    convolve_Loop_BUFFER_RESET_proc_U0_ap_done;
wire    convolve_Loop_BUFFER_RESET_proc_U0_ap_continue;
wire    convolve_Loop_BUFFER_RESET_proc_U0_ap_idle;
wire    convolve_Loop_BUFFER_RESET_proc_U0_ap_ready;
wire   [7:0] convolve_Loop_BUFFER_RESET_proc_U0_image_V_dout;
wire    convolve_Loop_BUFFER_RESET_proc_U0_image_V_empty_n;
wire    convolve_Loop_BUFFER_RESET_proc_U0_image_V_read;
wire   [4:0] convolve_Loop_BUFFER_RESET_proc_U0_weights_address0;
wire    convolve_Loop_BUFFER_RESET_proc_U0_weights_ce0;
wire   [31:0] convolve_Loop_BUFFER_RESET_proc_U0_weights_q0;
wire   [4:0] convolve_Loop_BUFFER_RESET_proc_U0_weights_address1;
wire    convolve_Loop_BUFFER_RESET_proc_U0_weights_ce1;
wire   [31:0] convolve_Loop_BUFFER_RESET_proc_U0_weights_q1;
wire   [7:0] convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_din;
wire    convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_full_n;
wire    convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_write;
wire    ap_sig_hs_continue;
wire    convolve_Block_proc_U0_ap_start;
wire    convolve_Block_proc_U0_ap_done;
wire    convolve_Block_proc_U0_ap_continue;
wire    convolve_Block_proc_U0_ap_idle;
wire    convolve_Block_proc_U0_ap_ready;
wire   [0:0] convolve_Block_proc_U0_done;
wire    convolve_Block_proc_U0_done_ap_vld;
reg    ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0 = 1'b0;
reg    ap_sig_hs_done;
reg    ap_reg_procdone_convolve_Block_proc_U0 = 1'b0;
reg    ap_CS;
wire    ap_sig_top_allready;


convolve_Loop_BUFFER_RESET_proc convolve_Loop_BUFFER_RESET_proc_U0(
    .ap_clk( ap_clk ),
    .ap_rst( ap_rst ),
    .ap_start( convolve_Loop_BUFFER_RESET_proc_U0_ap_start ),
    .ap_done( convolve_Loop_BUFFER_RESET_proc_U0_ap_done ),
    .ap_continue( convolve_Loop_BUFFER_RESET_proc_U0_ap_continue ),
    .ap_idle( convolve_Loop_BUFFER_RESET_proc_U0_ap_idle ),
    .ap_ready( convolve_Loop_BUFFER_RESET_proc_U0_ap_ready ),
    .image_V_dout( convolve_Loop_BUFFER_RESET_proc_U0_image_V_dout ),
    .image_V_empty_n( convolve_Loop_BUFFER_RESET_proc_U0_image_V_empty_n ),
    .image_V_read( convolve_Loop_BUFFER_RESET_proc_U0_image_V_read ),
    .weights_address0( convolve_Loop_BUFFER_RESET_proc_U0_weights_address0 ),
    .weights_ce0( convolve_Loop_BUFFER_RESET_proc_U0_weights_ce0 ),
    .weights_q0( convolve_Loop_BUFFER_RESET_proc_U0_weights_q0 ),
    .weights_address1( convolve_Loop_BUFFER_RESET_proc_U0_weights_address1 ),
    .weights_ce1( convolve_Loop_BUFFER_RESET_proc_U0_weights_ce1 ),
    .weights_q1( convolve_Loop_BUFFER_RESET_proc_U0_weights_q1 ),
    .conv_output_V_din( convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_din ),
    .conv_output_V_full_n( convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_full_n ),
    .conv_output_V_write( convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_write )
);

convolve_Block_proc convolve_Block_proc_U0(
    .ap_clk( ap_clk ),
    .ap_rst( ap_rst ),
    .ap_start( convolve_Block_proc_U0_ap_start ),
    .ap_done( convolve_Block_proc_U0_ap_done ),
    .ap_continue( convolve_Block_proc_U0_ap_continue ),
    .ap_idle( convolve_Block_proc_U0_ap_idle ),
    .ap_ready( convolve_Block_proc_U0_ap_ready ),
    .done( convolve_Block_proc_U0_done ),
    .done_ap_vld( convolve_Block_proc_U0_done_ap_vld )
);



/// ap_reg_procdone_convolve_Block_proc_U0 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_procdone_convolve_Block_proc_U0
    if (ap_rst == 1'b1) begin
        ap_reg_procdone_convolve_Block_proc_U0 <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_sig_hs_done)) begin
            ap_reg_procdone_convolve_Block_proc_U0 <= ap_const_logic_0;
        end else if ((ap_const_logic_1 == convolve_Block_proc_U0_ap_done)) begin
            ap_reg_procdone_convolve_Block_proc_U0 <= ap_const_logic_1;
        end
    end
end

/// ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0
    if (ap_rst == 1'b1) begin
        ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0 <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_sig_hs_done)) begin
            ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0 <= ap_const_logic_0;
        end else if ((convolve_Loop_BUFFER_RESET_proc_U0_ap_done == ap_const_logic_1)) begin
            ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0 <= ap_const_logic_1;
        end
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    ap_CS <= ap_const_logic_0;
end

/// ap_idle assign process. ///
always @ (convolve_Loop_BUFFER_RESET_proc_U0_ap_idle or convolve_Block_proc_U0_ap_idle)
begin
    if (((convolve_Loop_BUFFER_RESET_proc_U0_ap_idle == ap_const_logic_1) & (ap_const_logic_1 == convolve_Block_proc_U0_ap_idle))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

/// ap_sig_hs_done assign process. ///
always @ (ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0 or ap_reg_procdone_convolve_Block_proc_U0)
begin
    if (((ap_const_logic_1 == ap_reg_procdone_convolve_Loop_BUFFER_RESET_proc_U0) & (ap_const_logic_1 == ap_reg_procdone_convolve_Block_proc_U0))) begin
        ap_sig_hs_done = ap_const_logic_1;
    end else begin
        ap_sig_hs_done = ap_const_logic_0;
    end
end
assign ap_done = ap_sig_hs_done;
assign ap_ready = ap_sig_top_allready;
assign ap_sig_hs_continue = ap_sig_hs_done;
assign ap_sig_top_allready = convolve_Loop_BUFFER_RESET_proc_U0_ap_ready;
assign conv_output_V_din = convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_din;
assign conv_output_V_write = convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_write;
assign convolve_Block_proc_U0_ap_continue = ap_sig_hs_continue;
assign convolve_Block_proc_U0_ap_start = ap_start;
assign convolve_Loop_BUFFER_RESET_proc_U0_ap_continue = ap_sig_hs_continue;
assign convolve_Loop_BUFFER_RESET_proc_U0_ap_start = ap_start;
assign convolve_Loop_BUFFER_RESET_proc_U0_conv_output_V_full_n = conv_output_V_full_n;
assign convolve_Loop_BUFFER_RESET_proc_U0_image_V_dout = image_V_dout;
assign convolve_Loop_BUFFER_RESET_proc_U0_image_V_empty_n = image_V_empty_n;
assign convolve_Loop_BUFFER_RESET_proc_U0_weights_q0 = weights_q0;
assign convolve_Loop_BUFFER_RESET_proc_U0_weights_q1 = weights_q1;
assign done = convolve_Block_proc_U0_done;
assign image_V_read = convolve_Loop_BUFFER_RESET_proc_U0_image_V_read;
assign weights_address0 = convolve_Loop_BUFFER_RESET_proc_U0_weights_address0;
assign weights_address1 = convolve_Loop_BUFFER_RESET_proc_U0_weights_address1;
assign weights_ce0 = convolve_Loop_BUFFER_RESET_proc_U0_weights_ce0;
assign weights_ce1 = convolve_Loop_BUFFER_RESET_proc_U0_weights_ce1;
assign weights_d0 = ap_const_lv32_0;
assign weights_d1 = ap_const_lv32_0;
assign weights_we0 = ap_const_logic_0;
assign weights_we1 = ap_const_logic_0;


endmodule //convolve
