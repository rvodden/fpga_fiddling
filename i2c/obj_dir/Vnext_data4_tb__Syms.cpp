// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnext_data4_tb__pch.h"
#include "Vnext_data4_tb.h"
#include "Vnext_data4_tb___024root.h"
#include "Vnext_data4_tb___024unit.h"

// FUNCTIONS
Vnext_data4_tb__Syms::~Vnext_data4_tb__Syms()
{
}

Vnext_data4_tb__Syms::Vnext_data4_tb__Syms(VerilatedContext* contextp, const char* namep, Vnext_data4_tb* modelp)
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
    __Vscope_next_data4_tb.configure(this, name(), "next_data4_tb", "next_data4_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_bit_next_should_be.configure(this, name(), "next_data4_tb.then_bit_next_should_be", "then_bit_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_bit_next_should_be_unknown.configure(this, name(), "next_data4_tb.then_bit_next_should_be_unknown", "then_bit_next_should_be_unknown", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_ctr_next_should_be.configure(this, name(), "next_data4_tb.then_ctr_next_should_be", "then_ctr_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_data_phase_should_be.configure(this, name(), "next_data4_tb.then_data_phase_should_be", "then_data_phase_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_done_tick_out_should_be.configure(this, name(), "next_data4_tb.then_done_tick_out_should_be", "then_done_tick_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_done_tick_out_should_be_unknown.configure(this, name(), "next_data4_tb.then_done_tick_out_should_be_unknown", "then_done_tick_out_should_be_unknown", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_scl_out_should_be.configure(this, name(), "next_data4_tb.then_scl_out_should_be", "then_scl_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_sda_out_should_be.configure(this, name(), "next_data4_tb.then_sda_out_should_be", "then_sda_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_state_next_should_be.configure(this, name(), "next_data4_tb.then_state_next_should_be", "then_state_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_tx_next_should_be.configure(this, name(), "next_data4_tb.then_tx_next_should_be", "then_tx_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_data4_tb__then_tx_next_should_be_unknown.configure(this, name(), "next_data4_tb.then_tx_next_should_be_unknown", "then_tx_next_should_be_unknown", -12, VerilatedScope::SCOPE_OTHER);
}
