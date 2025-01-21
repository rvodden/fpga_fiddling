// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c_tb.h for the primary calling header

#ifndef VERILATED_VI2C_TB___024ROOT_H_
#define VERILATED_VI2C_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vi2c_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vi2c_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ i2c_tb__DOT__clk;
    CData/*0:0*/ i2c_tb__DOT__reset;
    CData/*0:0*/ i2c_tb__DOT__write;
    CData/*7:0*/ i2c_tb__DOT__data_in;
    CData/*2:0*/ i2c_tb__DOT__cmd;
    CData/*0:0*/ i2c_tb__DOT__SDA;
    CData/*0:0*/ i2c_tb__DOT__sda_tb;
    CData/*0:0*/ i2c_tb__DOT__drive_sda;
    CData/*7:0*/ i2c_tb__DOT__test_data;
    CData/*0:0*/ i2c_tb__DOT__test_ack;
    CData/*0:0*/ i2c_tb__DOT__SDA__en0;
    CData/*3:0*/ i2c_tb__DOT__i2c1__DOT__state_reg;
    CData/*3:0*/ i2c_tb__DOT__i2c1__DOT__state_next;
    CData/*2:0*/ i2c_tb__DOT__i2c1__DOT__cmd_reg;
    CData/*2:0*/ i2c_tb__DOT__i2c1__DOT__cmd_next;
    CData/*3:0*/ i2c_tb__DOT__i2c1__DOT__bit_reg;
    CData/*3:0*/ i2c_tb__DOT__i2c1__DOT__bit_next;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__scl_reg;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__scl_out;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__sda_reg;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__sda_out;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__ready_out;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__done_tick_out;
    CData/*0:0*/ i2c_tb__DOT__i2c1__DOT__data_phase;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i2c_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i2c_tb__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr_h3e87da56__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__ready_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__scl_reg__0;
    CData/*0:0*/ __Vtrigprevexpr_h4e6e488a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__done_tick_out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ i2c_tb__DOT__i2c1__DOT__rx_reg;
    SData/*8:0*/ i2c_tb__DOT__i2c1__DOT__rx_next;
    SData/*8:0*/ i2c_tb__DOT__i2c1__DOT__tx_reg;
    SData/*8:0*/ i2c_tb__DOT__i2c1__DOT__tx_next;
    SData/*15:0*/ i2c_tb__DOT__i2c1__DOT__ctr_reg;
    SData/*15:0*/ i2c_tb__DOT__i2c1__DOT__ctr_next;
    IData/*31:0*/ i2c_tb__DOT__read_and_ack__Vstatic__ii;
    IData/*31:0*/ i2c_tb__DOT__write_and_read_ack__Vstatic__ii;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haa301464__0;
    VlTriggerScheduler __VtrigSched_h72324737__0;
    VlTriggerScheduler __VtrigSched_h4d40d2db__0;
    VlTriggerScheduler __VtrigSched_hda597f28__0;
    VlTriggerScheduler __VtrigSched_h6eaed7dd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vi2c_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vi2c_tb___024root(Vi2c_tb__Syms* symsp, const char* v__name);
    ~Vi2c_tb___024root();
    VL_UNCOPYABLE(Vi2c_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
