// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestnextkingposition.h for the primary calling header

#include "Vtestnextkingposition__pch.h"
#include "Vtestnextkingposition___024root.h"

VlCoroutine Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__0(Vtestnextkingposition___024root* vlSelf);
VlCoroutine Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__1(Vtestnextkingposition___024root* vlSelf);

void Vtestnextkingposition___024root___eval_initial(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_initial\n"); );
    // Body
    Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testnextkingposition__DOT__clk__0 
        = vlSelf->testnextkingposition__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__0(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlUnpacked<CData/*3:0*/, 64> testnextkingposition__DOT__board;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        testnextkingposition__DOT__board[__Vi0] = 0;
    }
    // Body
    VL_WRITEF("=== Checking if we can get the ack from the req ===\n");
    testnextkingposition__DOT__board[0U] = (8U & testnextkingposition__DOT__board
                                            [0U]);
    testnextkingposition__DOT__board[0U] = (8U | testnextkingposition__DOT__board
                                            [0U]);
    testnextkingposition__DOT__board[1U] = (8U & testnextkingposition__DOT__board
                                            [1U]);
    testnextkingposition__DOT__board[1U] = (8U | testnextkingposition__DOT__board
                                            [1U]);
    testnextkingposition__DOT__board[2U] = (8U & testnextkingposition__DOT__board
                                            [2U]);
    testnextkingposition__DOT__board[2U] = (8U | testnextkingposition__DOT__board
                                            [2U]);
    testnextkingposition__DOT__board[3U] = (8U & testnextkingposition__DOT__board
                                            [3U]);
    testnextkingposition__DOT__board[3U] = (8U | testnextkingposition__DOT__board
                                            [3U]);
    testnextkingposition__DOT__board[4U] = (8U & testnextkingposition__DOT__board
                                            [4U]);
    testnextkingposition__DOT__board[4U] = (8U | testnextkingposition__DOT__board
                                            [4U]);
    testnextkingposition__DOT__board[5U] = (8U & testnextkingposition__DOT__board
                                            [5U]);
    testnextkingposition__DOT__board[5U] = (8U | testnextkingposition__DOT__board
                                            [5U]);
    testnextkingposition__DOT__board[6U] = (8U & testnextkingposition__DOT__board
                                            [6U]);
    testnextkingposition__DOT__board[6U] = (8U | testnextkingposition__DOT__board
                                            [6U]);
    testnextkingposition__DOT__board[7U] = (8U & testnextkingposition__DOT__board
                                            [7U]);
    testnextkingposition__DOT__board[7U] = (8U | testnextkingposition__DOT__board
                                            [7U]);
    testnextkingposition__DOT__board[8U] = (8U & testnextkingposition__DOT__board
                                            [8U]);
    testnextkingposition__DOT__board[8U] = (8U | testnextkingposition__DOT__board
                                            [8U]);
    testnextkingposition__DOT__board[9U] = (8U & testnextkingposition__DOT__board
                                            [9U]);
    testnextkingposition__DOT__board[9U] = (8U | testnextkingposition__DOT__board
                                            [9U]);
    testnextkingposition__DOT__board[0xaU] = (8U & 
                                              testnextkingposition__DOT__board
                                              [0xaU]);
    testnextkingposition__DOT__board[0xaU] = (8U | 
                                              testnextkingposition__DOT__board
                                              [0xaU]);
    testnextkingposition__DOT__board[0xbU] = (8U & 
                                              testnextkingposition__DOT__board
                                              [0xbU]);
    testnextkingposition__DOT__board[0xbU] = (8U | 
                                              testnextkingposition__DOT__board
                                              [0xbU]);
    testnextkingposition__DOT__board[0xcU] = (8U & 
                                              testnextkingposition__DOT__board
                                              [0xcU]);
    testnextkingposition__DOT__board[0xcU] = (8U | 
                                              testnextkingposition__DOT__board
                                              [0xcU]);
    testnextkingposition__DOT__board[0xdU] = (8U & 
                                              testnextkingposition__DOT__board
                                              [0xdU]);
    testnextkingposition__DOT__board[0xdU] = (8U | 
                                              testnextkingposition__DOT__board
                                              [0xdU]);
    testnextkingposition__DOT__board[0xeU] = (8U & 
                                              testnextkingposition__DOT__board
                                              [0xeU]);
    testnextkingposition__DOT__board[0xeU] = (8U | 
                                              testnextkingposition__DOT__board
                                              [0xeU]);
    testnextkingposition__DOT__board[0xfU] = (8U & 
                                              testnextkingposition__DOT__board
                                              [0xfU]);
    testnextkingposition__DOT__board[0xfU] = (8U | 
                                              testnextkingposition__DOT__board
                                              [0xfU]);
    testnextkingposition__DOT__board[0x10U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x10U]);
    testnextkingposition__DOT__board[0x10U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x10U]);
    testnextkingposition__DOT__board[0x11U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x11U]);
    testnextkingposition__DOT__board[0x11U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x11U]);
    testnextkingposition__DOT__board[0x12U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x12U]);
    testnextkingposition__DOT__board[0x12U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x12U]);
    testnextkingposition__DOT__board[0x13U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x13U]);
    testnextkingposition__DOT__board[0x13U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x13U]);
    testnextkingposition__DOT__board[0x14U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x14U]);
    testnextkingposition__DOT__board[0x14U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x14U]);
    testnextkingposition__DOT__board[0x15U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x15U]);
    testnextkingposition__DOT__board[0x15U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x15U]);
    testnextkingposition__DOT__board[0x16U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x16U]);
    testnextkingposition__DOT__board[0x16U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x16U]);
    testnextkingposition__DOT__board[0x17U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x17U]);
    testnextkingposition__DOT__board[0x17U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x17U]);
    testnextkingposition__DOT__board[0x18U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x18U]);
    testnextkingposition__DOT__board[0x18U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x18U]);
    testnextkingposition__DOT__board[0x19U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x19U]);
    testnextkingposition__DOT__board[0x19U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x19U]);
    testnextkingposition__DOT__board[0x1aU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x1aU]);
    testnextkingposition__DOT__board[0x1aU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x1aU]);
    testnextkingposition__DOT__board[0x1bU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x1bU]);
    testnextkingposition__DOT__board[0x1bU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x1bU]);
    testnextkingposition__DOT__board[0x1cU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x1cU]);
    testnextkingposition__DOT__board[0x1cU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x1cU]);
    testnextkingposition__DOT__board[0x1dU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x1dU]);
    testnextkingposition__DOT__board[0x1dU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x1dU]);
    testnextkingposition__DOT__board[0x1eU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x1eU]);
    testnextkingposition__DOT__board[0x1eU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x1eU]);
    testnextkingposition__DOT__board[0x1fU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x1fU]);
    testnextkingposition__DOT__board[0x1fU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x1fU]);
    testnextkingposition__DOT__board[0x20U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x20U]);
    testnextkingposition__DOT__board[0x20U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x20U]);
    testnextkingposition__DOT__board[0x21U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x21U]);
    testnextkingposition__DOT__board[0x21U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x21U]);
    testnextkingposition__DOT__board[0x22U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x22U]);
    testnextkingposition__DOT__board[0x22U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x22U]);
    testnextkingposition__DOT__board[0x23U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x23U]);
    testnextkingposition__DOT__board[0x23U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x23U]);
    testnextkingposition__DOT__board[0x24U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x24U]);
    testnextkingposition__DOT__board[0x24U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x24U]);
    testnextkingposition__DOT__board[0x25U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x25U]);
    testnextkingposition__DOT__board[0x25U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x25U]);
    testnextkingposition__DOT__board[0x26U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x26U]);
    testnextkingposition__DOT__board[0x26U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x26U]);
    testnextkingposition__DOT__board[0x27U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x27U]);
    testnextkingposition__DOT__board[0x27U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x27U]);
    testnextkingposition__DOT__board[0x28U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x28U]);
    testnextkingposition__DOT__board[0x28U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x28U]);
    testnextkingposition__DOT__board[0x29U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x29U]);
    testnextkingposition__DOT__board[0x29U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x29U]);
    testnextkingposition__DOT__board[0x2aU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x2aU]);
    testnextkingposition__DOT__board[0x2aU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x2aU]);
    testnextkingposition__DOT__board[0x2bU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x2bU]);
    testnextkingposition__DOT__board[0x2bU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x2bU]);
    testnextkingposition__DOT__board[0x2cU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x2cU]);
    testnextkingposition__DOT__board[0x2cU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x2cU]);
    testnextkingposition__DOT__board[0x2dU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x2dU]);
    testnextkingposition__DOT__board[0x2dU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x2dU]);
    testnextkingposition__DOT__board[0x2eU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x2eU]);
    testnextkingposition__DOT__board[0x2eU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x2eU]);
    testnextkingposition__DOT__board[0x2fU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x2fU]);
    testnextkingposition__DOT__board[0x2fU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x2fU]);
    testnextkingposition__DOT__board[0x30U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x30U]);
    testnextkingposition__DOT__board[0x30U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x30U]);
    testnextkingposition__DOT__board[0x31U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x31U]);
    testnextkingposition__DOT__board[0x31U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x31U]);
    testnextkingposition__DOT__board[0x32U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x32U]);
    testnextkingposition__DOT__board[0x32U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x32U]);
    testnextkingposition__DOT__board[0x33U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x33U]);
    testnextkingposition__DOT__board[0x33U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x33U]);
    testnextkingposition__DOT__board[0x34U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x34U]);
    testnextkingposition__DOT__board[0x34U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x34U]);
    testnextkingposition__DOT__board[0x35U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x35U]);
    testnextkingposition__DOT__board[0x35U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x35U]);
    testnextkingposition__DOT__board[0x36U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x36U]);
    testnextkingposition__DOT__board[0x36U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x36U]);
    testnextkingposition__DOT__board[0x37U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x37U]);
    testnextkingposition__DOT__board[0x37U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x37U]);
    testnextkingposition__DOT__board[0x38U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x38U]);
    testnextkingposition__DOT__board[0x38U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x38U]);
    testnextkingposition__DOT__board[0x39U] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x39U]);
    testnextkingposition__DOT__board[0x39U] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x39U]);
    testnextkingposition__DOT__board[0x3aU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x3aU]);
    testnextkingposition__DOT__board[0x3aU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x3aU]);
    testnextkingposition__DOT__board[0x3bU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x3bU]);
    testnextkingposition__DOT__board[0x3bU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x3bU]);
    testnextkingposition__DOT__board[0x3cU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x3cU]);
    testnextkingposition__DOT__board[0x3cU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x3cU]);
    testnextkingposition__DOT__board[0x3dU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x3dU]);
    testnextkingposition__DOT__board[0x3dU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x3dU]);
    testnextkingposition__DOT__board[0x3eU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x3eU]);
    testnextkingposition__DOT__board[0x3eU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x3eU]);
    testnextkingposition__DOT__board[0x3fU] = (8U & 
                                               testnextkingposition__DOT__board
                                               [0x3fU]);
    testnextkingposition__DOT__board[0x3fU] = (8U | 
                                               testnextkingposition__DOT__board
                                               [0x3fU]);
    vlSelf->testnextkingposition__DOT__req = 1U;
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("initializes with wrong value\n");
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("initializes with wrong state\n");
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("initializes with wrong counter\n");
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((2U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((3U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((4U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((5U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       83);
    if (VL_UNLIKELY(vlSelf->testnextkingposition__DOT__ack)) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((6U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingposition.sv", 
                                       93);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testnextkingposition__DOT__ack))))) {
        VL_WRITEF("did we get the ack? Result: %0# (expected 0)\n",
                  1,vlSelf->testnextkingposition__DOT__ack);
    }
    if (VL_UNLIKELY((1U != (IData)(vlSelf->testnextkingposition__DOT__out_state)))) {
        VL_WRITEF("in here the state is %0# (expected 01)\n",
                  2,vlSelf->testnextkingposition__DOT__out_state);
    }
    if (VL_UNLIKELY((7U != (IData)(vlSelf->testnextkingposition__DOT__out_counter)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition__DOT__out_counter);
    }
    VL_FINISH_MT("tests/testnextkingposition.sv", 205, "");
}

VL_INLINE_OPT VlCoroutine Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__1(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tests/testnextkingposition.sv", 
                                           61);
        vlSelf->testnextkingposition__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tests/testnextkingposition.sv", 
                                           62);
        vlSelf->testnextkingposition__DOT__clk = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtestnextkingposition__ConstPool__TABLE_hcdf0b0b6_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtestnextkingposition__ConstPool__TABLE_hc4365c2b_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtestnextkingposition__ConstPool__TABLE_h28122c4c_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtestnextkingposition__ConstPool__TABLE_h7442f19a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestnextkingposition__ConstPool__TABLE_h48783dfa_0;

VL_INLINE_OPT void Vtestnextkingposition___024root___act_sequent__TOP__0(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->testnextkingposition__DOT__req) 
                     << 5U) | (((IData)(vlSelf->testnextkingposition__DOT__dut__DOT__counter) 
                                << 2U) | (IData)(vlSelf->testnextkingposition__DOT__dut__DOT__state)));
    vlSelf->testnextkingposition__DOT__dut__DOT__next_state 
        = Vtestnextkingposition__ConstPool__TABLE_hcdf0b0b6_0
        [__Vtableidx1];
    vlSelf->testnextkingposition__DOT__out_state = 
        Vtestnextkingposition__ConstPool__TABLE_hc4365c2b_0
        [__Vtableidx1];
    vlSelf->testnextkingposition__DOT__dut__DOT__next_counter 
        = Vtestnextkingposition__ConstPool__TABLE_h28122c4c_0
        [__Vtableidx1];
    vlSelf->testnextkingposition__DOT__out_counter 
        = Vtestnextkingposition__ConstPool__TABLE_h7442f19a_0
        [__Vtableidx1];
    vlSelf->testnextkingposition__DOT__ack = Vtestnextkingposition__ConstPool__TABLE_h48783dfa_0
        [__Vtableidx1];
}

