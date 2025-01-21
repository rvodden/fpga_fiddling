// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnext_data4_tb.h for the primary calling header

#ifndef VERILATED_VNEXT_DATA4_TB___024ROOT_H_
#define VERILATED_VNEXT_DATA4_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnext_data4_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnext_data4_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ next_data4_tb__DOT__bit_reg;
    CData/*0:0*/ next_data4_tb__DOT__done_tick_out;
    CData/*3:0*/ next_data4_tb__DOT__bit_next;
    CData/*3:0*/ next_data4_tb__DOT__state_next;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ next_data4_tb__DOT__ctr_reg;
    SData/*8:0*/ next_data4_tb__DOT__tx_next;
    SData/*15:0*/ next_data4_tb__DOT__ctr_next;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnext_data4_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnext_data4_tb___024root(Vnext_data4_tb__Syms* symsp, const char* v__name);
    ~Vnext_data4_tb___024root();
    VL_UNCOPYABLE(Vnext_data4_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
