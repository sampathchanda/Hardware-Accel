// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "maxpool.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic maxpool::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> maxpool::ap_const_lv8_0 = "00000000";
const sc_logic maxpool::ap_const_logic_1 = sc_dt::Log_1;
const bool maxpool::ap_true = true;

maxpool::maxpool(sc_module_name name) : sc_module(name), mVcdFile(0) {
    maxpool_Loop_LOOP_proc_U0 = new maxpool_Loop_LOOP_proc("maxpool_Loop_LOOP_proc_U0");
    maxpool_Loop_LOOP_proc_U0->ap_clk(ap_clk);
    maxpool_Loop_LOOP_proc_U0->ap_rst(ap_rst);
    maxpool_Loop_LOOP_proc_U0->ap_start(maxpool_Loop_LOOP_proc_U0_ap_start);
    maxpool_Loop_LOOP_proc_U0->ap_done(maxpool_Loop_LOOP_proc_U0_ap_done);
    maxpool_Loop_LOOP_proc_U0->ap_continue(maxpool_Loop_LOOP_proc_U0_ap_continue);
    maxpool_Loop_LOOP_proc_U0->ap_idle(maxpool_Loop_LOOP_proc_U0_ap_idle);
    maxpool_Loop_LOOP_proc_U0->ap_ready(maxpool_Loop_LOOP_proc_U0_ap_ready);
    maxpool_Loop_LOOP_proc_U0->output_V_din(maxpool_Loop_LOOP_proc_U0_output_V_din);
    maxpool_Loop_LOOP_proc_U0->output_V_full_n(maxpool_Loop_LOOP_proc_U0_output_V_full_n);
    maxpool_Loop_LOOP_proc_U0->output_V_write(maxpool_Loop_LOOP_proc_U0_output_V_write);
    maxpool_Loop_LOOP_proc_U0->input_V_dout(maxpool_Loop_LOOP_proc_U0_input_V_dout);
    maxpool_Loop_LOOP_proc_U0->input_V_empty_n(maxpool_Loop_LOOP_proc_U0_input_V_empty_n);
    maxpool_Loop_LOOP_proc_U0->input_V_read(maxpool_Loop_LOOP_proc_U0_input_V_read);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_sig_hs_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( maxpool_Loop_LOOP_proc_U0_ap_idle );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_top_allready );

    SC_METHOD(thread_ap_sig_hs_continue);

    SC_METHOD(thread_ap_sig_hs_done);
    sensitive << ( maxpool_Loop_LOOP_proc_U0_ap_done );

    SC_METHOD(thread_ap_sig_top_allready);
    sensitive << ( maxpool_Loop_LOOP_proc_U0_ap_ready );

    SC_METHOD(thread_input_V_read);
    sensitive << ( maxpool_Loop_LOOP_proc_U0_input_V_read );

    SC_METHOD(thread_maxpool_Loop_LOOP_proc_U0_ap_continue);
    sensitive << ( ap_sig_hs_continue );

    SC_METHOD(thread_maxpool_Loop_LOOP_proc_U0_ap_start);
    sensitive << ( ap_rst );
    sensitive << ( ap_start );

    SC_METHOD(thread_maxpool_Loop_LOOP_proc_U0_input_V_dout);
    sensitive << ( input_V_dout );

    SC_METHOD(thread_maxpool_Loop_LOOP_proc_U0_input_V_empty_n);
    sensitive << ( input_V_empty_n );

    SC_METHOD(thread_maxpool_Loop_LOOP_proc_U0_output_V_full_n);
    sensitive << ( output_V_full_n );

    SC_METHOD(thread_output_V_din);
    sensitive << ( maxpool_Loop_LOOP_proc_U0_output_V_din );

    SC_METHOD(thread_output_V_write);
    sensitive << ( maxpool_Loop_LOOP_proc_U0_output_V_write );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_reg_procdone_maxpool_Loop_LOOP_proc_U0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "maxpool_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, begin_r, "(port)begin_r");
    sc_trace(mVcdFile, input_V_dout, "(port)input_V_dout");
    sc_trace(mVcdFile, input_V_empty_n, "(port)input_V_empty_n");
    sc_trace(mVcdFile, input_V_read, "(port)input_V_read");
    sc_trace(mVcdFile, output_V_din, "(port)output_V_din");
    sc_trace(mVcdFile, output_V_full_n, "(port)output_V_full_n");
    sc_trace(mVcdFile, output_V_write, "(port)output_V_write");
    sc_trace(mVcdFile, ok, "(port)ok");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_ap_start, "maxpool_Loop_LOOP_proc_U0_ap_start");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_ap_done, "maxpool_Loop_LOOP_proc_U0_ap_done");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_ap_continue, "maxpool_Loop_LOOP_proc_U0_ap_continue");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_ap_idle, "maxpool_Loop_LOOP_proc_U0_ap_idle");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_ap_ready, "maxpool_Loop_LOOP_proc_U0_ap_ready");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_output_V_din, "maxpool_Loop_LOOP_proc_U0_output_V_din");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_output_V_full_n, "maxpool_Loop_LOOP_proc_U0_output_V_full_n");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_output_V_write, "maxpool_Loop_LOOP_proc_U0_output_V_write");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_input_V_dout, "maxpool_Loop_LOOP_proc_U0_input_V_dout");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_input_V_empty_n, "maxpool_Loop_LOOP_proc_U0_input_V_empty_n");
    sc_trace(mVcdFile, maxpool_Loop_LOOP_proc_U0_input_V_read, "maxpool_Loop_LOOP_proc_U0_input_V_read");
    sc_trace(mVcdFile, ap_sig_hs_continue, "ap_sig_hs_continue");
    sc_trace(mVcdFile, ap_reg_procdone_maxpool_Loop_LOOP_proc_U0, "ap_reg_procdone_maxpool_Loop_LOOP_proc_U0");
    sc_trace(mVcdFile, ap_sig_hs_done, "ap_sig_hs_done");
    sc_trace(mVcdFile, ap_CS, "ap_CS");
    sc_trace(mVcdFile, ap_sig_top_allready, "ap_sig_top_allready");
