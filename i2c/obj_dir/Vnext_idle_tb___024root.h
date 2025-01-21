// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnext_idle_tb.h for the primary calling header

#ifndef VERILATED_VNEXT_IDLE_TB___024ROOT_H_
#define VERILATED_VNEXT_IDLE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnext_idle_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnext_idle_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ next_idle_tb__DOT__write;
    CData/*2:0*/ next_idle_tb__DOT__cmd;
    CData/*3:0*/ next_idle_tb__DOT__state_next;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ next_idle_tb__DOT__ctr_reg;
    SData/*15:0*/ next_idle_tb__DOT__ctr_next;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnext_idle_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnext_idle_tb___024root(Vnext_idle_tb__Syms* symsp, const char* v__name);
    ~Vnext_idle_tb___024root();
    VL_UNCOPYABLE(Vnext_idle_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
