// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_tb.h for the primary calling header

#include "Vi2c_tb__pch.h"
#include "Vi2c_tb___024root.h"

VL_ATTR_COLD void Vi2c_tb___024root___eval_static(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vi2c_tb___024root___eval_final(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__stl(Vi2c_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vi2c_tb___024root___eval_phase__stl(Vi2c_tb___024root* vlSelf);

VL_ATTR_COLD void Vi2c_tb___024root___eval_settle(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_settle\n"); );
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
            Vi2c_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test/i2c_tb.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vi2c_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__stl(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vi2c_tb___024root___stl_sequent__TOP__0(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 1U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = 0U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 1U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out = 0U;
    vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next = vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg;
    if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = 1U;
                    if (vlSelf->i2c_tb__DOT__write) {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next 
                            = vlSelf->i2c_tb__DOT__cmd;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg)))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = 1U;
            }
        }
    }
    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
    vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg;
    vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next = vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg;
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
                    vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 1U;
                }
                vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                    = (0xffffU & ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))
                                   ? ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))
                                   : ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)))));
            } else {
                if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out 
                        = (1U & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                 >> 8U));
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                        = (0xffffU & ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))));
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out 
                        = (1U & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                 >> 8U));
                    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                        = (0xffffU & ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))));
                }
                vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 1U;
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
                    vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 0U;
                    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out 
                        = (1U & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg) 
                                 >> 8U));
                    if ((5U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))) {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = 0U;
                        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 8U;
                    } else {
                        vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg)));
                        vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = 7U;
                    }
                    vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = 1U;
                } else {
                    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next 
                        = ((0xaU == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg))
                            ? 0U : 6U);
                }
            } else if ((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
                vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 0U;
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
            vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = 0U;
            vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 0U;
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
            vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = 0U;
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
    vlSelf->i2c_tb__DOT__SDA = (1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                          | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                         & (IData)(vlSelf->i2c_tb__DOT__sda_tb))));
    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next = vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg;
    if ((8U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg) 
                      >> 2U)))) {
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
    }
}

VL_ATTR_COLD void Vi2c_tb___024root___eval_stl(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vi2c_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vi2c_tb___024root___eval_triggers__stl(Vi2c_tb___024root* vlSelf);

VL_ATTR_COLD bool Vi2c_tb___024root___eval_phase__stl(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vi2c_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vi2c_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__act(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i2c_tb.clk or posedge i2c_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] ((~ i2c_tb.SDA) | (~ i2c_tb.i2c1.scl_reg)))\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] i2c_tb.i2c1.ready_out)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] i2c_tb.i2c1.scl_reg)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] (~ i2c_tb.i2c1.scl_reg))\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] i2c_tb.i2c1.done_tick_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__nba(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i2c_tb.clk or posedge i2c_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] ((~ i2c_tb.SDA) | (~ i2c_tb.i2c1.scl_reg)))\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] i2c_tb.i2c1.ready_out)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] i2c_tb.i2c1.scl_reg)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] (~ i2c_tb.i2c1.scl_reg))\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] i2c_tb.i2c1.done_tick_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vi2c_tb___024root___ctor_var_reset(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i2c_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->i2c_tb__DOT__cmd = VL_RAND_RESET_I(3);
    vlSelf->i2c_tb__DOT__SDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__sda_tb = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__drive_sda = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__test_data = VL_RAND_RESET_I(8);
    vlSelf->i2c_tb__DOT__test_ack = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = VL_RAND_RESET_I(32);
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = VL_RAND_RESET_I(32);
    vlSelf->i2c_tb__DOT__SDA__en0 = 0;
    vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg = VL_RAND_RESET_I(4);
    vlSelf->i2c_tb__DOT__i2c1__DOT__state_next = VL_RAND_RESET_I(4);
    vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg = VL_RAND_RESET_I(3);
    vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next = VL_RAND_RESET_I(3);
    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg = VL_RAND_RESET_I(9);
    vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next = VL_RAND_RESET_I(9);
    vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg = VL_RAND_RESET_I(9);
    vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next = VL_RAND_RESET_I(9);
    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg = VL_RAND_RESET_I(16);
    vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next = VL_RAND_RESET_I(16);
    vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg = VL_RAND_RESET_I(4);
    vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next = VL_RAND_RESET_I(4);
    vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_reg = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out = VL_RAND_RESET_I(1);
    vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h3e87da56__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__ready_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__scl_reg__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h4e6e488a__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__done_tick_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
