// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_hold_tb.h for the primary calling header

#include "Vnext_hold_tb__pch.h"
#include "Vnext_hold_tb__Syms.h"
#include "Vnext_hold_tb___024root.h"

void Vnext_hold_tb___024root___ctor_var_reset(Vnext_hold_tb___024root* vlSelf);

Vnext_hold_tb___024root::Vnext_hold_tb___024root(Vnext_hold_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnext_hold_tb___024root___ctor_var_reset(this);
}

void Vnext_hold_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnext_hold_tb___024root::~Vnext_hold_tb___024root() {
}
