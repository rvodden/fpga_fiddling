// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnext_hold_tb__pch.h"
#include "Vnext_hold_tb.h"
#include "Vnext_hold_tb___024root.h"
#include "Vnext_hold_tb___024unit.h"

// FUNCTIONS
Vnext_hold_tb__Syms::~Vnext_hold_tb__Syms()
{
}

Vnext_hold_tb__Syms::Vnext_hold_tb__Syms(VerilatedContext* contextp, const char* namep, Vnext_hold_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_next_hold_tb.configure(this, name(), "next_hold_tb", "next_hold_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_bit_next_should_be.configure(this, name(), "next_hold_tb.then_bit_next_should_be", "then_bit_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_cmd_next_should_be.configure(this, name(), "next_hold_tb.then_cmd_next_should_be", "then_cmd_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_ready_out_should_be.configure(this, name(), "next_hold_tb.then_ready_out_should_be", "then_ready_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_scl_out_should_be.configure(this, name(), "next_hold_tb.then_scl_out_should_be", "then_scl_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_sda_out_should_be.configure(this, name(), "next_hold_tb.then_sda_out_should_be", "then_sda_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_state_next_should_be.configure(this, name(), "next_hold_tb.then_state_next_should_be", "then_state_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_hold_tb__then_tx_next_should_be.configure(this, name(), "next_hold_tb.then_tx_next_should_be", "then_tx_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
}
