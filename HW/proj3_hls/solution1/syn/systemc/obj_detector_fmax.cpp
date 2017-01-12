// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "obj_detector_fmax.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const bool obj_detector_fmax::ap_true = true;
const sc_lv<1> obj_detector_fmax::ap_const_lv1_0 = "0";
const sc_lv<32> obj_detector_fmax::ap_const_lv32_3F = "111111";
const sc_lv<32> obj_detector_fmax::ap_const_lv32_34 = "110100";
const sc_lv<32> obj_detector_fmax::ap_const_lv32_3E = "111110";
const sc_lv<11> obj_detector_fmax::ap_const_lv11_0 = "00000000000";
const sc_lv<52> obj_detector_fmax::ap_const_lv52_0 = "0000000000000000000000000000000000000000000000000000";
const sc_lv<11> obj_detector_fmax::ap_const_lv11_7FF = "11111111111";
const sc_lv<52> obj_detector_fmax::ap_const_lv52_8000000000000 = "1000000000000000000000000000000000000000000000000000";
const sc_lv<1> obj_detector_fmax::ap_const_lv1_1 = "1";
const sc_lv<5> obj_detector_fmax::ap_const_lv5_2 = "10";
const sc_logic obj_detector_fmax::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic obj_detector_fmax::ap_const_logic_0 = sc_dt::Log_0;

