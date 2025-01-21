// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c_tb.h for the primary calling header

#ifndef VERILATED_VI2C_TB___024UNIT_H_
#define VERILATED_VI2C_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vi2c_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vi2c_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vi2c_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vi2c_tb___024unit(Vi2c_tb__Syms* symsp, const char* v__name);
    ~Vi2c_tb___024unit();
    VL_UNCOPYABLE(Vi2c_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
