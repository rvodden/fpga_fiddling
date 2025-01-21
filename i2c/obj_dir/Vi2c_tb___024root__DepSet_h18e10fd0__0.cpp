// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_tb.h for the primary calling header

#include "Vi2c_tb__pch.h"
#include "Vi2c_tb___024root.h"

VlCoroutine Vi2c_tb___024root___eval_initial__TOP__Vtiming__0(Vi2c_tb___024root* vlSelf);
VlCoroutine Vi2c_tb___024root___eval_initial__TOP__Vtiming__1(Vi2c_tb___024root* vlSelf);

void Vi2c_tb___024root___eval_initial(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vi2c_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vi2c_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__clk__0 
        = vlSelf->i2c_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__reset__0 
        = vlSelf->i2c_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr_h3e87da56__0 = (1U & ((~ (IData)(vlSelf->i2c_tb__DOT__SDA)) 
                                                  | (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg))));
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__ready_out__0 
        = vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out;
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__scl_reg__0 
        = vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg;
    vlSelf->__Vtrigprevexpr_h4e6e488a__0 = (1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)));
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__done_tick_out__0 
        = vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out;
}

VL_INLINE_OPT VlCoroutine Vi2c_tb___024root___eval_initial__TOP__Vtiming__0(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->i2c_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "test/i2c_tb.v", 
                                           54);
        vlSelf->i2c_tb__DOT__clk = (1U & (~ (IData)(vlSelf->i2c_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vi2c_tb___024root___act_comb__TOP__0(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->i2c_tb__DOT__SDA = (1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                          | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                         & (IData)(vlSelf->i2c_tb__DOT__sda_tb))));
    vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next = vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg;
    if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    if (vlSelf->i2c_tb__DOT__write) {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next 
                            = vlSelf->i2c_tb__DOT__cmd;
                    }
                }
            }
        }
    }
    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
    vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next = vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
    if ((8U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))
                                   : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))));
                if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                    if ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                        if ((8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))) {
                            vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next 
                                = (0xfU & 0U);
                            vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
                        } else {
                            vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg)));
                            vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                = (0x1feU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                             << 1U));
                        }
                    } else {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next 
                            = (0xfU & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg));
                        vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                            = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
                    }
                }
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))
                                   : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))));
            }
            if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next 
                        = ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                            ? ((0x1feU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg) 
                                          << 1U)) | 
                               (1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                          | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                         & (IData)(vlSelf->i2c_tb__DOT__sda_tb)))))
                            : (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg));
                }
            }
        }
        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
            = ((4U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                ? ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                    ? 0U : 6U) : ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                       ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? 3U : 0xbU)
                                       : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? ((8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))
                                               ? 0xbU
                                               : 7U)
                                           : 0xaU))
                                   : ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                       ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? 0xaU : 9U)
                                       : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? 9U : 8U))));
    } else {
        if ((4U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    if ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 8U;
                    } else {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 7U;
                    }
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
                        = ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                            ? 0U : 6U);
                }
            } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 6U;
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 5U;
                }
            } else if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 1U;
            }
        } else if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if (vlSelf->i2c_tb__DOT__write) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
                        = ((4U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                            ? ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                ? 1U : ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                         ? 1U : 7U))
                            : ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                ? ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                    ? 7U : 5U) : 4U));
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 3U;
                }
            } else if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 3U;
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 2U;
            }
        } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 2U;
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 1U;
            }
        } else if (((IData)(vlSelf->i2c_tb__DOT__write) 
                    & (0U == (IData)(vlSelf->i2c_tb__DOT__cmd)))) {
            vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
            vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    if (vlSelf->i2c_tb__DOT__write) {
                        if ((4U & (IData)(vlSelf->i2c_tb__DOT__cmd))) {
                            vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = 0U;
                            vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                = ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                    ? 0U : ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                             ? 0U : 
                                            (((IData)(vlSelf->i2c_tb__DOT__data_in) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelf->i2c_tb__DOT__data_in)))));
                        } else if ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))) {
                            if ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))) {
                                vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = 0U;
                                vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                    = (((IData)(vlSelf->i2c_tb__DOT__data_in) 
                                        << 1U) | (1U 
                                                  & (IData)(vlSelf->i2c_tb__DOT__data_in)));
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vi2c_tb___024root___eval_act(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_act\n"); );
    // Body
    if ((0x7eULL & vlSelf->__VactTriggered.word(0U))) {
        Vi2c_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vi2c_tb___024root___nba_sequent__TOP__0(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg = ((IData)(vlSelf->i2c_tb__DOT__reset) 
                                               || (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out));
    if (vlSelf->i2c_tb__DOT__reset) {
        vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg = 0U;
        vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg = 0U;
        vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg = 0U;
        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg = 0U;
        vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg = 0U;
        vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg = 0U;
    } else {
        vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg = vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next;
        vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next;
        vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg = vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next;
        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg = vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next;
        vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg = vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next;
        vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg = vlSelf->i2c_tb__DOT__i2c1__DOT__state_next;
    }
    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_reg = ((IData)(vlSelf->i2c_tb__DOT__reset) 
                                               || (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out));
    vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 1U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = 0U;
    if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = 1U;
            }
        }
    }
    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 1U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out = 0U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 0U;
    if ((8U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out 
                    = (1U & ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) 
                             && (1U & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                       >> 8U))));
                if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out 
                        = ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)) 
                           && (8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg)));
                    vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 1U;
                }
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out 
                    = (1U & ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                              ? ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                 >> 8U) : ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                           >> 8U)));
                vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out 
                    = (1U & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                             >> 8U));
                vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 1U;
            }
        } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 0U;
        }
    } else if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 0U;
        vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 0U;
    } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 0U;
    }
    vlSelf->i2c_tb__DOT__SDA__en0 = (1U & (~ (((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase) 
                                               & (((3U 
                                                    == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg)) 
                                                   & (8U 
                                                      > (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg)) 
                                                     & (8U 
                                                        == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))))) 
                                              | (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__sda_reg))));
}

VL_INLINE_OPT void Vi2c_tb___024root___nba_comb__TOP__0(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next = vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg;
    if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    if (vlSelf->i2c_tb__DOT__write) {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next 
                            = vlSelf->i2c_tb__DOT__cmd;
                    }
                }
            }
        }
    }
    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
    vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
    vlSelf->i2c_tb__DOT__SDA = (1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                          | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                         & (IData)(vlSelf->i2c_tb__DOT__sda_tb))));
    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next = vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg;
    if ((8U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))
                                   : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))));
                if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                    if ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                        if ((8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))) {
                            vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next 
                                = (0xfU & 0U);
                            vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
                        } else {
                            vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg)));
                            vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                = (0x1feU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                             << 1U));
                        }
                    } else {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next 
                            = (0xfU & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg));
                        vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                            = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
                    }
                }
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))
                                   : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))));
            }
            if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next 
                        = ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                            ? ((0x1feU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg) 
                                          << 1U)) | 
                               (1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                          | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                         & (IData)(vlSelf->i2c_tb__DOT__sda_tb)))))
                            : (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg));
                }
            }
        }
        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
            = ((4U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                ? ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                    ? 0U : 6U) : ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                       ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? 3U : 0xbU)
                                       : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? ((8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))
                                               ? 0xbU
                                               : 7U)
                                           : 0xaU))
                                   : ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                       ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? 0xaU : 9U)
                                       : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                           ? 9U : 8U))));
    } else {
        if ((4U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    if ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 8U;
                    } else {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 7U;
                    }
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
                        = ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                            ? 0U : 6U);
                }
            } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 6U;
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 5U;
                }
            } else if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 1U;
            }
        } else if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if (vlSelf->i2c_tb__DOT__write) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
                        = ((4U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                            ? ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                ? 1U : ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                         ? 1U : 7U))
                            : ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                ? ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                    ? 7U : 5U) : 4U));
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 3U;
                }
            } else if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 3U;
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 2U;
            }
        } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
            if ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 2U;
            } else {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 1U;
            }
        } else if (((IData)(vlSelf->i2c_tb__DOT__write) 
                    & (0U == (IData)(vlSelf->i2c_tb__DOT__cmd)))) {
            vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
            vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    if (vlSelf->i2c_tb__DOT__write) {
                        if ((4U & (IData)(vlSelf->i2c_tb__DOT__cmd))) {
                            vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = 0U;
                            vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                = ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                    ? 0U : ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))
                                             ? 0U : 
                                            (((IData)(vlSelf->i2c_tb__DOT__data_in) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelf->i2c_tb__DOT__data_in)))));
                        } else if ((2U & (IData)(vlSelf->i2c_tb__DOT__cmd))) {
                            if ((1U & (IData)(vlSelf->i2c_tb__DOT__cmd))) {
                                vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = 0U;
                                vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next 
                                    = (((IData)(vlSelf->i2c_tb__DOT__data_in) 
                                        << 1U) | (1U 
                                                  & (IData)(vlSelf->i2c_tb__DOT__data_in)));
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vi2c_tb___024root___eval_nba(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vi2c_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x7fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vi2c_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vi2c_tb___024root___timing_resume(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_haa301464__0.resume("@([changed] ((~ i2c_tb.SDA) | (~ i2c_tb.i2c1.scl_reg)))");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h72324737__0.resume("@([changed] i2c_tb.i2c1.ready_out)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4d40d2db__0.resume("@([changed] i2c_tb.i2c1.scl_reg)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hda597f28__0.resume("@([changed] (~ i2c_tb.i2c1.scl_reg))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6eaed7dd__0.resume("@([changed] i2c_tb.i2c1.done_tick_out)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vi2c_tb___024root___timing_commit(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_haa301464__0.commit("@([changed] ((~ i2c_tb.SDA) | (~ i2c_tb.i2c1.scl_reg)))");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h72324737__0.commit("@([changed] i2c_tb.i2c1.ready_out)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4d40d2db__0.commit("@([changed] i2c_tb.i2c1.scl_reg)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hda597f28__0.commit("@([changed] (~ i2c_tb.i2c1.scl_reg))");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6eaed7dd__0.commit("@([changed] i2c_tb.i2c1.done_tick_out)");
    }
}

void Vi2c_tb___024root___eval_triggers__act(Vi2c_tb___024root* vlSelf);

bool Vi2c_tb___024root___eval_phase__act(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vi2c_tb___024root___eval_triggers__act(vlSelf);
    Vi2c_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vi2c_tb___024root___timing_resume(vlSelf);
        Vi2c_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vi2c_tb___024root___eval_phase__nba(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vi2c_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__nba(Vi2c_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__act(Vi2c_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vi2c_tb___024root___eval(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vi2c_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test/i2c_tb.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vi2c_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test/i2c_tb.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vi2c_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vi2c_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vi2c_tb___024root___eval_debug_assertions(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
