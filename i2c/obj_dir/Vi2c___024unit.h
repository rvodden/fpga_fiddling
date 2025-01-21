// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c.h for the primary calling header

#ifndef VERILATED_VI2C___024UNIT_H_
#define VERILATED_VI2C___024UNIT_H_  // guard

#include "verilated.h"


class Vi2c__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vi2c___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vi2c__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vi2c___024unit(Vi2c__Syms* symsp, const char* v__name);
    ~Vi2c___024unit();
    VL_UNCOPYABLE(Vi2c___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
