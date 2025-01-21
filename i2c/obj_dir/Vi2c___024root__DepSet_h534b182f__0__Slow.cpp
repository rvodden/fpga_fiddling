// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c.h for the primary calling header

#include "Vi2c__pch.h"
#include "Vi2c___024root.h"

VL_ATTR_COLD void Vi2c___024root___eval_static(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vi2c___024root___eval_initial__TOP(Vi2c___024root* vlSelf);

VL_ATTR_COLD void Vi2c___024root___eval_initial(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_initial\n"); );
    // Body
    Vi2c___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vi2c___024root___eval_initial__TOP(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->SDA = 0U;
    vlSelf->SCL = 0U;
}

VL_ATTR_COLD void Vi2c___024root___eval_final(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__stl(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vi2c___024root___eval_phase__stl(Vi2c___024root* vlSelf);

VL_ATTR_COLD void Vi2c___024root___eval_settle(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_settle\n"); );
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
            Vi2c___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hw/i2c.v", 34, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vi2c___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__stl(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vi2c___024root___stl_sequent__TOP__0(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ i2c__DOT__ready_out;
    i2c__DOT__ready_out = 0;
    CData/*0:0*/ i2c__DOT__done_tick_out;
    i2c__DOT__done_tick_out = 0;
    // Body
    vlSelf->data_out = (0xffU & ((IData)(vlSelf->i2c__DOT__rx_reg) 
                                 >> 1U));
    vlSelf->ack = (1U & (IData)(vlSelf->i2c__DOT__rx_reg));
    i2c__DOT__ready_out = 0U;
    if ((1U & (~ ((IData)(vlSelf->i2c__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->i2c__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                    i2c__DOT__ready_out = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->i2c__DOT__state_reg)))) {
                i2c__DOT__ready_out = 1U;
            }
        }
    }
    vlSelf->i2c__DOT__state_next = vlSelf->i2c__DOT__state_reg;
    vlSelf->i2c__DOT__ctr_next = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelf->i2c__DOT__ctr_reg)));
    vlSelf->i2c__DOT__bit_next = vlSelf->i2c__DOT__bit_reg;
    vlSelf->i2c__DOT__tx_next = vlSelf->i2c__DOT__tx_reg;
    vlSelf->i2c__DOT__rx_next = vlSelf->i2c__DOT__rx_reg;
    vlSelf->i2c__DOT__cmd_next = vlSelf->i2c__DOT__cmd_reg;
    i2c__DOT__done_tick_out = 0U;
    vlSelf->i2c__DOT__sda_out = 1U;
    if ((8U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((4U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next 
                = (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg) 
                    == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg))
                    ? 0U : 6U);
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next;
        } else if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->i2c__DOT__sda_out = 0U;
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg))) {
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next = 0U;
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = 3U;
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg)));
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = 0xbU;
                }
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg 
                    = vlSelf->i2c__DOT__bit_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg 
                    = vlSelf->i2c__DOT__tx_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out 
                    = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg) 
                             >> 8U));
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg))) {
                    if ((8U == (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg))) {
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 0xbU;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                            = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = 0U;
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                            = (0x1feU & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg) 
                                         << 1U));
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg)));
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 0U;
                    }
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 0xaU;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg)));
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                        = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next 
                        = vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 0U;
                }
                vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out;
                i2c__DOT__done_tick_out = vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out;
                vlSelf->i2c__DOT__bit_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next;
                vlSelf->i2c__DOT__tx_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next;
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next;
            }
        } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg 
                = vlSelf->i2c__DOT__tx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg 
                = vlSelf->clock_divisor;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out 
                = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg) 
                         >> 8U));
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = 0xaU;
                vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = 9U;
                vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg)));
            }
            vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg 
                = vlSelf->i2c__DOT__rx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg 
                = vlSelf->i2c__DOT__tx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg 
                = vlSelf->clock_divisor;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out 
                = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg) 
                         >> 8U));
            vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__sda 
                = vlSelf->i2c__DOT__sda_reg;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = 9U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next = 0U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next 
                    = ((0x1feU & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg) 
                                  << 1U)) | (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__sda));
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = 8U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg)));
                vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next 
                    = vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg;
            }
            vlSelf->i2c__DOT__rx_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next;
        }
    } else if ((4U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg 
                    = vlSelf->i2c__DOT__tx_reg;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out 
                    = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg) 
                             >> 8U));
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg))) {
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = 8U;
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next = 0U;
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = 7U;
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg)));
                }
                vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out;
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg 
                    = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next 
                    = (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg) 
                        == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg))
                        ? 0U : 6U);
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next;
            }
        } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = 0U;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = 6U;
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = 5U;
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg)));
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next = 1U;
                vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next = 0U;
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next;
        }
    } else if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_hold__9__nack 
                = (1U & (IData)(vlSelf->data_in));
            vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in 
                = vlSelf->data_in;
            vlSelf->i2c__DOT__sda_out = 0U;
            vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd 
                = vlSelf->cmd;
            vlSelf->__Vtask_i2c__DOT__next_hold__9__write 
                = vlSelf->write;
            if (vlSelf->__Vtask_i2c__DOT__next_hold__9__write) {
                vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next 
                    = vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd;
                vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next = 0U;
                if ((4U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                    if ((2U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                    } else if ((1U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next 
                            = (((IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in) 
                                << 1U) | (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__nack));
                    }
                } else if ((2U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                    if ((1U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next 
                            = (((IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in) 
                                << 1U) | (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__nack));
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 5U;
                    }
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 4U;
                }
            } else {
                vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 3U;
            }
            vlSelf->i2c__DOT__bit_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next;
            vlSelf->i2c__DOT__tx_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next;
            vlSelf->i2c__DOT__cmd_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = 0U;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = 3U;
                vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = 2U;
                vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg)));
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next;
        }
    } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
        vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg 
            = vlSelf->i2c__DOT__ctr_reg;
        vlSelf->i2c__DOT__sda_out = 0U;
        if (((IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg) 
             == (IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = 2U;
            vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next = 0U;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = 1U;
            vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg)));
        }
        vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next;
        vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next;
    } else {
        vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd 
            = vlSelf->cmd;
        vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg 
            = vlSelf->i2c__DOT__ctr_reg;
        vlSelf->__Vtask_i2c__DOT__next_idle__12__write 
            = vlSelf->write;
        if (((IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__write) 
             & (0U == (IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd)))) {
            vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = 1U;
            vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next = 0U;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = 0U;
            vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg)));
        }
        vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next;
        vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next;
    }
    vlSelf->ready = i2c__DOT__ready_out;
    vlSelf->done_tick = i2c__DOT__done_tick_out;
}

