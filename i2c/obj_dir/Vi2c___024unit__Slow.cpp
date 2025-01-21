// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c.h for the primary calling header

#include "Vi2c__pch.h"
#include "Vi2c__Syms.h"
#include "Vi2c___024unit.h"

void Vi2c___024unit___ctor_var_reset(Vi2c___024unit* vlSelf);

Vi2c___024unit::Vi2c___024unit(Vi2c__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vi2c___024unit___ctor_var_reset(this);
}

void Vi2c___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vi2c___024unit::~Vi2c___024unit() {
}
