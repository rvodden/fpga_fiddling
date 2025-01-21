// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnext_hold_tb.h for the primary calling header

#ifndef VERILATED_VNEXT_HOLD_TB___024UNIT_H_
#define VERILATED_VNEXT_HOLD_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnext_hold_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnext_hold_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vnext_hold_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnext_hold_tb___024unit(Vnext_hold_tb__Syms* symsp, const char* v__name);
    ~Vnext_hold_tb___024unit();
    VL_UNCOPYABLE(Vnext_hold_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