obj_detector_fmax::obj_detector_fmax(sc_module_name name) : sc_module(name), mVcdFile(0) {
    obj_detector_dcmp_64ns_64ns_1_1_U28 = new obj_detector_dcmp_64ns_64ns_1_1<1,1,64,64,1>("obj_detector_dcmp_64ns_64ns_1_1_U28");
    obj_detector_dcmp_64ns_64ns_1_1_U28->din0(tmp_9_fu_40_p0);
    obj_detector_dcmp_64ns_64ns_1_1_U28->din1(tmp_9_fu_40_p1);
    obj_detector_dcmp_64ns_64ns_1_1_U28->opcode(tmp_9_fu_40_opcode);
    obj_detector_dcmp_64ns_64ns_1_1_U28->dout(tmp_9_fu_40_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_reg_ppstg_x_read_reg_258_pp0_it1 );
    sensitive << ( sel_tmp3_fu_237_p2 );
    sensitive << ( res_4_fu_225_p3 );

    SC_METHOD(thread_loc_V_1_fu_66_p1);
    sensitive << ( p_Val2_s_fu_44_p1 );

    SC_METHOD(thread_loc_V_2_fu_74_p4);
    sensitive << ( p_Val2_1_fu_70_p1 );

    SC_METHOD(thread_loc_V_3_fu_84_p1);
    sensitive << ( p_Val2_1_fu_70_p1 );

    SC_METHOD(thread_loc_V_fu_56_p4);
    sensitive << ( p_Val2_s_fu_44_p1 );

    SC_METHOD(thread_or_cond2_i_fu_124_p2);
    sensitive << ( tmp1_fu_118_p2 );
    sensitive << ( tmp_fu_112_p2 );

    SC_METHOD(thread_or_cond3_i_fu_136_p2);
    sensitive << ( tmp_i_7_fu_94_p2 );
    sensitive << ( tmp_3_i_fu_130_p2 );

    SC_METHOD(thread_or_cond4_i_fu_148_p2);
    sensitive << ( tmp_2_i_fu_106_p2 );
    sensitive << ( tmp_4_i_fu_142_p2 );

    SC_METHOD(thread_p_Result_s_fu_174_p4);
    sensitive << ( ap_reg_ppstg_p_Result_6_reg_265_pp0_it1 );
    sensitive << ( x_fp_sig_V_fu_169_p2 );

    SC_METHOD(thread_p_Val2_1_fu_70_p1);
    sensitive << ( y );

    SC_METHOD(thread_p_Val2_s_fu_44_p1);
    sensitive << ( x );

    SC_METHOD(thread_res_1_fu_183_p1);
    sensitive << ( p_Result_s_fu_174_p4 );

    SC_METHOD(thread_res_2_fu_196_p3);
    sensitive << ( sel_tmp2_fu_191_p2 );
    sensitive << ( res_fu_164_p3 );
    sensitive << ( res_1_fu_183_p1 );

    SC_METHOD(thread_res_3_fu_204_p3);
    sensitive << ( ap_reg_ppstg_y_read_reg_250_pp0_it1 );
    sensitive << ( ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1 );
    sensitive << ( res_2_fu_196_p3 );

    SC_METHOD(thread_res_4_fu_225_p3);
    sensitive << ( ap_reg_ppstg_y_read_reg_250_pp0_it1 );
    sensitive << ( sel_tmp8_fu_220_p2 );
    sensitive << ( res_3_fu_204_p3 );

    SC_METHOD(thread_res_fu_164_p3);
    sensitive << ( ap_reg_ppstg_y_read_reg_250_pp0_it1 );
    sensitive << ( ap_reg_ppstg_x_read_reg_258_pp0_it1 );
    sensitive << ( tmp_s_reg_297 );

    SC_METHOD(thread_sel_tmp1_fu_187_p2);
    sensitive << ( ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1 );
    sensitive << ( ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1 );

    SC_METHOD(thread_sel_tmp2_fu_191_p2);
    sensitive << ( ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1 );
    sensitive << ( sel_tmp1_fu_187_p2 );

    SC_METHOD(thread_sel_tmp3_fu_237_p2);
    sensitive << ( sel_tmp1_fu_187_p2 );
    sensitive << ( sel_tmp_fu_232_p2 );

    SC_METHOD(thread_sel_tmp7_demorgan_fu_210_p2);
    sensitive << ( ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1 );
    sensitive << ( ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1 );

    SC_METHOD(thread_sel_tmp7_fu_214_p2);
    sensitive << ( sel_tmp7_demorgan_fu_210_p2 );

    SC_METHOD(thread_sel_tmp8_fu_220_p2);
    sensitive << ( ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1 );
    sensitive << ( sel_tmp7_fu_214_p2 );

    SC_METHOD(thread_sel_tmp_fu_232_p2);
    sensitive << ( ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1 );

    SC_METHOD(thread_tmp1_fu_118_p2);
    sensitive << ( tmp_i_fu_88_p2 );
    sensitive << ( tmp_2_i_fu_106_p2 );

    SC_METHOD(thread_tmp_1_i_fu_100_p2);
    sensitive << ( loc_V_2_fu_74_p4 );

    SC_METHOD(thread_tmp_2_i_fu_106_p2);
    sensitive << ( loc_V_3_fu_84_p1 );

    SC_METHOD(thread_tmp_3_i_fu_130_p2);
    sensitive << ( loc_V_fu_56_p4 );

    SC_METHOD(thread_tmp_4_i_fu_142_p2);
    sensitive << ( loc_V_2_fu_74_p4 );

    SC_METHOD(thread_tmp_8_fu_154_p2);
    sensitive << ( or_cond3_i_reg_282 );
    sensitive << ( or_cond4_i_reg_289 );

    SC_METHOD(thread_tmp_9_fu_40_opcode);
    sensitive << ( or_cond2_i_reg_275 );

    SC_METHOD(thread_tmp_9_fu_40_p0);
    sensitive << ( x_read_reg_258 );

    SC_METHOD(thread_tmp_9_fu_40_p1);
    sensitive << ( y_read_reg_250 );

    SC_METHOD(thread_tmp_fu_112_p2);
    sensitive << ( tmp_i_7_fu_94_p2 );
    sensitive << ( tmp_1_i_fu_100_p2 );

    SC_METHOD(thread_tmp_i_7_fu_94_p2);
    sensitive << ( loc_V_1_fu_66_p1 );

    SC_METHOD(thread_tmp_i_fu_88_p2);
    sensitive << ( loc_V_fu_56_p4 );

    SC_METHOD(thread_tmp_s_fu_158_p2);
    sensitive << ( tmp_8_fu_154_p2 );
    sensitive << ( tmp_9_fu_40_p2 );

    SC_METHOD(thread_x_fp_sig_V_fu_169_p2);
    sensitive << ( ap_reg_ppstg_loc_V_1_reg_270_pp0_it1 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "obj_detector_fmax_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, y, "(port)y");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, y_read_reg_250, "y_read_reg_250");
    sc_trace(mVcdFile, ap_reg_ppstg_y_read_reg_250_pp0_it1, "ap_reg_ppstg_y_read_reg_250_pp0_it1");
    sc_trace(mVcdFile, x_read_reg_258, "x_read_reg_258");
    sc_trace(mVcdFile, ap_reg_ppstg_x_read_reg_258_pp0_it1, "ap_reg_ppstg_x_read_reg_258_pp0_it1");
    sc_trace(mVcdFile, p_Result_6_reg_265, "p_Result_6_reg_265");
    sc_trace(mVcdFile, ap_reg_ppstg_p_Result_6_reg_265_pp0_it1, "ap_reg_ppstg_p_Result_6_reg_265_pp0_it1");
    sc_trace(mVcdFile, loc_V_1_fu_66_p1, "loc_V_1_fu_66_p1");
    sc_trace(mVcdFile, loc_V_1_reg_270, "loc_V_1_reg_270");
    sc_trace(mVcdFile, ap_reg_ppstg_loc_V_1_reg_270_pp0_it1, "ap_reg_ppstg_loc_V_1_reg_270_pp0_it1");
    sc_trace(mVcdFile, or_cond2_i_fu_124_p2, "or_cond2_i_fu_124_p2");
    sc_trace(mVcdFile, or_cond2_i_reg_275, "or_cond2_i_reg_275");
    sc_trace(mVcdFile, ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1, "ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1");
    sc_trace(mVcdFile, or_cond3_i_fu_136_p2, "or_cond3_i_fu_136_p2");
    sc_trace(mVcdFile, or_cond3_i_reg_282, "or_cond3_i_reg_282");
    sc_trace(mVcdFile, ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1, "ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1");
    sc_trace(mVcdFile, or_cond4_i_fu_148_p2, "or_cond4_i_fu_148_p2");
    sc_trace(mVcdFile, or_cond4_i_reg_289, "or_cond4_i_reg_289");
    sc_trace(mVcdFile, ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1, "ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1");
    sc_trace(mVcdFile, tmp_s_fu_158_p2, "tmp_s_fu_158_p2");
    sc_trace(mVcdFile, tmp_s_reg_297, "tmp_s_reg_297");
    sc_trace(mVcdFile, tmp_9_fu_40_p0, "tmp_9_fu_40_p0");
    sc_trace(mVcdFile, tmp_9_fu_40_p1, "tmp_9_fu_40_p1");
    sc_trace(mVcdFile, p_Val2_s_fu_44_p1, "p_Val2_s_fu_44_p1");
    sc_trace(mVcdFile, p_Val2_1_fu_70_p1, "p_Val2_1_fu_70_p1");
    sc_trace(mVcdFile, loc_V_fu_56_p4, "loc_V_fu_56_p4");
    sc_trace(mVcdFile, loc_V_2_fu_74_p4, "loc_V_2_fu_74_p4");
    sc_trace(mVcdFile, loc_V_3_fu_84_p1, "loc_V_3_fu_84_p1");
    sc_trace(mVcdFile, tmp_i_7_fu_94_p2, "tmp_i_7_fu_94_p2");
    sc_trace(mVcdFile, tmp_1_i_fu_100_p2, "tmp_1_i_fu_100_p2");
    sc_trace(mVcdFile, tmp_i_fu_88_p2, "tmp_i_fu_88_p2");
    sc_trace(mVcdFile, tmp_2_i_fu_106_p2, "tmp_2_i_fu_106_p2");
    sc_trace(mVcdFile, tmp1_fu_118_p2, "tmp1_fu_118_p2");
    sc_trace(mVcdFile, tmp_fu_112_p2, "tmp_fu_112_p2");
    sc_trace(mVcdFile, tmp_3_i_fu_130_p2, "tmp_3_i_fu_130_p2");
    sc_trace(mVcdFile, tmp_4_i_fu_142_p2, "tmp_4_i_fu_142_p2");
    sc_trace(mVcdFile, tmp_8_fu_154_p2, "tmp_8_fu_154_p2");
    sc_trace(mVcdFile, tmp_9_fu_40_p2, "tmp_9_fu_40_p2");
    sc_trace(mVcdFile, x_fp_sig_V_fu_169_p2, "x_fp_sig_V_fu_169_p2");
    sc_trace(mVcdFile, p_Result_s_fu_174_p4, "p_Result_s_fu_174_p4");
    sc_trace(mVcdFile, sel_tmp1_fu_187_p2, "sel_tmp1_fu_187_p2");
    sc_trace(mVcdFile, sel_tmp2_fu_191_p2, "sel_tmp2_fu_191_p2");
    sc_trace(mVcdFile, res_fu_164_p3, "res_fu_164_p3");
    sc_trace(mVcdFile, res_1_fu_183_p1, "res_1_fu_183_p1");
    sc_trace(mVcdFile, res_2_fu_196_p3, "res_2_fu_196_p3");
    sc_trace(mVcdFile, sel_tmp7_demorgan_fu_210_p2, "sel_tmp7_demorgan_fu_210_p2");
    sc_trace(mVcdFile, sel_tmp7_fu_214_p2, "sel_tmp7_fu_214_p2");
    sc_trace(mVcdFile, sel_tmp8_fu_220_p2, "sel_tmp8_fu_220_p2");
    sc_trace(mVcdFile, res_3_fu_204_p3, "res_3_fu_204_p3");
    sc_trace(mVcdFile, sel_tmp_fu_232_p2, "sel_tmp_fu_232_p2");
    sc_trace(mVcdFile, sel_tmp3_fu_237_p2, "sel_tmp3_fu_237_p2");
    sc_trace(mVcdFile, res_4_fu_225_p3, "res_4_fu_225_p3");
    sc_trace(mVcdFile, tmp_9_fu_40_opcode, "tmp_9_fu_40_opcode");
#endif

    }
}

obj_detector_fmax::~obj_detector_fmax() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete obj_detector_dcmp_64ns_64ns_1_1_U28;
}

void obj_detector_fmax::thread_ap_clk_no_reset_() {
    if (esl_seteq<1,1,1>(ap_true, ap_true)) {
        ap_reg_ppstg_loc_V_1_reg_270_pp0_it1 = loc_V_1_reg_270.read();
        ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1 = or_cond2_i_reg_275.read();
        ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1 = or_cond3_i_reg_282.read();
        ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1 = or_cond4_i_reg_289.read();
        ap_reg_ppstg_p_Result_6_reg_265_pp0_it1 = p_Result_6_reg_265.read();
        ap_reg_ppstg_x_read_reg_258_pp0_it1 = x_read_reg_258.read();
        ap_reg_ppstg_y_read_reg_250_pp0_it1 = y_read_reg_250.read();
        loc_V_1_reg_270 = loc_V_1_fu_66_p1.read();
        or_cond2_i_reg_275 = or_cond2_i_fu_124_p2.read();
        or_cond3_i_reg_282 = or_cond3_i_fu_136_p2.read();
        or_cond4_i_reg_289 = or_cond4_i_fu_148_p2.read();
        p_Result_6_reg_265 = p_Val2_s_fu_44_p1.read().range(63, 63);
        x_read_reg_258 = x.read();
        y_read_reg_250 = y.read();
    }
    if (esl_seteq<1,1,1>(or_cond2_i_reg_275.read(), ap_const_lv1_0)) {
        tmp_s_reg_297 = tmp_s_fu_158_p2.read();
    }
}

void obj_detector_fmax::thread_ap_return() {
    ap_return = (!sel_tmp3_fu_237_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp3_fu_237_p2.read()[0].to_bool())? ap_reg_ppstg_x_read_reg_258_pp0_it1.read(): res_4_fu_225_p3.read());
}

void obj_detector_fmax::thread_loc_V_1_fu_66_p1() {
    loc_V_1_fu_66_p1 = p_Val2_s_fu_44_p1.read().range(52-1, 0);
}

void obj_detector_fmax::thread_loc_V_2_fu_74_p4() {
    loc_V_2_fu_74_p4 = p_Val2_1_fu_70_p1.read().range(62, 52);
}

void obj_detector_fmax::thread_loc_V_3_fu_84_p1() {
    loc_V_3_fu_84_p1 = p_Val2_1_fu_70_p1.read().range(52-1, 0);
}

void obj_detector_fmax::thread_loc_V_fu_56_p4() {
    loc_V_fu_56_p4 = p_Val2_s_fu_44_p1.read().range(62, 52);
}

void obj_detector_fmax::thread_or_cond2_i_fu_124_p2() {
    or_cond2_i_fu_124_p2 = (tmp1_fu_118_p2.read() & tmp_fu_112_p2.read());
}

void obj_detector_fmax::thread_or_cond3_i_fu_136_p2() {
    or_cond3_i_fu_136_p2 = (tmp_3_i_fu_130_p2.read() | tmp_i_7_fu_94_p2.read());
}

void obj_detector_fmax::thread_or_cond4_i_fu_148_p2() {
    or_cond4_i_fu_148_p2 = (tmp_4_i_fu_142_p2.read() | tmp_2_i_fu_106_p2.read());
}

void obj_detector_fmax::thread_p_Result_s_fu_174_p4() {
    p_Result_s_fu_174_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_reg_ppstg_p_Result_6_reg_265_pp0_it1.read(), ap_const_lv11_7FF), x_fp_sig_V_fu_169_p2.read());
}

void obj_detector_fmax::thread_p_Val2_1_fu_70_p1() {
    p_Val2_1_fu_70_p1 = y.read();
}

void obj_detector_fmax::thread_p_Val2_s_fu_44_p1() {
    p_Val2_s_fu_44_p1 = x.read();
}

void obj_detector_fmax::thread_res_1_fu_183_p1() {
    res_1_fu_183_p1 = p_Result_s_fu_174_p4.read();
}

void obj_detector_fmax::thread_res_2_fu_196_p3() {
    res_2_fu_196_p3 = (!sel_tmp2_fu_191_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp2_fu_191_p2.read()[0].to_bool())? res_fu_164_p3.read(): res_1_fu_183_p1.read());
}

void obj_detector_fmax::thread_res_3_fu_204_p3() {
    res_3_fu_204_p3 = (!ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1.read()[0].is_01())? sc_lv<64>(): ((ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1.read()[0].to_bool())? ap_reg_ppstg_y_read_reg_250_pp0_it1.read(): res_2_fu_196_p3.read());
}

void obj_detector_fmax::thread_res_4_fu_225_p3() {
    res_4_fu_225_p3 = (!sel_tmp8_fu_220_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp8_fu_220_p2.read()[0].to_bool())? ap_reg_ppstg_y_read_reg_250_pp0_it1.read(): res_3_fu_204_p3.read());
}

void obj_detector_fmax::thread_res_fu_164_p3() {
    res_fu_164_p3 = (!tmp_s_reg_297.read()[0].is_01())? sc_lv<64>(): ((tmp_s_reg_297.read()[0].to_bool())? ap_reg_ppstg_x_read_reg_258_pp0_it1.read(): ap_reg_ppstg_y_read_reg_250_pp0_it1.read());
}

void obj_detector_fmax::thread_sel_tmp1_fu_187_p2() {
    sel_tmp1_fu_187_p2 = (ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1.read() ^ ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1.read());
}

void obj_detector_fmax::thread_sel_tmp2_fu_191_p2() {
    sel_tmp2_fu_191_p2 = (sel_tmp1_fu_187_p2.read() & ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1.read());
}

void obj_detector_fmax::thread_sel_tmp3_fu_237_p2() {
    sel_tmp3_fu_237_p2 = (sel_tmp1_fu_187_p2.read() & sel_tmp_fu_232_p2.read());
}

void obj_detector_fmax::thread_sel_tmp7_demorgan_fu_210_p2() {
    sel_tmp7_demorgan_fu_210_p2 = (ap_reg_ppstg_or_cond2_i_reg_275_pp0_it1.read() | ap_reg_ppstg_or_cond3_i_reg_282_pp0_it1.read());
}

void obj_detector_fmax::thread_sel_tmp7_fu_214_p2() {
    sel_tmp7_fu_214_p2 = (sel_tmp7_demorgan_fu_210_p2.read() ^ ap_const_lv1_1);
}

void obj_detector_fmax::thread_sel_tmp8_fu_220_p2() {
    sel_tmp8_fu_220_p2 = (ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1.read() & sel_tmp7_fu_214_p2.read());
}

void obj_detector_fmax::thread_sel_tmp_fu_232_p2() {
    sel_tmp_fu_232_p2 = (ap_reg_ppstg_or_cond4_i_reg_289_pp0_it1.read() ^ ap_const_lv1_1);
}

void obj_detector_fmax::thread_tmp1_fu_118_p2() {
    tmp1_fu_118_p2 = (tmp_i_fu_88_p2.read() & tmp_2_i_fu_106_p2.read());
}

void obj_detector_fmax::thread_tmp_1_i_fu_100_p2() {
    tmp_1_i_fu_100_p2 = (!loc_V_2_fu_74_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_2_fu_74_p4.read() == ap_const_lv11_0);
}

void obj_detector_fmax::thread_tmp_2_i_fu_106_p2() {
    tmp_2_i_fu_106_p2 = (!loc_V_3_fu_84_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_3_fu_84_p1.read() == ap_const_lv52_0);
}

void obj_detector_fmax::thread_tmp_3_i_fu_130_p2() {
    tmp_3_i_fu_130_p2 = (!loc_V_fu_56_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_fu_56_p4.read() != ap_const_lv11_7FF);
}

void obj_detector_fmax::thread_tmp_4_i_fu_142_p2() {
    tmp_4_i_fu_142_p2 = (!loc_V_2_fu_74_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_2_fu_74_p4.read() != ap_const_lv11_7FF);
}

void obj_detector_fmax::thread_tmp_8_fu_154_p2() {
    tmp_8_fu_154_p2 = (or_cond3_i_reg_282.read() & or_cond4_i_reg_289.read());
}

void obj_detector_fmax::thread_tmp_9_fu_40_opcode() {
    tmp_9_fu_40_opcode = ap_const_lv5_2;
}

void obj_detector_fmax::thread_tmp_9_fu_40_p0() {
    tmp_9_fu_40_p0 = x_read_reg_258.read();
}

void obj_detector_fmax::thread_tmp_9_fu_40_p1() {
    tmp_9_fu_40_p1 = y_read_reg_250.read();
}

void obj_detector_fmax::thread_tmp_fu_112_p2() {
    tmp_fu_112_p2 = (tmp_i_7_fu_94_p2.read() & tmp_1_i_fu_100_p2.read());
}

void obj_detector_fmax::thread_tmp_i_7_fu_94_p2() {
    tmp_i_7_fu_94_p2 = (!loc_V_1_fu_66_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_1_fu_66_p1.read() == ap_const_lv52_0);
}

void obj_detector_fmax::thread_tmp_i_fu_88_p2() {
    tmp_i_fu_88_p2 = (!loc_V_fu_56_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_fu_56_p4.read() == ap_const_lv11_0);
}

void obj_detector_fmax::thread_tmp_s_fu_158_p2() {
    tmp_s_fu_158_p2 = (tmp_8_fu_154_p2.read() & tmp_9_fu_40_p2.read());
}

void obj_detector_fmax::thread_x_fp_sig_V_fu_169_p2() {
    x_fp_sig_V_fu_169_p2 = (ap_reg_ppstg_loc_V_1_reg_270_pp0_it1.read() | ap_const_lv52_8000000000000);
}

}
