// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnext_stop2_tb.h for the primary calling header

#ifndef VERILATED_VNEXT_STOP2_TB___024UNIT_H_
#define VERILATED_VNEXT_STOP2_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnext_stop2_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnext_stop2_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vnext_stop2_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnext_stop2_tb___024unit(Vnext_stop2_tb__Syms* symsp, const char* v__name);
    ~Vnext_stop2_tb___024unit();
    VL_UNCOPYABLE(Vnext_stop2_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