#endif

    }
    mHdltvinHandle.open("maxpool.hdltvin.dat");
    mHdltvoutHandle.open("maxpool.hdltvout.dat");
}

maxpool::~maxpool() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete maxpool_Loop_LOOP_proc_U0;
}

void maxpool::thread_ap_clk_no_reset_() {
    ap_CS = ap_const_logic_0;
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_procdone_maxpool_Loop_LOOP_proc_U0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_hs_done.read())) {
            ap_reg_procdone_maxpool_Loop_LOOP_proc_U0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(maxpool_Loop_LOOP_proc_U0_ap_done.read(), ap_const_logic_1)) {
            ap_reg_procdone_maxpool_Loop_LOOP_proc_U0 = ap_const_logic_1;
        }
    }
}

void maxpool::thread_ap_done() {
    ap_done = ap_sig_hs_done.read();
}

void maxpool::thread_ap_idle() {
    if (esl_seteq<1,1,1>(maxpool_Loop_LOOP_proc_U0_ap_idle.read(), ap_const_logic_1)) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void maxpool::thread_ap_ready() {
    ap_ready = ap_sig_top_allready.read();
}

void maxpool::thread_ap_sig_hs_continue() {
    ap_sig_hs_continue = ap_const_logic_1;
}

void maxpool::thread_ap_sig_hs_done() {
    if (esl_seteq<1,1,1>(maxpool_Loop_LOOP_proc_U0_ap_done.read(), ap_const_logic_1)) {
        ap_sig_hs_done = ap_const_logic_1;
    } else {
        ap_sig_hs_done = ap_const_logic_0;
    }
}

void maxpool::thread_ap_sig_top_allready() {
    ap_sig_top_allready = maxpool_Loop_LOOP_proc_U0_ap_ready.read();
}

void maxpool::thread_input_V_read() {
    input_V_read = maxpool_Loop_LOOP_proc_U0_input_V_read.read();
}

void maxpool::thread_maxpool_Loop_LOOP_proc_U0_ap_continue() {
    maxpool_Loop_LOOP_proc_U0_ap_continue = ap_sig_hs_continue.read();
}

void maxpool::thread_maxpool_Loop_LOOP_proc_U0_ap_start() {
    if ( ap_rst.read() == ap_const_logic_1) {
        maxpool_Loop_LOOP_proc_U0_ap_start = ap_const_logic_0;
    } else {
        maxpool_Loop_LOOP_proc_U0_ap_start = ap_start.read();
    }
}

void maxpool::thread_maxpool_Loop_LOOP_proc_U0_input_V_dout() {
    maxpool_Loop_LOOP_proc_U0_input_V_dout = input_V_dout.read();
}

void maxpool::thread_maxpool_Loop_LOOP_proc_U0_input_V_empty_n() {
    maxpool_Loop_LOOP_proc_U0_input_V_empty_n = input_V_empty_n.read();
}

void maxpool::thread_maxpool_Loop_LOOP_proc_U0_output_V_full_n() {
    maxpool_Loop_LOOP_proc_U0_output_V_full_n = output_V_full_n.read();
}

void maxpool::thread_output_V_din() {
    output_V_din = maxpool_Loop_LOOP_proc_U0_output_V_din.read();
}

void maxpool::thread_output_V_write() {
    output_V_write = maxpool_Loop_LOOP_proc_U0_output_V_write.read();
}

void maxpool::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"begin_r\" :  \"" << begin_r.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_V_dout\" :  \"" << input_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_V_empty_n\" :  \"" << input_V_empty_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"input_V_read\" :  \"" << input_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_V_din\" :  \"" << output_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"output_V_full_n\" :  \"" << output_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_V_write\" :  \"" << output_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ok\" :  \"" << ok.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
