// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnext_start2_tb__Syms.h"


void Vnext_start2_tb___024root__trace_chg_0_sub_0(Vnext_start2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnext_start2_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_start2_tb___024root__trace_chg_0\n"); );
    // Init
    Vnext_start2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnext_start2_tb___024root*>(voidSelf);
    Vnext_start2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnext_start2_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnext_start2_tb___024root__trace_chg_0_sub_0(Vnext_start2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_start2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_start2_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgSData(oldp+0,(vlSelf->next_start2_tb__DOT__ctr_reg),16);
    bufp->chgCData(oldp+1,(((0xffffU == (IData)(vlSelf->next_start2_tb__DOT__ctr_reg))
                             ? 3U : 2U)),4);
    bufp->chgSData(oldp+2,(((0xffffU == (IData)(vlSelf->next_start2_tb__DOT__ctr_reg))
                             ? 0U : (0xffffU & ((IData)(1U) 
                                                + (IData)(vlSelf->next_start2_tb__DOT__ctr_reg))))),16);
}

void Vnext_start2_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_start2_tb___024root__trace_cleanup\n"); );
    // Init
    Vnext_start2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnext_start2_tb___024root*>(voidSelf);
    Vnext_start2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
