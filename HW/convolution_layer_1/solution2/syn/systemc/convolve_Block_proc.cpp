// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "convolve_Block_proc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic convolve_Block_proc::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic convolve_Block_proc::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> convolve_Block_proc::ap_ST_st1_fsm_0 = "1";
const sc_lv<32> convolve_Block_proc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> convolve_Block_proc::ap_const_lv1_1 = "1";
const sc_lv<1> convolve_Block_proc::ap_const_lv1_0 = "0";

convolve_Block_proc::convolve_Block_proc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_33 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_33 );

    SC_METHOD(thread_ap_sig_bdd_20);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_33);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_20 );

    SC_METHOD(thread_done);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_33 );

    SC_METHOD(thread_done_ap_vld);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_33 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_sig_bdd_33 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "1";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "convolve_Block_proc_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, done, "(port)done");
    sc_trace(mVcdFile, done_ap_vld, "(port)done_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_20, "ap_sig_bdd_20");
    sc_trace(mVcdFile, ap_sig_bdd_33, "ap_sig_bdd_33");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

convolve_Block_proc::~convolve_Block_proc() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void convolve_Block_proc::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_bdd_33.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
}

void convolve_Block_proc::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !ap_sig_bdd_33.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void convolve_Block_proc::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void convolve_Block_proc::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_bdd_33.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void convolve_Block_proc::thread_ap_sig_bdd_20() {
    ap_sig_bdd_20 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void convolve_Block_proc::thread_ap_sig_bdd_33() {
    ap_sig_bdd_33 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void convolve_Block_proc::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_20.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void convolve_Block_proc::thread_done() {
    done = ap_const_lv1_0;
}

void convolve_Block_proc::thread_done_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_bdd_33.read())) {
        done_ap_vld = ap_const_logic_1;
    } else {
        done_ap_vld = ap_const_logic_0;
    }
}

void convolve_Block_proc::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}
