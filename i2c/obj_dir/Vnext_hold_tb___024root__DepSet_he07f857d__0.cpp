// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_hold_tb.h for the primary calling header

#include "Vnext_hold_tb__pch.h"
#include "Vnext_hold_tb__Syms.h"
#include "Vnext_hold_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vnext_hold_tb___024root___eval_initial__TOP__Vtiming__0(Vnext_hold_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_hold_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_hold_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__2__value;
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__2__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_ready_out_should_be__3__value;
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__3__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_sda_out_should_be__4__value;
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__4__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_scl_out_should_be__5__value;
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__5__value = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_state_next_should_be__6__stateValue;
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__6__stateValue = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_bit_next_should_be__7__value;
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__7__value = 0;
    SData/*8:0*/ __Vtask_next_hold_tb__DOT__then_tx_next_should_be__8__value;
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__8__value = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__when_were_given_a_command__9__commandValue;
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__9__commandValue = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__10__value;
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__10__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_ready_out_should_be__11__value;
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__11__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_sda_out_should_be__12__value;
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__12__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_scl_out_should_be__13__value;
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__13__value = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_state_next_should_be__14__stateValue;
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__14__stateValue = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_bit_next_should_be__15__value;
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__15__value = 0;
    SData/*8:0*/ __Vtask_next_hold_tb__DOT__then_tx_next_should_be__16__value;
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__16__value = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__when_were_given_a_command__17__commandValue;
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__17__commandValue = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__18__value;
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__18__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_ready_out_should_be__19__value;
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__19__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_sda_out_should_be__20__value;
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__20__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_scl_out_should_be__21__value;
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__21__value = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_state_next_should_be__22__stateValue;
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__22__stateValue = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_bit_next_should_be__23__value;
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__23__value = 0;
    SData/*8:0*/ __Vtask_next_hold_tb__DOT__then_tx_next_should_be__24__value;
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__24__value = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__when_were_given_a_command__25__commandValue;
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__25__commandValue = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__26__value;
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__26__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_ready_out_should_be__27__value;
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__27__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_sda_out_should_be__28__value;
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__28__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_scl_out_should_be__29__value;
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__29__value = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_state_next_should_be__30__stateValue;
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__30__stateValue = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_bit_next_should_be__31__value;
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__31__value = 0;
    SData/*8:0*/ __Vtask_next_hold_tb__DOT__then_tx_next_should_be__32__value;
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__32__value = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__when_were_given_a_command__33__commandValue;
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__33__commandValue = 0;
    CData/*2:0*/ __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__34__value;
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__34__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_ready_out_should_be__35__value;
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__35__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_sda_out_should_be__36__value;
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__36__value = 0;
    CData/*0:0*/ __Vtask_next_hold_tb__DOT__then_scl_out_should_be__37__value;
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__37__value = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_state_next_should_be__38__stateValue;
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__38__stateValue = 0;
    CData/*3:0*/ __Vtask_next_hold_tb__DOT__then_bit_next_should_be__39__value;
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__39__value = 0;
    SData/*8:0*/ __Vtask_next_hold_tb__DOT__then_tx_next_should_be__40__value;
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__40__value = 0;
    // Body
    VL_WRITEF("When we're given a 1 command\n");
    vlSelf->next_hold_tb__DOT__cmd = 1U;
    vlSelf->next_hold_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       34);
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__2__value = 1U;
    VL_WRITEF("THen cmd_next should be %1#...",3,__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__2__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__cmd_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__2__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: cmd_next_steps.v:6: Assertion failed in %Nnext_hold_tb.then_cmd_next_should_be: cmd_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  3,(IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__2__value),
                  3,vlSelf->next_hold_tb__DOT__cmd_next);
        VL_STOP_MT("test/steps/cmd_next_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__3__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_ready_out_should_be__3__value);
    if (VL_LIKELY(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__3__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__3__value),
                  16,vlSelf->next_hold_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__4__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_sda_out_should_be__4__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__4__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__4__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__5__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_scl_out_should_be__5__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__5__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__5__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__6__stateValue = 4U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_hold_tb__DOT__then_state_next_should_be__6__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__6__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_hold_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__6__stateValue),
                  4,vlSelf->next_hold_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__7__value = 0xfU;
    VL_WRITEF("THen bit_next should be %2#...",4,__Vtask_next_hold_tb__DOT__then_bit_next_should_be__7__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__bit_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__7__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: bit_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_bit_next_should_be: bit_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__7__value),
                  4,vlSelf->next_hold_tb__DOT__bit_next);
        VL_STOP_MT("test/steps/bit_next_steps.v", 12, "");
    }
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__8__value = 0U;
    VL_WRITEF("THen tx_next should be %3#...",9,__Vtask_next_hold_tb__DOT__then_tx_next_should_be__8__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__tx_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__8__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: tx_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_tx_next_should_be: tx_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  9,(IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__8__value),
                  9,vlSelf->next_hold_tb__DOT__tx_next);
        VL_STOP_MT("test/steps/tx_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       42);
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__9__commandValue = 0U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_hold_tb__DOT__when_were_given_a_command__9__commandValue);
    vlSelf->next_hold_tb__DOT__cmd = __Vtask_next_hold_tb__DOT__when_were_given_a_command__9__commandValue;
    vlSelf->next_hold_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       45);
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__10__value = 0U;
    VL_WRITEF("THen cmd_next should be %1#...",3,__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__10__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__cmd_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__10__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: cmd_next_steps.v:6: Assertion failed in %Nnext_hold_tb.then_cmd_next_should_be: cmd_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  3,(IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__10__value),
                  3,vlSelf->next_hold_tb__DOT__cmd_next);
        VL_STOP_MT("test/steps/cmd_next_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__11__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_ready_out_should_be__11__value);
    if (VL_LIKELY(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__11__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__11__value),
                  16,vlSelf->next_hold_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__12__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_sda_out_should_be__12__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__12__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__12__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__13__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_scl_out_should_be__13__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__13__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__13__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__14__stateValue = 4U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_hold_tb__DOT__then_state_next_should_be__14__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__14__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_hold_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__14__stateValue),
                  4,vlSelf->next_hold_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__15__value = 0xfU;
    VL_WRITEF("THen bit_next should be %2#...",4,__Vtask_next_hold_tb__DOT__then_bit_next_should_be__15__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__bit_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__15__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: bit_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_bit_next_should_be: bit_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__15__value),
                  4,vlSelf->next_hold_tb__DOT__bit_next);
        VL_STOP_MT("test/steps/bit_next_steps.v", 12, "");
    }
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__16__value = 0U;
    VL_WRITEF("THen tx_next should be %3#...",9,__Vtask_next_hold_tb__DOT__then_tx_next_should_be__16__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__tx_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__16__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: tx_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_tx_next_should_be: tx_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  9,(IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__16__value),
                  9,vlSelf->next_hold_tb__DOT__tx_next);
        VL_STOP_MT("test/steps/tx_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       53);
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__17__commandValue = 2U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_hold_tb__DOT__when_were_given_a_command__17__commandValue);
    vlSelf->next_hold_tb__DOT__cmd = __Vtask_next_hold_tb__DOT__when_were_given_a_command__17__commandValue;
    vlSelf->next_hold_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       56);
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__18__value = 2U;
    VL_WRITEF("THen cmd_next should be %1#...",3,__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__18__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__cmd_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__18__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: cmd_next_steps.v:6: Assertion failed in %Nnext_hold_tb.then_cmd_next_should_be: cmd_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  3,(IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__18__value),
                  3,vlSelf->next_hold_tb__DOT__cmd_next);
        VL_STOP_MT("test/steps/cmd_next_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__19__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_ready_out_should_be__19__value);
    if (VL_LIKELY(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__19__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__19__value),
                  16,vlSelf->next_hold_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__20__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_sda_out_should_be__20__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__20__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__20__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__21__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_scl_out_should_be__21__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__21__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__21__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__22__stateValue = 5U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_hold_tb__DOT__then_state_next_should_be__22__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__22__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_hold_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__22__stateValue),
                  4,vlSelf->next_hold_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__23__value = 0xfU;
    VL_WRITEF("THen bit_next should be %2#...",4,__Vtask_next_hold_tb__DOT__then_bit_next_should_be__23__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__bit_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__23__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: bit_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_bit_next_should_be: bit_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__23__value),
                  4,vlSelf->next_hold_tb__DOT__bit_next);
        VL_STOP_MT("test/steps/bit_next_steps.v", 12, "");
    }
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__24__value = 0U;
    VL_WRITEF("THen tx_next should be %3#...",9,__Vtask_next_hold_tb__DOT__then_tx_next_should_be__24__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__tx_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__24__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: tx_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_tx_next_should_be: tx_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  9,(IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__24__value),
                  9,vlSelf->next_hold_tb__DOT__tx_next);
        VL_STOP_MT("test/steps/tx_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       64);
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__25__commandValue = 3U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_hold_tb__DOT__when_were_given_a_command__25__commandValue);
    vlSelf->next_hold_tb__DOT__cmd = __Vtask_next_hold_tb__DOT__when_were_given_a_command__25__commandValue;
    vlSelf->next_hold_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       67);
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__26__value = 3U;
    VL_WRITEF("THen cmd_next should be %1#...",3,__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__26__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__cmd_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__26__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: cmd_next_steps.v:6: Assertion failed in %Nnext_hold_tb.then_cmd_next_should_be: cmd_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  3,(IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__26__value),
                  3,vlSelf->next_hold_tb__DOT__cmd_next);
        VL_STOP_MT("test/steps/cmd_next_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__27__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_ready_out_should_be__27__value);
    if (VL_LIKELY(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__27__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__27__value),
                  16,vlSelf->next_hold_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__28__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_sda_out_should_be__28__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__28__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__28__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__29__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_scl_out_should_be__29__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__29__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__29__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__30__stateValue = 7U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_hold_tb__DOT__then_state_next_should_be__30__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__30__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_hold_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__30__stateValue),
                  4,vlSelf->next_hold_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__31__value = 0U;
    VL_WRITEF("THen bit_next should be %2#...",4,__Vtask_next_hold_tb__DOT__then_bit_next_should_be__31__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__bit_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__31__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: bit_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_bit_next_should_be: bit_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__31__value),
                  4,vlSelf->next_hold_tb__DOT__bit_next);
        VL_STOP_MT("test/steps/bit_next_steps.v", 12, "");
    }
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__32__value 
        = (((IData)(vlSelf->next_hold_tb__DOT__data_in) 
            << 1U) | (IData)(vlSelf->next_hold_tb__DOT__nack));
    VL_WRITEF("THen tx_next should be %3#...",9,__Vtask_next_hold_tb__DOT__then_tx_next_should_be__32__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__tx_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__32__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: tx_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_tx_next_should_be: tx_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  9,(IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__32__value),
                  9,vlSelf->next_hold_tb__DOT__tx_next);
        VL_STOP_MT("test/steps/tx_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       75);
    __Vtask_next_hold_tb__DOT__when_were_given_a_command__33__commandValue = 4U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_hold_tb__DOT__when_were_given_a_command__33__commandValue);
    vlSelf->next_hold_tb__DOT__cmd = __Vtask_next_hold_tb__DOT__when_were_given_a_command__33__commandValue;
    vlSelf->next_hold_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       78);
    __Vtask_next_hold_tb__DOT__then_cmd_next_should_be__34__value = 4U;
    VL_WRITEF("THen cmd_next should be %1#...",3,__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__34__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__cmd_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__34__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: cmd_next_steps.v:6: Assertion failed in %Nnext_hold_tb.then_cmd_next_should_be: cmd_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  3,(IData)(__Vtask_next_hold_tb__DOT__then_cmd_next_should_be__34__value),
                  3,vlSelf->next_hold_tb__DOT__cmd_next);
        VL_STOP_MT("test/steps/cmd_next_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_ready_out_should_be__35__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_ready_out_should_be__35__value);
    if (VL_LIKELY(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__35__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_ready_out_should_be__35__value),
                  16,vlSelf->next_hold_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_hold_tb__DOT__then_sda_out_should_be__36__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_sda_out_should_be__36__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__36__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_sda_out_should_be__36__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_scl_out_should_be__37__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_hold_tb__DOT__then_scl_out_should_be__37__value);
    if (VL_UNLIKELY(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__37__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_hold_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_hold_tb__DOT__then_scl_out_should_be__37__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_hold_tb__DOT__then_state_next_should_be__38__stateValue = 7U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_hold_tb__DOT__then_state_next_should_be__38__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__38__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_hold_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_state_next_should_be__38__stateValue),
                  4,vlSelf->next_hold_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_hold_tb__DOT__then_bit_next_should_be__39__value = 0U;
    VL_WRITEF("THen bit_next should be %2#...",4,__Vtask_next_hold_tb__DOT__then_bit_next_should_be__39__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__bit_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__39__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: bit_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_bit_next_should_be: bit_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_hold_tb__DOT__then_bit_next_should_be__39__value),
                  4,vlSelf->next_hold_tb__DOT__bit_next);
        VL_STOP_MT("test/steps/bit_next_steps.v", 12, "");
    }
    __Vtask_next_hold_tb__DOT__then_tx_next_should_be__40__value 
        = (((IData)(vlSelf->next_hold_tb__DOT__data_in) 
            << 1U) | (IData)(vlSelf->next_hold_tb__DOT__nack));
    VL_WRITEF("THen tx_next should be %3#...",9,__Vtask_next_hold_tb__DOT__then_tx_next_should_be__40__value);
    if (VL_LIKELY(((IData)(vlSelf->next_hold_tb__DOT__tx_next) 
                   == (IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__40__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: tx_next_steps.v:12: Assertion failed in %Nnext_hold_tb.then_tx_next_should_be: tx_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  9,(IData)(__Vtask_next_hold_tb__DOT__then_tx_next_should_be__40__value),
                  9,vlSelf->next_hold_tb__DOT__tx_next);
        VL_STOP_MT("test/steps/tx_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_hold_tb.v", 
                                       86);
    VL_FINISH_MT("test/next_hold_tb.v", 88, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_hold_tb___024root___dump_triggers__act(Vnext_hold_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnext_hold_tb___024root___eval_triggers__act(Vnext_hold_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_hold_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_hold_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnext_hold_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
