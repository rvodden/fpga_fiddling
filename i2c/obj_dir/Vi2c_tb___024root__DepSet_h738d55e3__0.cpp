// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_tb.h for the primary calling header

#include "Vi2c_tb__pch.h"
#include "Vi2c_tb__Syms.h"
#include "Vi2c_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vi2c_tb___024root___eval_initial__TOP__Vtiming__1(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"i2c.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->i2c_tb__DOT__drive_sda = 0U;
    vlSelf->i2c_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out))))) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:79: Assertion failed in %Ni2c_tb: Ready should be 1'b1.\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name());
        VL_STOP_MT("test/i2c_tb.v", 79, "");
    }
    vlSelf->i2c_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
    vlSelf->i2c_tb__DOT__cmd = 0U;
    vlSelf->i2c_tb__DOT__write = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 0U;
    while ((1U & (~ ((~ (IData)(vlSelf->i2c_tb__DOT__SDA)) 
                     | (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))))) {
        co_await vlSelf->__VtrigSched_haa301464__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] ((~ i2c_tb.SDA) | (~ i2c_tb.i2c1.scl_reg)))", 
                                                           "test/i2c_tb.v", 
                                                           89);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg))))) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:91: Assertion failed in %Ni2c_tb: SCL is low - Start condition not encountered\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name());
        VL_STOP_MT("test/i2c_tb.v", 91, "");
    }
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out)))) {
        co_await vlSelf->__VtrigSched_h72324737__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.ready_out)", 
                                                           "test/i2c_tb.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
    vlSelf->i2c_tb__DOT__cmd = 4U;
    vlSelf->i2c_tb__DOT__write = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 0U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0x7fU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 7U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 6U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xbfU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 6U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 5U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xdfU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 5U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 4U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xefU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 4U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 3U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xf7U & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 3U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 2U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xfbU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 2U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 1U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xfdU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | ((IData)(vlSelf->i2c_tb__DOT__SDA) 
                                         << 1U));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 0U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = ((0xfeU & (IData)(vlSelf->i2c_tb__DOT__test_data)) 
                                      | (IData)(vlSelf->i2c_tb__DOT__SDA));
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii = 0xffffffffU;
    vlSelf->i2c_tb__DOT__drive_sda = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = 0U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           166);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           167);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__drive_sda = 0U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out)))) {
        co_await vlSelf->__VtrigSched_h6eaed7dd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.done_tick_out)", 
                                                           "test/i2c_tb.v", 
                                                           104);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->i2c_tb__DOT__test_data) 
                     != (IData)(vlSelf->i2c_tb__DOT__data_in)))) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:105: Assertion failed in %Ni2c_tb: Did not receive the sent byteo of %b, receieved %b instead\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name(),
                  8,(IData)(vlSelf->i2c_tb__DOT__data_in),
                  8,vlSelf->i2c_tb__DOT__test_data);
        VL_STOP_MT("test/i2c_tb.v", 105, "");
    }
    if (VL_UNLIKELY((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg)))) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:106: Assertion failed in %Ni2c_tb: Master failed to read the acknowledgement sent by the slave.\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name());
        VL_STOP_MT("test/i2c_tb.v", 106, "");
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__cmd = 2U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 0U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out)))) {
        co_await vlSelf->__VtrigSched_h72324737__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.ready_out)", 
                                                           "test/i2c_tb.v", 
                                                           122);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_data = 0x45U;
    vlSelf->i2c_tb__DOT__cmd = 0U;
    vlSelf->i2c_tb__DOT__write = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 0U;
    while ((1U & (~ ((~ (IData)(vlSelf->i2c_tb__DOT__SDA)) 
                     | (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))))) {
        co_await vlSelf->__VtrigSched_haa301464__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] ((~ i2c_tb.SDA) | (~ i2c_tb.i2c1.scl_reg)))", 
                                                           "test/i2c_tb.v", 
                                                           132);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg))))) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:134: Assertion failed in %Ni2c_tb: SCL is low - Start condition not encountered\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name());
        VL_STOP_MT("test/i2c_tb.v", 134, "");
    }
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out)))) {
        co_await vlSelf->__VtrigSched_h72324737__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.ready_out)", 
                                                           "test/i2c_tb.v", 
                                                           136);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__cmd = 3U;
    vlSelf->i2c_tb__DOT__write = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__write = 0U;
    VL_WRITEF("%b\n",8,vlSelf->i2c_tb__DOT__test_data);
    vlSelf->i2c_tb__DOT__drive_sda = 1U;
    VL_WRITEF("%b\n",8,vlSelf->i2c_tb__DOT__test_data);
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 7U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 7U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 6U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 6U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 6U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 5U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 5U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 5U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 4U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 4U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 4U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 3U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 3U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 3U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 2U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 2U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 2U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 1U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                                         >> 1U));
    VL_WRITEF("%1#\n",1,(1U & ((IData)(vlSelf->i2c_tb__DOT__test_data) 
                               >> 1U)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 0U;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->i2c_tb__DOT__sda_tb = (1U & (IData)(vlSelf->i2c_tb__DOT__test_data));
    VL_WRITEF("%1#\n",1,(1U & (IData)(vlSelf->i2c_tb__DOT__test_data)));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii = 0xffffffffU;
    while (vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) {
        co_await vlSelf->__VtrigSched_hda597f28__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ i2c_tb.i2c1.scl_reg))", 
                                                           "test/i2c_tb.v", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__drive_sda = 0U;
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)))) {
        co_await vlSelf->__VtrigSched_h4d40d2db__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.scl_reg)", 
                                                           "test/i2c_tb.v", 
                                                           184);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->i2c_tb__DOT__test_ack = vlSelf->i2c_tb__DOT__SDA;
    VL_WRITEF("%b\n%b\n",8,vlSelf->i2c_tb__DOT__test_data,
              8,(IData)(vlSelf->i2c_tb__DOT__test_data));
    while ((1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out)))) {
        co_await vlSelf->__VtrigSched_h6eaed7dd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] i2c_tb.i2c1.done_tick_out)", 
                                                           "test/i2c_tb.v", 
                                                           149);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0xffU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg) 
                               >> 1U)) != (IData)(vlSelf->i2c_tb__DOT__test_data)))) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:150: Assertion failed in %Ni2c_tb: Did not receive the sent byteo of %b, receieved %b instead\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name(),
                  8,(IData)(vlSelf->i2c_tb__DOT__test_data),
                  8,(0xffU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg) 
                              >> 1U)));
        VL_STOP_MT("test/i2c_tb.v", 150, "");
    }
    if (VL_UNLIKELY(vlSelf->i2c_tb__DOT__test_ack)) {
        VL_WRITEF("[%0t] %%Error: i2c_tb.v:151: Assertion failed in %Ni2c_tb: Salve erroneously refeieve ack which was never sent by the master.\n",
                  64,VL_TIME_UNITED_Q(10),-9,vlSymsp->name());
        VL_STOP_MT("test/i2c_tb.v", 151, "");
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "test/i2c_tb.v", 
                                       153);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("test/i2c_tb.v", 154, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_tb___024root___dump_triggers__act(Vi2c_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vi2c_tb___024root___eval_triggers__act(Vi2c_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h3e87da56__0;
    __Vtrigcurrexpr_h3e87da56__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h4e6e488a__0;
    __Vtrigcurrexpr_h4e6e488a__0 = 0;
    __Vtrigcurrexpr_h3e87da56__0 = (1U & ((~ (IData)(vlSelf->i2c_tb__DOT__SDA)) 
                                          | (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg))));
    __Vtrigcurrexpr_h4e6e488a__0 = (1U & (~ (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg)));
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->i2c_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->i2c_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(__Vtrigcurrexpr_h3e87da56__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h3e87da56__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__ready_out__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__scl_reg__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_h4e6e488a__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h4e6e488a__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__done_tick_out__0)));
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__clk__0 
        = vlSelf->i2c_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__reset__0 
        = vlSelf->i2c_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr_h3e87da56__0 = __Vtrigcurrexpr_h3e87da56__0;
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__ready_out__0 
        = vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out;
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__scl_reg__0 
        = vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg;
    vlSelf->__Vtrigprevexpr_h4e6e488a__0 = __Vtrigcurrexpr_h4e6e488a__0;
    vlSelf->__Vtrigprevexpr___TOP__i2c_tb__DOT__i2c1__DOT__done_tick_out__0 
        = vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vi2c_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
