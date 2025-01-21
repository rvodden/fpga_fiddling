// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_idle_tb.h for the primary calling header

#include "Vnext_idle_tb__pch.h"
#include "Vnext_idle_tb__Syms.h"
#include "Vnext_idle_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vnext_idle_tb___024root___eval_initial__TOP__Vtiming__0(Vnext_idle_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_idle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_idle_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_next_idle_tb__DOT__then_state_next_should_be__3__stateValue;
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__3__stateValue = 0;
    SData/*15:0*/ __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__4__value;
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__4__value = 0;
    CData/*0:0*/ __Vtask_next_idle_tb__DOT__then_ready_out_should_be__5__value;
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__5__value = 0;
    CData/*2:0*/ __Vtask_next_idle_tb__DOT__when_were_given_a_command__7__commandValue;
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__7__commandValue = 0;
    CData/*0:0*/ __Vtask_next_idle_tb__DOT__then_ready_out_should_be__8__value;
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__8__value = 0;
    CData/*3:0*/ __Vtask_next_idle_tb__DOT__then_state_next_should_be__9__stateValue;
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__9__stateValue = 0;
    SData/*15:0*/ __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__10__value;
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__10__value = 0;
    CData/*2:0*/ __Vtask_next_idle_tb__DOT__when_were_given_a_command__11__commandValue;
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__11__commandValue = 0;
    CData/*0:0*/ __Vtask_next_idle_tb__DOT__then_ready_out_should_be__12__value;
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__12__value = 0;
    CData/*3:0*/ __Vtask_next_idle_tb__DOT__then_state_next_should_be__13__stateValue;
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__13__stateValue = 0;
    SData/*15:0*/ __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__14__value;
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__14__value = 0;
    CData/*2:0*/ __Vtask_next_idle_tb__DOT__when_were_given_a_command__15__commandValue;
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__15__commandValue = 0;
    CData/*0:0*/ __Vtask_next_idle_tb__DOT__then_ready_out_should_be__16__value;
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__16__value = 0;
    CData/*3:0*/ __Vtask_next_idle_tb__DOT__then_state_next_should_be__17__stateValue;
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__17__stateValue = 0;
    SData/*15:0*/ __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__18__value;
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__18__value = 0;
    CData/*2:0*/ __Vtask_next_idle_tb__DOT__when_were_given_a_command__19__commandValue;
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__19__commandValue = 0;
    CData/*0:0*/ __Vtask_next_idle_tb__DOT__then_ready_out_should_be__20__value;
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__20__value = 0;
    CData/*3:0*/ __Vtask_next_idle_tb__DOT__then_state_next_should_be__21__stateValue;
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__21__stateValue = 0;
    SData/*15:0*/ __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__22__value;
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__22__value = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f7462U;
    __Vtemp_1[2U] = 0x5f69646cU;
    __Vtemp_1[3U] = 0x6e657874U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("When we're given a 0 command\n");
    vlSelf->next_idle_tb__DOT__cmd = 0U;
    vlSelf->next_idle_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       33);
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__3__stateValue = 1U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_idle_tb__DOT__then_state_next_should_be__3__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__3__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_idle_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__3__stateValue),
                  4,vlSelf->next_idle_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__4__value = 0U;
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__4__value);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__4__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_idle_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__4__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__5__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_idle_tb__DOT__then_ready_out_should_be__5__value);
    if (VL_LIKELY(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__5__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_idle_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__5__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       37);
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__7__commandValue = 1U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_idle_tb__DOT__when_were_given_a_command__7__commandValue);
    vlSelf->next_idle_tb__DOT__cmd = __Vtask_next_idle_tb__DOT__when_were_given_a_command__7__commandValue;
    vlSelf->next_idle_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       42);
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__8__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_idle_tb__DOT__then_ready_out_should_be__8__value);
    if (VL_LIKELY(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__8__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_idle_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__8__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__9__stateValue = 0U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_idle_tb__DOT__then_state_next_should_be__9__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__9__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_idle_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__9__stateValue),
                  4,vlSelf->next_idle_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__10__value 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->next_idle_tb__DOT__ctr_reg)));
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__10__value);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__10__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_idle_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__10__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       46);
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__11__commandValue = 2U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_idle_tb__DOT__when_were_given_a_command__11__commandValue);
    vlSelf->next_idle_tb__DOT__cmd = __Vtask_next_idle_tb__DOT__when_were_given_a_command__11__commandValue;
    vlSelf->next_idle_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       49);
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__12__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_idle_tb__DOT__then_ready_out_should_be__12__value);
    if (VL_LIKELY(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__12__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_idle_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__12__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__13__stateValue = 0U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_idle_tb__DOT__then_state_next_should_be__13__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__13__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_idle_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__13__stateValue),
                  4,vlSelf->next_idle_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__14__value 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->next_idle_tb__DOT__ctr_reg)));
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__14__value);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__14__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_idle_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__14__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       54);
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__15__commandValue = 3U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_idle_tb__DOT__when_were_given_a_command__15__commandValue);
    vlSelf->next_idle_tb__DOT__cmd = __Vtask_next_idle_tb__DOT__when_were_given_a_command__15__commandValue;
    vlSelf->next_idle_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       57);
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__16__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_idle_tb__DOT__then_ready_out_should_be__16__value);
    if (VL_LIKELY(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__16__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_idle_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__16__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__17__stateValue = 0U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_idle_tb__DOT__then_state_next_should_be__17__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__17__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_idle_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__17__stateValue),
                  4,vlSelf->next_idle_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__18__value 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->next_idle_tb__DOT__ctr_reg)));
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__18__value);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__18__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_idle_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__18__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    __Vtask_next_idle_tb__DOT__when_were_given_a_command__19__commandValue = 4U;
    VL_WRITEF("When we're given a %1# command\n",3,
              __Vtask_next_idle_tb__DOT__when_were_given_a_command__19__commandValue);
    vlSelf->next_idle_tb__DOT__cmd = __Vtask_next_idle_tb__DOT__when_were_given_a_command__19__commandValue;
    vlSelf->next_idle_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_idle_tb.v", 
                                       63);
    __Vtask_next_idle_tb__DOT__then_ready_out_should_be__20__value = 1U;
    VL_WRITEF("THen ready_out should be %1#...",1,__Vtask_next_idle_tb__DOT__then_ready_out_should_be__20__value);
    if (VL_LIKELY(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__20__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ready_out_steps.v:6: Assertion failed in %Nnext_idle_tb.then_ready_out_should_be: ready_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_idle_tb__DOT__then_ready_out_should_be__20__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ready_out_steps.v", 6, "");
    }
    __Vtask_next_idle_tb__DOT__then_state_next_should_be__21__stateValue = 0U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_idle_tb__DOT__then_state_next_should_be__21__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__21__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_idle_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_idle_tb__DOT__then_state_next_should_be__21__stateValue),
                  4,vlSelf->next_idle_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_idle_tb__DOT__then_ctr_next_should_be__22__value 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->next_idle_tb__DOT__ctr_reg)));
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__22__value);
    if (VL_LIKELY(((IData)(vlSelf->next_idle_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__22__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_idle_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_idle_tb__DOT__then_ctr_next_should_be__22__value),
                  16,vlSelf->next_idle_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    VL_FINISH_MT("test/next_idle_tb.v", 28, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_idle_tb___024root___dump_triggers__act(Vnext_idle_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnext_idle_tb___024root___eval_triggers__act(Vnext_idle_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_idle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_idle_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnext_idle_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
