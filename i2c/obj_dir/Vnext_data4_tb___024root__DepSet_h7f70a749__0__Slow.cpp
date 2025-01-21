// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_data4_tb.h for the primary calling header

#include "Vnext_data4_tb__pch.h"
#include "Vnext_data4_tb___024root.h"

VL_ATTR_COLD void Vnext_data4_tb___024root___eval_static(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vnext_data4_tb___024root___eval_final(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data4_tb___024root___dump_triggers__stl(Vnext_data4_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnext_data4_tb___024root___eval_phase__stl(Vnext_data4_tb___024root* vlSelf);

VL_ATTR_COLD void Vnext_data4_tb___024root___eval_settle(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vnext_data4_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test/next_data4_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vnext_data4_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data4_tb___024root___dump_triggers__stl(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vnext_data4_tb___024root___act_sequent__TOP__0(Vnext_data4_tb___024root* vlSelf);

VL_ATTR_COLD void Vnext_data4_tb___024root___eval_stl(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vnext_data4_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vnext_data4_tb___024root___eval_triggers__stl(Vnext_data4_tb___024root* vlSelf);

VL_ATTR_COLD bool Vnext_data4_tb___024root___eval_phase__stl(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnext_data4_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vnext_data4_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data4_tb___024root___dump_triggers__act(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data4_tb___024root___dump_triggers__nba(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnext_data4_tb___024root___ctor_var_reset(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->next_data4_tb__DOT__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->next_data4_tb__DOT__bit_reg = VL_RAND_RESET_I(4);
    vlSelf->next_data4_tb__DOT__done_tick_out = VL_RAND_RESET_I(1);
    vlSelf->next_data4_tb__DOT__bit_next = VL_RAND_RESET_I(4);
    vlSelf->next_data4_tb__DOT__tx_next = VL_RAND_RESET_I(9);
    vlSelf->next_data4_tb__DOT__state_next = VL_RAND_RESET_I(4);
    vlSelf->next_data4_tb__DOT__ctr_next = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
