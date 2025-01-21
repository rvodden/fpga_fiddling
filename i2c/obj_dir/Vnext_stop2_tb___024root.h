// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnext_stop2_tb.h for the primary calling header

#ifndef VERILATED_VNEXT_STOP2_TB___024ROOT_H_
#define VERILATED_VNEXT_STOP2_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnext_stop2_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnext_stop2_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ next_stop2_tb__DOT__state_next;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ next_stop2_tb__DOT__ctr_reg;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnext_stop2_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnext_stop2_tb___024root(Vnext_stop2_tb__Syms* symsp, const char* v__name);
    ~Vnext_stop2_tb___024root();
    VL_UNCOPYABLE(Vnext_stop2_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
