// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _softmax_HH_
#define _softmax_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "softmax_fadd_32ns_32ns_32_5_full_dsp.h"
#include "softmax_fdiv_32ns_32ns_32_16.h"
#include "softmax_fptrunc_64ns_32_1.h"
#include "softmax_fpext_32ns_64_1.h"
#include "softmax_dadd_64ns_64ns_64_5_full_dsp.h"
#include "softmax_ddiv_64ns_64ns_64_31.h"
#include "softmax_dexp_64ns_64ns_64_18_full_dsp.h"
#include "softmax_control_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_CONTROL_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_CONTROL_DATA_WIDTH = 32>
struct softmax : public sc_module {
    // Port declarations 34
    sc_in< sc_logic > s_axi_control_AWVALID;
    sc_out< sc_logic > s_axi_control_AWREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_ADDR_WIDTH> > s_axi_control_AWADDR;
    sc_in< sc_logic > s_axi_control_WVALID;
    sc_out< sc_logic > s_axi_control_WREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH> > s_axi_control_WDATA;
    sc_in< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH/8> > s_axi_control_WSTRB;
    sc_in< sc_logic > s_axi_control_ARVALID;
    sc_out< sc_logic > s_axi_control_ARREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_ADDR_WIDTH> > s_axi_control_ARADDR;
    sc_out< sc_logic > s_axi_control_RVALID;
    sc_in< sc_logic > s_axi_control_RREADY;
    sc_out< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH> > s_axi_control_RDATA;
    sc_out< sc_lv<2> > s_axi_control_RRESP;
    sc_out< sc_logic > s_axi_control_BVALID;
    sc_in< sc_logic > s_axi_control_BREADY;
    sc_out< sc_lv<2> > s_axi_control_BRESP;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_lv<32> > inp_Addr_A;
    sc_out< sc_logic > inp_EN_A;
    sc_out< sc_lv<4> > inp_WEN_A;
    sc_out< sc_lv<32> > inp_Din_A;
    sc_in< sc_lv<32> > inp_Dout_A;
    sc_out< sc_logic > inp_Clk_A;
    sc_out< sc_logic > inp_Rst_A;
    sc_out< sc_lv<32> > out_r_Addr_A;
    sc_out< sc_logic > out_r_EN_A;
    sc_out< sc_lv<4> > out_r_WEN_A;
    sc_out< sc_lv<32> > out_r_Din_A;
    sc_in< sc_lv<32> > out_r_Dout_A;
    sc_out< sc_logic > out_r_Clk_A;
    sc_out< sc_logic > out_r_Rst_A;
    sc_out< sc_logic > interrupt;


    // Module declarations
    softmax(sc_module_name name);
    SC_HAS_PROCESS(softmax);

