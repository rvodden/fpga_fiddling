// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_start1_tb.h for the primary calling header

#include "Vnext_start1_tb__pch.h"
#include "Vnext_start1_tb__Syms.h"
#include "Vnext_start1_tb___024root.h"

void Vnext_start1_tb___024root___ctor_var_reset(Vnext_start1_tb___024root* vlSelf);

Vnext_start1_tb___024root::Vnext_start1_tb___024root(Vnext_start1_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnext_start1_tb___024root___ctor_var_reset(this);
}

void Vnext_start1_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnext_start1_tb___024root::~Vnext_start1_tb___024root() {
}
