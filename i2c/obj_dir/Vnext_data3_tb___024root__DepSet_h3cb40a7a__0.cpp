// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_data3_tb.h for the primary calling header

#include "Vnext_data3_tb__pch.h"
#include "Vnext_data3_tb___024root.h"

VlCoroutine Vnext_data3_tb___024root___eval_initial__TOP__Vtiming__0(Vnext_data3_tb___024root* vlSelf);

void Vnext_data3_tb___024root___eval_initial(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval_initial\n"); );
    // Body
    Vnext_data3_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vnext_data3_tb___024root___act_sequent__TOP__0(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->next_data3_tb__DOT__state_next = 9U;
    vlSelf->next_data3_tb__DOT__ctr_next = (0xffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->next_data3_tb__DOT__ctr_reg)));
    if ((0xffffU == (IData)(vlSelf->next_data3_tb__DOT__ctr_reg))) {
        vlSelf->next_data3_tb__DOT__state_next = 0xaU;
        vlSelf->next_data3_tb__DOT__ctr_next = 0U;
    }
}

void Vnext_data3_tb___024root___eval_act(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vnext_data3_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vnext_data3_tb___024root___eval_nba(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vnext_data3_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vnext_data3_tb___024root___timing_resume(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vnext_data3_tb___024root___eval_triggers__act(Vnext_data3_tb___024root* vlSelf);

bool Vnext_data3_tb___024root___eval_phase__act(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vnext_data3_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vnext_data3_tb___024root___timing_resume(vlSelf);
        Vnext_data3_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vnext_data3_tb___024root___eval_phase__nba(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vnext_data3_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data3_tb___024root___dump_triggers__nba(Vnext_data3_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data3_tb___024root___dump_triggers__act(Vnext_data3_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnext_data3_tb___024root___eval(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vnext_data3_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test/next_data3_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vnext_data3_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test/next_data3_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vnext_data3_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vnext_data3_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vnext_data3_tb___024root___eval_debug_assertions(Vnext_data3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data3_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