    ~softmax();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    softmax_control_s_axi<C_S_AXI_CONTROL_ADDR_WIDTH,C_S_AXI_CONTROL_DATA_WIDTH>* softmax_control_s_axi_U;
    softmax_fadd_32ns_32ns_32_5_full_dsp<1,5,32,32,32>* softmax_fadd_32ns_32ns_32_5_full_dsp_U0;
    softmax_fdiv_32ns_32ns_32_16<1,16,32,32,32>* softmax_fdiv_32ns_32ns_32_16_U1;
    softmax_fptrunc_64ns_32_1<1,1,64,32>* softmax_fptrunc_64ns_32_1_U2;
    softmax_fpext_32ns_64_1<1,1,32,64>* softmax_fpext_32ns_64_1_U3;
    softmax_dadd_64ns_64ns_64_5_full_dsp<1,5,64,64,64>* softmax_dadd_64ns_64ns_64_5_full_dsp_U4;
    softmax_ddiv_64ns_64ns_64_31<1,31,64,64,64>* softmax_ddiv_64ns_64ns_64_31_U5;
    softmax_dexp_64ns_64ns_64_18_full_dsp<1,18,64,64,64>* softmax_dexp_64ns_64ns_64_18_full_dsp_U6;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<102> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_143;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_logic > softmax_control_s_axi_U_ap_dummy_ce;
    sc_signal< sc_lv<32> > reg_207;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_189;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_bdd_196;
    sc_signal< sc_lv<64> > grp_fu_189_p1;
    sc_signal< sc_lv<64> > reg_213;
    sc_signal< sc_logic > ap_sig_cseq_ST_st26_fsm_25;
    sc_signal< bool > ap_sig_bdd_206;
    sc_signal< sc_lv<1> > exitcond1_fu_284_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st44_fsm_43;
    sc_signal< bool > ap_sig_bdd_220;
    sc_signal< sc_lv<64> > grp_fu_202_p2;
    sc_signal< sc_lv<64> > reg_220;
    sc_signal< sc_logic > ap_sig_cseq_ST_st69_fsm_68;
    sc_signal< bool > ap_sig_bdd_230;
    sc_signal< sc_lv<32> > grp_fu_186_p1;
    sc_signal< sc_lv<32> > reg_226;
    sc_signal< sc_logic > ap_sig_cseq_ST_st50_fsm_49;
    sc_signal< bool > ap_sig_bdd_240;
    sc_signal< sc_logic > ap_sig_cseq_ST_st101_fsm_100;
    sc_signal< bool > ap_sig_bdd_247;
    sc_signal< sc_lv<2> > i_1_fu_238_p2;
    sc_signal< sc_lv<2> > i_1_reg_342;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_257;
    sc_signal< sc_lv<1> > exitcond3_fu_232_p2;
    sc_signal< sc_lv<32> > grp_fu_175_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_bdd_271;
    sc_signal< sc_lv<2> > i_2_fu_255_p2;
    sc_signal< sc_lv<2> > i_2_reg_360;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_bdd_280;
    sc_signal< sc_lv<1> > exitcond2_fu_249_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_266_p1;
    sc_signal< sc_lv<1> > tmp_11_reg_370;
    sc_signal< sc_lv<32> > temp_1_1_fu_270_p3;
    sc_signal< sc_logic > ap_sig_cseq_ST_st25_fsm_24;
    sc_signal< bool > ap_sig_bdd_296;
    sc_signal< sc_lv<32> > temp_1_2_fu_277_p3;
    sc_signal< sc_lv<2> > i_3_fu_290_p2;
    sc_signal< sc_lv<2> > i_3_reg_389;
    sc_signal< sc_lv<64> > grp_fu_194_p2;
    sc_signal< sc_lv<64> > tmp_1_reg_394;
    sc_signal< sc_logic > ap_sig_cseq_ST_st49_fsm_48;
    sc_signal< bool > ap_sig_bdd_309;
    sc_signal< sc_lv<2> > i_4_fu_315_p2;
    sc_signal< sc_lv<2> > i_4_reg_402;
    sc_signal< sc_logic > ap_sig_cseq_ST_st51_fsm_50;
    sc_signal< bool > ap_sig_bdd_318;
    sc_signal< sc_lv<64> > tmp_5_reg_407;
    sc_signal< sc_lv<1> > exitcond_fu_309_p2;
    sc_signal< sc_lv<64> > grp_fu_198_p2;
    sc_signal< sc_lv<64> > tmp_7_reg_412;
    sc_signal< sc_logic > ap_sig_cseq_ST_st100_fsm_99;
    sc_signal< bool > ap_sig_bdd_331;
    sc_signal< sc_lv<2> > i_reg_82;
    sc_signal< sc_lv<32> > sum_reg_93;
    sc_signal< sc_lv<32> > temp_1_s_reg_105;
    sc_signal< sc_lv<32> > temp_0_s_reg_117;
    sc_signal< sc_lv<2> > i1_reg_129;
    sc_signal< sc_lv<32> > sum_1_phi_fu_144_p4;
    sc_signal< sc_lv<32> > sum_1_reg_140;
    sc_signal< sc_lv<2> > i2_reg_152;
    sc_signal< sc_lv<2> > i3_reg_163;
    sc_signal< sc_logic > ap_sig_cseq_ST_st102_fsm_101;
    sc_signal< bool > ap_sig_bdd_362;
    sc_signal< sc_lv<64> > tmp_fu_244_p1;
    sc_signal< sc_lv<64> > tmp_3_fu_261_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_334_p1;
    sc_signal< sc_lv<32> > inp_Addr_A_orig;
    sc_signal< sc_lv<32> > out_r_Addr_A_orig;
    sc_signal< sc_lv<32> > grp_fu_175_p0;
    sc_signal< sc_lv<32> > grp_fu_175_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_383;
    sc_signal< sc_lv<32> > grp_fu_180_p0;
    sc_signal< sc_lv<32> > grp_fu_180_p1;
    sc_signal< sc_lv<64> > grp_fu_186_p0;
    sc_signal< sc_lv<32> > grp_fu_189_p0;
    sc_signal< sc_lv<32> > temp_load_phi_fu_300_p3;
    sc_signal< sc_lv<32> > temp_load_1_phi_fu_325_p3;
    sc_signal< sc_lv<64> > grp_fu_194_p0;
    sc_signal< sc_lv<64> > grp_fu_194_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st45_fsm_44;
    sc_signal< bool > ap_sig_bdd_398;
    sc_signal< sc_lv<64> > grp_fu_198_p0;
    sc_signal< sc_lv<64> > grp_fu_198_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st70_fsm_69;
    sc_signal< bool > ap_sig_bdd_407;
    sc_signal< sc_lv<64> > grp_fu_202_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st27_fsm_26;
    sc_signal< bool > ap_sig_bdd_415;
    sc_signal< sc_logic > ap_sig_cseq_ST_st52_fsm_51;
    sc_signal< bool > ap_sig_bdd_422;
    sc_signal< sc_lv<32> > grp_fu_180_p2;
    sc_signal< sc_lv<1> > tmp_12_fu_296_p1;
    sc_signal< sc_lv<1> > tmp_13_fu_321_p1;
    sc_signal< sc_logic > grp_fu_175_ce;
    sc_signal< sc_logic > grp_fu_180_ce;
    sc_signal< sc_logic > grp_fu_194_ce;
    sc_signal< sc_logic > grp_fu_198_ce;
    sc_signal< sc_lv<64> > grp_fu_202_p0;
    sc_signal< sc_logic > grp_fu_202_ce;
    sc_signal< sc_lv<102> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<102> ap_ST_st1_fsm_0;
    static const sc_lv<102> ap_ST_st2_fsm_1;
    static const sc_lv<102> ap_ST_st3_fsm_2;
    static const sc_lv<102> ap_ST_st4_fsm_3;
    static const sc_lv<102> ap_ST_st5_fsm_4;
    static const sc_lv<102> ap_ST_st6_fsm_5;
    static const sc_lv<102> ap_ST_st7_fsm_6;
    static const sc_lv<102> ap_ST_st8_fsm_7;
    static const sc_lv<102> ap_ST_st9_fsm_8;
    static const sc_lv<102> ap_ST_st10_fsm_9;
    static const sc_lv<102> ap_ST_st11_fsm_10;
    static const sc_lv<102> ap_ST_st12_fsm_11;
    static const sc_lv<102> ap_ST_st13_fsm_12;
    static const sc_lv<102> ap_ST_st14_fsm_13;
    static const sc_lv<102> ap_ST_st15_fsm_14;
    static const sc_lv<102> ap_ST_st16_fsm_15;
    static const sc_lv<102> ap_ST_st17_fsm_16;
    static const sc_lv<102> ap_ST_st18_fsm_17;
    static const sc_lv<102> ap_ST_st19_fsm_18;
    static const sc_lv<102> ap_ST_st20_fsm_19;
    static const sc_lv<102> ap_ST_st21_fsm_20;
    static const sc_lv<102> ap_ST_st22_fsm_21;
    static const sc_lv<102> ap_ST_st23_fsm_22;
    static const sc_lv<102> ap_ST_st24_fsm_23;
    static const sc_lv<102> ap_ST_st25_fsm_24;
    static const sc_lv<102> ap_ST_st26_fsm_25;
    static const sc_lv<102> ap_ST_st27_fsm_26;
    static const sc_lv<102> ap_ST_st28_fsm_27;
    static const sc_lv<102> ap_ST_st29_fsm_28;
    static const sc_lv<102> ap_ST_st30_fsm_29;
    static const sc_lv<102> ap_ST_st31_fsm_30;
    static const sc_lv<102> ap_ST_st32_fsm_31;
    static const sc_lv<102> ap_ST_st33_fsm_32;
    static const sc_lv<102> ap_ST_st34_fsm_33;
    static const sc_lv<102> ap_ST_st35_fsm_34;
    static const sc_lv<102> ap_ST_st36_fsm_35;
    static const sc_lv<102> ap_ST_st37_fsm_36;
    static const sc_lv<102> ap_ST_st38_fsm_37;
    static const sc_lv<102> ap_ST_st39_fsm_38;
    static const sc_lv<102> ap_ST_st40_fsm_39;
    static const sc_lv<102> ap_ST_st41_fsm_40;
    static const sc_lv<102> ap_ST_st42_fsm_41;
    static const sc_lv<102> ap_ST_st43_fsm_42;
    static const sc_lv<102> ap_ST_st44_fsm_43;
    static const sc_lv<102> ap_ST_st45_fsm_44;
    static const sc_lv<102> ap_ST_st46_fsm_45;
    static const sc_lv<102> ap_ST_st47_fsm_46;
    static const sc_lv<102> ap_ST_st48_fsm_47;
    static const sc_lv<102> ap_ST_st49_fsm_48;
    static const sc_lv<102> ap_ST_st50_fsm_49;
    static const sc_lv<102> ap_ST_st51_fsm_50;
    static const sc_lv<102> ap_ST_st52_fsm_51;
    static const sc_lv<102> ap_ST_st53_fsm_52;
    static const sc_lv<102> ap_ST_st54_fsm_53;
    static const sc_lv<102> ap_ST_st55_fsm_54;
    static const sc_lv<102> ap_ST_st56_fsm_55;
    static const sc_lv<102> ap_ST_st57_fsm_56;
    static const sc_lv<102> ap_ST_st58_fsm_57;
    static const sc_lv<102> ap_ST_st59_fsm_58;
    static const sc_lv<102> ap_ST_st60_fsm_59;
    static const sc_lv<102> ap_ST_st61_fsm_60;
    static const sc_lv<102> ap_ST_st62_fsm_61;
    static const sc_lv<102> ap_ST_st63_fsm_62;
    static const sc_lv<102> ap_ST_st64_fsm_63;
    static const sc_lv<102> ap_ST_st65_fsm_64;
    static const sc_lv<102> ap_ST_st66_fsm_65;
    static const sc_lv<102> ap_ST_st67_fsm_66;
    static const sc_lv<102> ap_ST_st68_fsm_67;
    static const sc_lv<102> ap_ST_st69_fsm_68;
    static const sc_lv<102> ap_ST_st70_fsm_69;
    static const sc_lv<102> ap_ST_st71_fsm_70;
    static const sc_lv<102> ap_ST_st72_fsm_71;
    static const sc_lv<102> ap_ST_st73_fsm_72;
    static const sc_lv<102> ap_ST_st74_fsm_73;
    static const sc_lv<102> ap_ST_st75_fsm_74;
    static const sc_lv<102> ap_ST_st76_fsm_75;
    static const sc_lv<102> ap_ST_st77_fsm_76;
    static const sc_lv<102> ap_ST_st78_fsm_77;
    static const sc_lv<102> ap_ST_st79_fsm_78;
    static const sc_lv<102> ap_ST_st80_fsm_79;
    static const sc_lv<102> ap_ST_st81_fsm_80;
    static const sc_lv<102> ap_ST_st82_fsm_81;
    static const sc_lv<102> ap_ST_st83_fsm_82;
    static const sc_lv<102> ap_ST_st84_fsm_83;
    static const sc_lv<102> ap_ST_st85_fsm_84;
    static const sc_lv<102> ap_ST_st86_fsm_85;
    static const sc_lv<102> ap_ST_st87_fsm_86;
    static const sc_lv<102> ap_ST_st88_fsm_87;
    static const sc_lv<102> ap_ST_st89_fsm_88;
    static const sc_lv<102> ap_ST_st90_fsm_89;
    static const sc_lv<102> ap_ST_st91_fsm_90;
    static const sc_lv<102> ap_ST_st92_fsm_91;
    static const sc_lv<102> ap_ST_st93_fsm_92;
    static const sc_lv<102> ap_ST_st94_fsm_93;
    static const sc_lv<102> ap_ST_st95_fsm_94;
    static const sc_lv<102> ap_ST_st96_fsm_95;
    static const sc_lv<102> ap_ST_st97_fsm_96;
    static const sc_lv<102> ap_ST_st98_fsm_97;
    static const sc_lv<102> ap_ST_st99_fsm_98;
    static const sc_lv<102> ap_ST_st100_fsm_99;
    static const sc_lv<102> ap_ST_st101_fsm_100;
    static const sc_lv<102> ap_ST_st102_fsm_101;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_44;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_64;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_63;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_65;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_45;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<64> ap_const_lv64_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_bdd_143();
    void thread_ap_sig_bdd_189();
    void thread_ap_sig_bdd_196();
    void thread_ap_sig_bdd_206();
    void thread_ap_sig_bdd_220();
    void thread_ap_sig_bdd_230();
    void thread_ap_sig_bdd_240();
    void thread_ap_sig_bdd_247();
    void thread_ap_sig_bdd_257();
    void thread_ap_sig_bdd_271();
    void thread_ap_sig_bdd_280();
    void thread_ap_sig_bdd_296();
    void thread_ap_sig_bdd_309();
    void thread_ap_sig_bdd_318();
    void thread_ap_sig_bdd_331();
    void thread_ap_sig_bdd_362();
    void thread_ap_sig_bdd_383();
    void thread_ap_sig_bdd_398();
    void thread_ap_sig_bdd_407();
    void thread_ap_sig_bdd_415();
    void thread_ap_sig_bdd_422();
    void thread_ap_sig_cseq_ST_st100_fsm_99();
    void thread_ap_sig_cseq_ST_st101_fsm_100();
    void thread_ap_sig_cseq_ST_st102_fsm_101();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st25_fsm_24();
    void thread_ap_sig_cseq_ST_st26_fsm_25();
    void thread_ap_sig_cseq_ST_st27_fsm_26();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st44_fsm_43();
    void thread_ap_sig_cseq_ST_st45_fsm_44();
    void thread_ap_sig_cseq_ST_st49_fsm_48();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st50_fsm_49();
    void thread_ap_sig_cseq_ST_st51_fsm_50();
    void thread_ap_sig_cseq_ST_st52_fsm_51();
    void thread_ap_sig_cseq_ST_st69_fsm_68();
    void thread_ap_sig_cseq_ST_st70_fsm_69();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_exitcond1_fu_284_p2();
    void thread_exitcond2_fu_249_p2();
    void thread_exitcond3_fu_232_p2();
    void thread_exitcond_fu_309_p2();
    void thread_grp_fu_175_ce();
    void thread_grp_fu_175_p0();
    void thread_grp_fu_175_p1();
    void thread_grp_fu_180_ce();
    void thread_grp_fu_180_p0();
    void thread_grp_fu_180_p1();
    void thread_grp_fu_186_p0();
    void thread_grp_fu_189_p0();
    void thread_grp_fu_194_ce();
    void thread_grp_fu_194_p0();
    void thread_grp_fu_194_p1();
    void thread_grp_fu_198_ce();
    void thread_grp_fu_198_p0();
    void thread_grp_fu_198_p1();
    void thread_grp_fu_202_ce();
    void thread_grp_fu_202_p0();
    void thread_grp_fu_202_p1();
    void thread_i_1_fu_238_p2();
    void thread_i_2_fu_255_p2();
    void thread_i_3_fu_290_p2();
    void thread_i_4_fu_315_p2();
    void thread_inp_Addr_A();
    void thread_inp_Addr_A_orig();
    void thread_inp_Clk_A();
    void thread_inp_Din_A();
    void thread_inp_EN_A();
    void thread_inp_Rst_A();
    void thread_inp_WEN_A();
    void thread_out_r_Addr_A();
    void thread_out_r_Addr_A_orig();
    void thread_out_r_Clk_A();
    void thread_out_r_Din_A();
    void thread_out_r_EN_A();
    void thread_out_r_Rst_A();
    void thread_out_r_WEN_A();
    void thread_softmax_control_s_axi_U_ap_dummy_ce();
    void thread_sum_1_phi_fu_144_p4();
    void thread_temp_1_1_fu_270_p3();
    void thread_temp_1_2_fu_277_p3();
    void thread_temp_load_1_phi_fu_325_p3();
    void thread_temp_load_phi_fu_300_p3();
    void thread_tmp_11_fu_266_p1();
    void thread_tmp_12_fu_296_p1();
    void thread_tmp_13_fu_321_p1();
    void thread_tmp_2_fu_334_p1();
    void thread_tmp_3_fu_261_p1();
    void thread_tmp_fu_244_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
