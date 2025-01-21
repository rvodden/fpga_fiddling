// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnext_data4_tb__Syms.h"


void Vnext_data4_tb___024root__trace_chg_0_sub_0(Vnext_data4_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnext_data4_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root__trace_chg_0\n"); );
    // Init
    Vnext_data4_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnext_data4_tb___024root*>(voidSelf);
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnext_data4_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnext_data4_tb___024root__trace_chg_0_sub_0(Vnext_data4_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->next_data4_tb__DOT__done_tick_out));
        bufp->chgCData(oldp+1,(vlSelf->next_data4_tb__DOT__bit_next),4);
        bufp->chgSData(oldp+2,(vlSelf->next_data4_tb__DOT__tx_next),9);
        bufp->chgCData(oldp+3,(vlSelf->next_data4_tb__DOT__state_next),4);
        bufp->chgSData(oldp+4,(vlSelf->next_data4_tb__DOT__ctr_next),16);
    }
    bufp->chgSData(oldp+5,(vlSelf->next_data4_tb__DOT__ctr_reg),16);
    bufp->chgCData(oldp+6,(vlSelf->next_data4_tb__DOT__bit_reg),4);
}

void Vnext_data4_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root__trace_cleanup\n"); );
    // Init
    Vnext_data4_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnext_data4_tb___024root*>(voidSelf);
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