VL_ATTR_COLD void Vi2c___024root___eval_stl(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vi2c___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vi2c___024root___eval_triggers__stl(Vi2c___024root* vlSelf);

VL_ATTR_COLD bool Vi2c___024root___eval_phase__stl(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vi2c___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vi2c___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__ico(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__act(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__nba(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vi2c___024root___ctor_var_reset(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->write = VL_RAND_RESET_I(1);
    vlSelf->clock_divisor = VL_RAND_RESET_I(16);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->cmd = VL_RAND_RESET_I(3);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->ack = VL_RAND_RESET_I(1);
    vlSelf->done_tick = VL_RAND_RESET_I(1);
    vlSelf->SDA = VL_RAND_RESET_I(1);
    vlSelf->SCL = VL_RAND_RESET_I(1);
    vlSelf->i2c__DOT__state_reg = VL_RAND_RESET_I(4);
    vlSelf->i2c__DOT__state_next = VL_RAND_RESET_I(4);
    vlSelf->i2c__DOT__cmd_reg = VL_RAND_RESET_I(3);
    vlSelf->i2c__DOT__cmd_next = VL_RAND_RESET_I(3);
    vlSelf->i2c__DOT__rx_reg = VL_RAND_RESET_I(9);
    vlSelf->i2c__DOT__rx_next = VL_RAND_RESET_I(9);
    vlSelf->i2c__DOT__tx_reg = VL_RAND_RESET_I(9);
    vlSelf->i2c__DOT__tx_next = VL_RAND_RESET_I(9);
    vlSelf->i2c__DOT__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->i2c__DOT__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->i2c__DOT__bit_reg = VL_RAND_RESET_I(4);
    vlSelf->i2c__DOT__bit_next = VL_RAND_RESET_I(4);
    vlSelf->i2c__DOT__sda_reg = VL_RAND_RESET_I(1);
    vlSelf->i2c__DOT__sda_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__sda = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__write = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__nack = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = VL_RAND_RESET_I(9);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_idle__12__write = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