void Vtestnextkingposition___024root___eval_act(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestnextkingposition___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestnextkingposition___024root___nba_sequent__TOP__0(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->testnextkingposition__DOT__dut__DOT__counter 
        = vlSelf->testnextkingposition__DOT__dut__DOT__next_counter;
    vlSelf->testnextkingposition__DOT__dut__DOT__state 
        = vlSelf->testnextkingposition__DOT__dut__DOT__next_state;
}

void Vtestnextkingposition___024root___eval_nba(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestnextkingposition___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestnextkingposition___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestnextkingposition___024root___timing_resume(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestnextkingposition___024root___eval_triggers__act(Vtestnextkingposition___024root* vlSelf);

bool Vtestnextkingposition___024root___eval_phase__act(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestnextkingposition___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestnextkingposition___024root___timing_resume(vlSelf);
        Vtestnextkingposition___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestnextkingposition___024root___eval_phase__nba(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestnextkingposition___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition___024root___dump_triggers__nba(Vtestnextkingposition___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition___024root___dump_triggers__act(Vtestnextkingposition___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestnextkingposition___024root___eval(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestnextkingposition___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tests/testnextkingposition.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestnextkingposition___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tests/testnextkingposition.sv", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestnextkingposition___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestnextkingposition___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestnextkingposition___024root___eval_debug_assertions(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
