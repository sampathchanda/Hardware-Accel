// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _feature_extractor_HH_
#define _feature_extractor_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "feature_extractor_convolve.h"
#include "feature_extractor_maxpool.h"
#include "feature_extractor_fcmp_32ns_32ns_1_1.h"
#include "feature_extractor_C.h"

namespace ap_rtl {

struct feature_extractor : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<7> > W_address0;
    sc_out< sc_logic > W_ce0;
    sc_in< sc_lv<32> > W_q0;
    sc_out< sc_lv<6> > feature_address0;
    sc_out< sc_logic > feature_ce0;
    sc_out< sc_logic > feature_we0;
    sc_out< sc_lv<32> > feature_d0;


    // Module declarations
    feature_extractor(sc_module_name name);
    SC_HAS_PROCESS(feature_extractor);

    ~feature_extractor();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    feature_extractor_C* C_U;
    feature_extractor_C* S_U;
    feature_extractor_convolve* grp_feature_extractor_convolve_fu_155;
    feature_extractor_maxpool* grp_feature_extractor_maxpool_fu_168;
    feature_extractor_fcmp_32ns_32ns_1_1<1,1,32,32,1>* feature_extractor_fcmp_32ns_32ns_1_1_U15;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_27;
    sc_signal< sc_lv<2> > i_1_fu_190_p2;
    sc_signal< sc_lv<2> > i_1_reg_342;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_60;
    sc_signal< sc_lv<2> > j_1_fu_202_p2;
    sc_signal< sc_lv<2> > j_1_reg_350;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_69;
    sc_signal< sc_lv<6> > p_addr_cast_fu_216_p1;
    sc_signal< sc_lv<6> > p_addr_cast_reg_355;
    sc_signal< sc_lv<1> > exitcond1_fu_196_p2;
    sc_signal< sc_lv<4> > i_2_fu_226_p2;
    sc_signal< sc_lv<4> > i_2_reg_363;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_bdd_84;
    sc_signal< sc_lv<32> > p_addr2_fu_249_p1;
    sc_signal< sc_lv<32> > p_addr2_reg_368;
    sc_signal< sc_lv<1> > exitcond1_i_fu_220_p2;
    sc_signal< sc_lv<4> > j_2_fu_259_p2;
    sc_signal< sc_lv<4> > j_2_reg_376;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_bdd_98;
    sc_signal< sc_lv<64> > tmp_8_fu_274_p1;
    sc_signal< sc_lv<64> > tmp_8_reg_381;
    sc_signal< sc_lv<1> > exitcond_i_fu_253_p2;
    sc_signal< sc_lv<32> > C_q0;
    sc_signal< sc_lv<32> > C_load_reg_391;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_bdd_114;
    sc_signal< sc_lv<1> > tmp_6_fu_314_p2;
    sc_signal< sc_lv<1> > tmp_6_reg_398;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_bdd_123;
    sc_signal< sc_lv<2> > k_1_fu_333_p2;
    sc_signal< sc_lv<2> > k_1_reg_406;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_bdd_132;
    sc_signal< sc_lv<8> > C_address0;
    sc_signal< sc_logic > C_ce0;
    sc_signal< sc_logic > C_we0;
    sc_signal< sc_lv<32> > C_d0;
    sc_signal< sc_lv<8> > S_address0;
    sc_signal< sc_logic > S_ce0;
    sc_signal< sc_logic > S_we0;
    sc_signal< sc_lv<32> > S_d0;
    sc_signal< sc_lv<32> > S_q0;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_ap_start;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_ap_done;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_ap_idle;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_ap_ready;
    sc_signal< sc_lv<8> > grp_feature_extractor_convolve_fu_155_A_address0;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_A_ce0;
    sc_signal< sc_lv<32> > grp_feature_extractor_convolve_fu_155_A_q0;
    sc_signal< sc_lv<7> > grp_feature_extractor_convolve_fu_155_B_address0;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_B_ce0;
    sc_signal< sc_lv<32> > grp_feature_extractor_convolve_fu_155_B_q0;
    sc_signal< sc_lv<2> > grp_feature_extractor_convolve_fu_155_tmp;
    sc_signal< sc_lv<8> > grp_feature_extractor_convolve_fu_155_conv_address0;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_conv_ce0;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_conv_we0;
    sc_signal< sc_lv<32> > grp_feature_extractor_convolve_fu_155_conv_d0;
    sc_signal< sc_lv<32> > grp_feature_extractor_convolve_fu_155_conv_q0;
    sc_signal< sc_lv<2> > grp_feature_extractor_convolve_fu_155_tmp1;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_ap_start;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_ap_done;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_ap_idle;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_ap_ready;
    sc_signal< sc_lv<8> > grp_feature_extractor_maxpool_fu_168_input_mat_address0;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_input_mat_ce0;
    sc_signal< sc_lv<32> > grp_feature_extractor_maxpool_fu_168_input_mat_q0;
    sc_signal< sc_lv<2> > grp_feature_extractor_maxpool_fu_168_tmp_4;
    sc_signal< sc_lv<6> > grp_feature_extractor_maxpool_fu_168_output_mat_address0;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_output_mat_ce0;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_output_mat_we0;
    sc_signal< sc_lv<32> > grp_feature_extractor_maxpool_fu_168_output_mat_d0;
    sc_signal< sc_lv<2> > grp_feature_extractor_maxpool_fu_168_tmp_41;
    sc_signal< sc_lv<2> > i_reg_98;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_197;
    sc_signal< sc_lv<2> > j_reg_110;
    sc_signal< sc_lv<1> > exitcond2_fu_184_p2;
    sc_signal< sc_lv<4> > i_i_reg_121;
    sc_signal< sc_lv<4> > j_i_reg_132;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_bdd_222;
    sc_signal< sc_lv<2> > k_reg_143;
    sc_signal< sc_logic > ap_sig_cseq_ST_st11_fsm_10;
    sc_signal< bool > ap_sig_bdd_231;
    sc_signal< sc_logic > grp_feature_extractor_convolve_fu_155_ap_start_ap_start_reg;
    sc_signal< sc_logic > grp_feature_extractor_maxpool_fu_168_ap_start_ap_start_reg;
    sc_signal< sc_lv<1> > exitcond_fu_327_p2;
    sc_signal< sc_lv<32> > tmp_5_fu_179_p0;
    sc_signal< sc_lv<32> > tmp_5_fu_179_p1;
    sc_signal< sc_lv<5> > tmp_2_fu_208_p3;
    sc_signal< sc_lv<6> > tmp_i_trn_cast_fu_232_p1;
    sc_signal< sc_lv<6> > p_addr1_fu_236_p2;
    sc_signal< sc_lv<9> > tmp_1_fu_241_p3;
    sc_signal< sc_lv<32> > tmp_i_trn_fu_265_p1;
    sc_signal< sc_lv<32> > p_addr3_fu_269_p2;
    sc_signal< sc_lv<32> > b_assign_to_int_fu_279_p1;
    sc_signal< sc_lv<8> > tmp_fu_282_p4;
    sc_signal< sc_lv<23> > tmp_7_fu_292_p1;
    sc_signal< sc_lv<1> > notrhs_fu_302_p2;
    sc_signal< sc_lv<1> > notlhs_fu_296_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_308_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_179_p2;
    sc_signal< sc_lv<5> > tmp_5_fu_179_opcode;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_st1_fsm_0;
    static const sc_lv<11> ap_ST_st2_fsm_1;
    static const sc_lv<11> ap_ST_st3_fsm_2;
    static const sc_lv<11> ap_ST_st4_fsm_3;
    static const sc_lv<11> ap_ST_st5_fsm_4;
    static const sc_lv<11> ap_ST_st6_fsm_5;
    static const sc_lv<11> ap_ST_st7_fsm_6;
    static const sc_lv<11> ap_ST_st8_fsm_7;
    static const sc_lv<11> ap_ST_st9_fsm_8;
    static const sc_lv<11> ap_ST_st10_fsm_9;
    static const sc_lv<11> ap_ST_st11_fsm_10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_4;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_ce0();
    void thread_C_address0();
    void thread_C_ce0();
    void thread_C_d0();
    void thread_C_we0();
    void thread_S_address0();
    void thread_S_ce0();
    void thread_S_d0();
    void thread_S_we0();
    void thread_W_address0();
    void thread_W_ce0();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_114();
    void thread_ap_sig_bdd_123();
    void thread_ap_sig_bdd_132();
    void thread_ap_sig_bdd_197();
    void thread_ap_sig_bdd_222();
    void thread_ap_sig_bdd_231();
    void thread_ap_sig_bdd_27();
    void thread_ap_sig_bdd_60();
    void thread_ap_sig_bdd_69();
    void thread_ap_sig_bdd_84();
    void thread_ap_sig_bdd_98();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st11_fsm_10();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_b_assign_to_int_fu_279_p1();
    void thread_exitcond1_fu_196_p2();
    void thread_exitcond1_i_fu_220_p2();
    void thread_exitcond2_fu_184_p2();
    void thread_exitcond_fu_327_p2();
    void thread_exitcond_i_fu_253_p2();
    void thread_feature_address0();
    void thread_feature_ce0();
    void thread_feature_d0();
    void thread_feature_we0();
    void thread_grp_feature_extractor_convolve_fu_155_A_q0();
    void thread_grp_feature_extractor_convolve_fu_155_B_q0();
    void thread_grp_feature_extractor_convolve_fu_155_ap_start();
    void thread_grp_feature_extractor_convolve_fu_155_conv_q0();
    void thread_grp_feature_extractor_convolve_fu_155_tmp();
    void thread_grp_feature_extractor_convolve_fu_155_tmp1();
    void thread_grp_feature_extractor_maxpool_fu_168_ap_start();
    void thread_grp_feature_extractor_maxpool_fu_168_input_mat_q0();
    void thread_grp_feature_extractor_maxpool_fu_168_tmp_4();
    void thread_grp_feature_extractor_maxpool_fu_168_tmp_41();
    void thread_i_1_fu_190_p2();
    void thread_i_2_fu_226_p2();
    void thread_j_1_fu_202_p2();
    void thread_j_2_fu_259_p2();
    void thread_k_1_fu_333_p2();
    void thread_notlhs_fu_296_p2();
    void thread_notrhs_fu_302_p2();
    void thread_p_addr1_fu_236_p2();
    void thread_p_addr2_fu_249_p1();
    void thread_p_addr3_fu_269_p2();
    void thread_p_addr_cast_fu_216_p1();
    void thread_tmp_1_fu_241_p3();
    void thread_tmp_2_fu_208_p3();
    void thread_tmp_4_fu_308_p2();
    void thread_tmp_5_fu_179_opcode();
    void thread_tmp_5_fu_179_p0();
    void thread_tmp_5_fu_179_p1();
    void thread_tmp_6_fu_314_p2();
    void thread_tmp_7_fu_292_p1();
    void thread_tmp_8_fu_274_p1();
    void thread_tmp_fu_282_p4();
    void thread_tmp_i_trn_cast_fu_232_p1();
    void thread_tmp_i_trn_fu_265_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif