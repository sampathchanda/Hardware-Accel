// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _splitter_HH_
#define _splitter_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "splitter_Loop_1_proc.h"

namespace ap_rtl {

struct splitter : public sc_module {
    // Port declarations 27
    sc_in< sc_lv<8> > input_V_dout;
    sc_in< sc_logic > input_V_empty_n;
    sc_out< sc_logic > input_V_read;
    sc_out< sc_lv<8> > output_0_V_din;
    sc_in< sc_logic > output_0_V_full_n;
    sc_out< sc_logic > output_0_V_write;
    sc_out< sc_lv<8> > output_1_V_din;
    sc_in< sc_logic > output_1_V_full_n;
    sc_out< sc_logic > output_1_V_write;
    sc_out< sc_lv<8> > output_2_V_din;
    sc_in< sc_logic > output_2_V_full_n;
    sc_out< sc_logic > output_2_V_write;
    sc_out< sc_lv<8> > output_3_V_din;
    sc_in< sc_logic > output_3_V_full_n;
    sc_out< sc_logic > output_3_V_write;
    sc_out< sc_lv<8> > output_4_V_din;
    sc_in< sc_logic > output_4_V_full_n;
    sc_out< sc_logic > output_4_V_write;
    sc_out< sc_lv<8> > output_5_V_din;
    sc_in< sc_logic > output_5_V_full_n;
    sc_out< sc_logic > output_5_V_write;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;


    // Module declarations
    splitter(sc_module_name name);
    SC_HAS_PROCESS(splitter);

    ~splitter();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    splitter_Loop_1_proc* splitter_Loop_1_proc_U0;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_ap_start;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_ap_done;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_ap_continue;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_ap_idle;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_ap_ready;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_input_V_dout;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_input_V_empty_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_input_V_read;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_output_0_V_din;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_0_V_full_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_0_V_write;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_output_1_V_din;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_1_V_full_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_1_V_write;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_output_2_V_din;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_2_V_full_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_2_V_write;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_output_3_V_din;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_3_V_full_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_3_V_write;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_output_4_V_din;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_4_V_full_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_4_V_write;
    sc_signal< sc_lv<8> > splitter_Loop_1_proc_U0_output_5_V_din;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_5_V_full_n;
    sc_signal< sc_logic > splitter_Loop_1_proc_U0_output_5_V_write;
    sc_signal< sc_logic > ap_sig_hs_continue;
    sc_signal< sc_logic > ap_reg_procdone_splitter_Loop_1_proc_U0;
    sc_signal< sc_logic > ap_sig_hs_done;
    sc_signal< sc_logic > ap_CS;
    sc_signal< sc_logic > ap_sig_top_allready;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_logic ap_const_logic_1;
    static const bool ap_true;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_hs_continue();
    void thread_ap_sig_hs_done();
    void thread_ap_sig_top_allready();
    void thread_input_V_read();
    void thread_output_0_V_din();
    void thread_output_0_V_write();
    void thread_output_1_V_din();
    void thread_output_1_V_write();
    void thread_output_2_V_din();
    void thread_output_2_V_write();
    void thread_output_3_V_din();
    void thread_output_3_V_write();
    void thread_output_4_V_din();
    void thread_output_4_V_write();
    void thread_output_5_V_din();
    void thread_output_5_V_write();
    void thread_splitter_Loop_1_proc_U0_ap_continue();
    void thread_splitter_Loop_1_proc_U0_ap_start();
    void thread_splitter_Loop_1_proc_U0_input_V_dout();
    void thread_splitter_Loop_1_proc_U0_input_V_empty_n();
    void thread_splitter_Loop_1_proc_U0_output_0_V_full_n();
    void thread_splitter_Loop_1_proc_U0_output_1_V_full_n();
    void thread_splitter_Loop_1_proc_U0_output_2_V_full_n();
    void thread_splitter_Loop_1_proc_U0_output_3_V_full_n();
    void thread_splitter_Loop_1_proc_U0_output_4_V_full_n();
    void thread_splitter_Loop_1_proc_U0_output_5_V_full_n();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif