// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcheckbytower.h for the primary calling header

#include "Vtestcheckbytower__pch.h"
#include "Vtestcheckbytower___024root.h"

VlCoroutine Vtestcheckbytower___024root___eval_initial__TOP__Vtiming__0(Vtestcheckbytower___024root* vlSelf);

void Vtestcheckbytower___024root___eval_initial(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_initial\n"); );
    // Body
    Vtestcheckbytower___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtestcheckbytower___024root___eval_initial__TOP__Vtiming__0(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*2:0*/ testcheckbytower__DOT__unnamedblk2__DOT__row;
    testcheckbytower__DOT__unnamedblk2__DOT__row = 0;
    CData/*2:0*/ testcheckbytower__DOT__unnamedblk2__DOT__col;
    testcheckbytower__DOT__unnamedblk2__DOT__col = 0;
    CData/*2:0*/ testcheckbytower__DOT__unnamedblk2__DOT__towerrow;
    testcheckbytower__DOT__unnamedblk2__DOT__towerrow = 0;
    CData/*2:0*/ testcheckbytower__DOT__unnamedblk2__DOT__towercol;
    testcheckbytower__DOT__unnamedblk2__DOT__towercol = 0;
    CData/*5:0*/ __Vfunc_fullcoord__1__Vfuncout;
    __Vfunc_fullcoord__1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__1__row;
    __Vfunc_fullcoord__1__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__1__col;
    __Vfunc_fullcoord__1__col = 0;
    CData/*5:0*/ __Vfunc_fullcoord__2__Vfuncout;
    __Vfunc_fullcoord__2__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__2__row;
    __Vfunc_fullcoord__2__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__2__col;
    __Vfunc_fullcoord__2__col = 0;
    CData/*5:0*/ __Vfunc_fullcoord__3__Vfuncout;
    __Vfunc_fullcoord__3__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__3__row;
    __Vfunc_fullcoord__3__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__3__col;
    __Vfunc_fullcoord__3__col = 0;
    CData/*5:0*/ __Vfunc_fullcoord__4__Vfuncout;
    __Vfunc_fullcoord__4__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__4__row;
    __Vfunc_fullcoord__4__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__4__col;
    __Vfunc_fullcoord__4__col = 0;
    CData/*5:0*/ __Vfunc_fullcoord__5__Vfuncout;
    __Vfunc_fullcoord__5__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__5__row;
    __Vfunc_fullcoord__5__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__5__col;
    __Vfunc_fullcoord__5__col = 0;
    // Body
    VL_WRITEF("first easy test with empty board\n");
    vlSelf->testcheckbytower__DOT__board[0U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [0U]);
    vlSelf->testcheckbytower__DOT__board[0U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [0U]);
    vlSelf->testcheckbytower__DOT__board[1U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [1U]);
    vlSelf->testcheckbytower__DOT__board[1U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [1U]);
    vlSelf->testcheckbytower__DOT__board[2U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [2U]);
    vlSelf->testcheckbytower__DOT__board[2U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [2U]);
    vlSelf->testcheckbytower__DOT__board[3U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [3U]);
    vlSelf->testcheckbytower__DOT__board[3U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [3U]);
    vlSelf->testcheckbytower__DOT__board[4U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [4U]);
    vlSelf->testcheckbytower__DOT__board[4U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [4U]);
    vlSelf->testcheckbytower__DOT__board[5U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [5U]);
    vlSelf->testcheckbytower__DOT__board[5U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [5U]);
    vlSelf->testcheckbytower__DOT__board[6U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [6U]);
    vlSelf->testcheckbytower__DOT__board[6U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [6U]);
    vlSelf->testcheckbytower__DOT__board[7U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [7U]);
    vlSelf->testcheckbytower__DOT__board[7U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [7U]);
    vlSelf->testcheckbytower__DOT__board[8U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [8U]);
    vlSelf->testcheckbytower__DOT__board[8U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [8U]);
    vlSelf->testcheckbytower__DOT__board[9U] = (8U 
                                                & vlSelf->testcheckbytower__DOT__board
                                                [9U]);
    vlSelf->testcheckbytower__DOT__board[9U] = (8U 
                                                | vlSelf->testcheckbytower__DOT__board
                                                [9U]);
    vlSelf->testcheckbytower__DOT__board[0xaU] = (8U 
                                                  & vlSelf->testcheckbytower__DOT__board
                                                  [0xaU]);
    vlSelf->testcheckbytower__DOT__board[0xaU] = (8U 
                                                  | vlSelf->testcheckbytower__DOT__board
                                                  [0xaU]);
    vlSelf->testcheckbytower__DOT__board[0xbU] = (8U 
                                                  & vlSelf->testcheckbytower__DOT__board
                                                  [0xbU]);
    vlSelf->testcheckbytower__DOT__board[0xbU] = (8U 
                                                  | vlSelf->testcheckbytower__DOT__board
                                                  [0xbU]);
    vlSelf->testcheckbytower__DOT__board[0xcU] = (8U 
                                                  & vlSelf->testcheckbytower__DOT__board
                                                  [0xcU]);
    vlSelf->testcheckbytower__DOT__board[0xcU] = (8U 
                                                  | vlSelf->testcheckbytower__DOT__board
                                                  [0xcU]);
    vlSelf->testcheckbytower__DOT__board[0xdU] = (8U 
                                                  & vlSelf->testcheckbytower__DOT__board
                                                  [0xdU]);
    vlSelf->testcheckbytower__DOT__board[0xdU] = (8U 
                                                  | vlSelf->testcheckbytower__DOT__board
                                                  [0xdU]);
    vlSelf->testcheckbytower__DOT__board[0xeU] = (8U 
                                                  & vlSelf->testcheckbytower__DOT__board
                                                  [0xeU]);
    vlSelf->testcheckbytower__DOT__board[0xeU] = (8U 
                                                  | vlSelf->testcheckbytower__DOT__board
                                                  [0xeU]);
    vlSelf->testcheckbytower__DOT__board[0xfU] = (8U 
                                                  & vlSelf->testcheckbytower__DOT__board
                                                  [0xfU]);
    vlSelf->testcheckbytower__DOT__board[0xfU] = (8U 
                                                  | vlSelf->testcheckbytower__DOT__board
                                                  [0xfU]);
    vlSelf->testcheckbytower__DOT__board[0x10U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x10U]);
    vlSelf->testcheckbytower__DOT__board[0x10U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x10U]);
    vlSelf->testcheckbytower__DOT__board[0x11U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x11U]);
    vlSelf->testcheckbytower__DOT__board[0x11U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x11U]);
    vlSelf->testcheckbytower__DOT__board[0x12U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x12U]);
    vlSelf->testcheckbytower__DOT__board[0x12U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x12U]);
    vlSelf->testcheckbytower__DOT__board[0x13U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x13U]);
    vlSelf->testcheckbytower__DOT__board[0x13U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x13U]);
    vlSelf->testcheckbytower__DOT__board[0x14U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x14U]);
    vlSelf->testcheckbytower__DOT__board[0x14U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x14U]);
    vlSelf->testcheckbytower__DOT__board[0x15U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x15U]);
    vlSelf->testcheckbytower__DOT__board[0x15U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x15U]);
    vlSelf->testcheckbytower__DOT__board[0x16U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x16U]);
    vlSelf->testcheckbytower__DOT__board[0x16U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x16U]);
    vlSelf->testcheckbytower__DOT__board[0x17U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x17U]);
    vlSelf->testcheckbytower__DOT__board[0x17U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x17U]);
    vlSelf->testcheckbytower__DOT__board[0x18U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x18U]);
    vlSelf->testcheckbytower__DOT__board[0x18U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x18U]);
    vlSelf->testcheckbytower__DOT__board[0x19U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x19U]);
    vlSelf->testcheckbytower__DOT__board[0x19U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x19U]);
    vlSelf->testcheckbytower__DOT__board[0x1aU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x1aU]);
    vlSelf->testcheckbytower__DOT__board[0x1aU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x1aU]);
    vlSelf->testcheckbytower__DOT__board[0x1bU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x1bU]);
    vlSelf->testcheckbytower__DOT__board[0x1bU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x1bU]);
    vlSelf->testcheckbytower__DOT__board[0x1cU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x1cU]);
    vlSelf->testcheckbytower__DOT__board[0x1cU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x1cU]);
    vlSelf->testcheckbytower__DOT__board[0x1dU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x1dU]);
    vlSelf->testcheckbytower__DOT__board[0x1dU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x1dU]);
    vlSelf->testcheckbytower__DOT__board[0x1eU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x1eU]);
    vlSelf->testcheckbytower__DOT__board[0x1eU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x1eU]);
    vlSelf->testcheckbytower__DOT__board[0x1fU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x1fU]);
    vlSelf->testcheckbytower__DOT__board[0x1fU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x1fU]);
    vlSelf->testcheckbytower__DOT__board[0x20U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x20U]);
    vlSelf->testcheckbytower__DOT__board[0x20U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x20U]);
    vlSelf->testcheckbytower__DOT__board[0x21U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x21U]);
    vlSelf->testcheckbytower__DOT__board[0x21U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x21U]);
    vlSelf->testcheckbytower__DOT__board[0x22U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x22U]);
    vlSelf->testcheckbytower__DOT__board[0x22U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x22U]);
    vlSelf->testcheckbytower__DOT__board[0x23U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x23U]);
    vlSelf->testcheckbytower__DOT__board[0x23U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x23U]);
    vlSelf->testcheckbytower__DOT__board[0x24U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x24U]);
    vlSelf->testcheckbytower__DOT__board[0x24U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x24U]);
    vlSelf->testcheckbytower__DOT__board[0x25U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x25U]);
    vlSelf->testcheckbytower__DOT__board[0x25U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x25U]);
    vlSelf->testcheckbytower__DOT__board[0x26U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x26U]);
    vlSelf->testcheckbytower__DOT__board[0x26U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x26U]);
    vlSelf->testcheckbytower__DOT__board[0x27U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x27U]);
    vlSelf->testcheckbytower__DOT__board[0x27U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x27U]);
    vlSelf->testcheckbytower__DOT__board[0x28U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x28U]);
    vlSelf->testcheckbytower__DOT__board[0x28U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x28U]);
    vlSelf->testcheckbytower__DOT__board[0x29U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x29U]);
    vlSelf->testcheckbytower__DOT__board[0x29U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x29U]);
    vlSelf->testcheckbytower__DOT__board[0x2aU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x2aU]);
    vlSelf->testcheckbytower__DOT__board[0x2aU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x2aU]);
    vlSelf->testcheckbytower__DOT__board[0x2bU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x2bU]);
    vlSelf->testcheckbytower__DOT__board[0x2bU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x2bU]);
    vlSelf->testcheckbytower__DOT__board[0x2cU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x2cU]);
    vlSelf->testcheckbytower__DOT__board[0x2cU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x2cU]);
    vlSelf->testcheckbytower__DOT__board[0x2dU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x2dU]);
    vlSelf->testcheckbytower__DOT__board[0x2dU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x2dU]);
    vlSelf->testcheckbytower__DOT__board[0x2eU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x2eU]);
    vlSelf->testcheckbytower__DOT__board[0x2eU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x2eU]);
    vlSelf->testcheckbytower__DOT__board[0x2fU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x2fU]);
    vlSelf->testcheckbytower__DOT__board[0x2fU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x2fU]);
    vlSelf->testcheckbytower__DOT__board[0x30U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x30U]);
    vlSelf->testcheckbytower__DOT__board[0x30U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x30U]);
    vlSelf->testcheckbytower__DOT__board[0x31U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x31U]);
    vlSelf->testcheckbytower__DOT__board[0x31U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x31U]);
    vlSelf->testcheckbytower__DOT__board[0x32U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x32U]);
    vlSelf->testcheckbytower__DOT__board[0x32U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x32U]);
    vlSelf->testcheckbytower__DOT__board[0x33U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x33U]);
    vlSelf->testcheckbytower__DOT__board[0x33U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x33U]);
    vlSelf->testcheckbytower__DOT__board[0x34U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x34U]);
    vlSelf->testcheckbytower__DOT__board[0x34U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x34U]);
    vlSelf->testcheckbytower__DOT__board[0x35U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x35U]);
    vlSelf->testcheckbytower__DOT__board[0x35U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x35U]);
    vlSelf->testcheckbytower__DOT__board[0x36U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x36U]);
    vlSelf->testcheckbytower__DOT__board[0x36U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x36U]);
    vlSelf->testcheckbytower__DOT__board[0x37U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x37U]);
    vlSelf->testcheckbytower__DOT__board[0x37U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x37U]);
    vlSelf->testcheckbytower__DOT__board[0x38U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x38U]);
    vlSelf->testcheckbytower__DOT__board[0x38U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x38U]);
    vlSelf->testcheckbytower__DOT__board[0x39U] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x39U]);
    vlSelf->testcheckbytower__DOT__board[0x39U] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x39U]);
    vlSelf->testcheckbytower__DOT__board[0x3aU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x3aU]);
    vlSelf->testcheckbytower__DOT__board[0x3aU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x3aU]);
    vlSelf->testcheckbytower__DOT__board[0x3bU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x3bU]);
    vlSelf->testcheckbytower__DOT__board[0x3bU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x3bU]);
    vlSelf->testcheckbytower__DOT__board[0x3cU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x3cU]);
    vlSelf->testcheckbytower__DOT__board[0x3cU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x3cU]);
    vlSelf->testcheckbytower__DOT__board[0x3dU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x3dU]);
    vlSelf->testcheckbytower__DOT__board[0x3dU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x3dU]);
    vlSelf->testcheckbytower__DOT__board[0x3eU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x3eU]);
    vlSelf->testcheckbytower__DOT__board[0x3eU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x3eU]);
    vlSelf->testcheckbytower__DOT__board[0x3fU] = (8U 
                                                   & vlSelf->testcheckbytower__DOT__board
                                                   [0x3fU]);
    vlSelf->testcheckbytower__DOT__board[0x3fU] = (8U 
                                                   | vlSelf->testcheckbytower__DOT__board
                                                   [0x3fU]);
    vlSelf->testcheckbytower__DOT__kingPosition = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testcheckbytower.sv", 
                                       75);
    if (VL_UNLIKELY(vlSelf->testcheckbytower__DOT__attacked)) {
        VL_WRITEF("for some reason we are attacked on an empty board\n");
        if (VL_UNLIKELY(vlSelf->testcheckbytower__DOT__out_lefttowerattack)) {
            VL_WRITEF(" the attack comes from the left tower: %0#\n",
                      1,vlSelf->testcheckbytower__DOT__out_lefttowerattack);
        }
    }
    testcheckbytower__DOT__unnamedblk2__DOT__row = 4U;
    testcheckbytower__DOT__unnamedblk2__DOT__col = 4U;
    __Vfunc_fullcoord__1__col = testcheckbytower__DOT__unnamedblk2__DOT__col;
    __Vfunc_fullcoord__1__row = testcheckbytower__DOT__unnamedblk2__DOT__row;
    __Vfunc_fullcoord__1__Vfuncout = (((IData)(__Vfunc_fullcoord__1__row) 
                                       << 3U) | (IData)(__Vfunc_fullcoord__1__col));
    vlSelf->testcheckbytower__DOT__kingPosition = __Vfunc_fullcoord__1__Vfuncout;
    VL_ASSIGNSEL_II(4,3,0U, vlSelf->testcheckbytower__DOT__board
                    [([&]() {
                __Vfunc_fullcoord__2__col = testcheckbytower__DOT__unnamedblk2__DOT__col;
                __Vfunc_fullcoord__2__row = testcheckbytower__DOT__unnamedblk2__DOT__row;
                __Vfunc_fullcoord__2__Vfuncout = (((IData)(__Vfunc_fullcoord__2__row) 
                                                   << 3U) 
                                                  | (IData)(__Vfunc_fullcoord__2__col));
            }(), (IData)(__Vfunc_fullcoord__2__Vfuncout))], 6U);
    VL_ASSIGNBIT_II(3U, vlSelf->testcheckbytower__DOT__board
                    [([&]() {
                __Vfunc_fullcoord__3__col = testcheckbytower__DOT__unnamedblk2__DOT__col;
                __Vfunc_fullcoord__3__row = testcheckbytower__DOT__unnamedblk2__DOT__row;
                __Vfunc_fullcoord__3__Vfuncout = (((IData)(__Vfunc_fullcoord__3__row) 
                                                   << 3U) 
                                                  | (IData)(__Vfunc_fullcoord__3__col));
            }(), (IData)(__Vfunc_fullcoord__3__Vfuncout))], 0U);
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testcheckbytower.sv", 
                                       100);
    testcheckbytower__DOT__unnamedblk2__DOT__towerrow = 2U;
    testcheckbytower__DOT__unnamedblk2__DOT__towercol 
        = testcheckbytower__DOT__unnamedblk2__DOT__col;
    VL_ASSIGNSEL_II(4,3,0U, vlSelf->testcheckbytower__DOT__board
                    [([&]() {
                __Vfunc_fullcoord__4__col = testcheckbytower__DOT__unnamedblk2__DOT__towercol;
                __Vfunc_fullcoord__4__row = testcheckbytower__DOT__unnamedblk2__DOT__towerrow;
                __Vfunc_fullcoord__4__Vfuncout = (((IData)(__Vfunc_fullcoord__4__row) 
                                                   << 3U) 
                                                  | (IData)(__Vfunc_fullcoord__4__col));
            }(), (IData)(__Vfunc_fullcoord__4__Vfuncout))], 4U);
    VL_ASSIGNBIT_IO(3U, vlSelf->testcheckbytower__DOT__board
                    [([&]() {
                __Vfunc_fullcoord__5__col = testcheckbytower__DOT__unnamedblk2__DOT__towercol;
                __Vfunc_fullcoord__5__row = testcheckbytower__DOT__unnamedblk2__DOT__towerrow;
                __Vfunc_fullcoord__5__Vfuncout = (((IData)(__Vfunc_fullcoord__5__row) 
                                                   << 3U) 
                                                  | (IData)(__Vfunc_fullcoord__5__col));
            }(), (IData)(__Vfunc_fullcoord__5__Vfuncout))]);
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tests/testcheckbytower.sv", 
                                       108);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testcheckbytower__DOT__attacked))))) {
        VL_WRITEF("why are we not attacked???\n");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testcheckbytower__DOT__out_lefttowerattack))))) {
            VL_WRITEF("we are not attacked on the left, which we should be!\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [0U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 0: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 0: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 0: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [1U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 1: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 1: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 1: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [2U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 2: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 2: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 2: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [3U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 3: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 3: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 3: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [4U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 4: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 4: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 4: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [5U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 5: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 5: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 5: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [6U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 6: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 6: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 6: NOTENEMYROOK\n");
        }
        vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at 
            = vlSelf->testcheckbytower__DOT__out_status_col
            [7U];
        if (VL_UNLIKELY((0U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 7: ENEMYROOK\n");
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 7: EMPTY\n");
        }
        if (VL_UNLIKELY((2U == (IData)(vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at)))) {
            VL_WRITEF("status 7: NOTENEMYROOK\n");
        }
    }
    VL_FINISH_MT("tests/testcheckbytower.sv", 146, "");
}

VL_INLINE_OPT void Vtestcheckbytower___024root___act_sequent__TOP__0(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ testcheckbytower__DOT__dut__DOT__row;
    testcheckbytower__DOT__dut__DOT__row = 0;
    CData/*2:0*/ testcheckbytower__DOT__dut__DOT__col;
    testcheckbytower__DOT__dut__DOT__col = 0;
    CData/*0:0*/ testcheckbytower__DOT__dut__DOT__lefttowerattack;
    testcheckbytower__DOT__dut__DOT__lefttowerattack = 0;
    CData/*0:0*/ testcheckbytower__DOT__dut__DOT__playing;
    testcheckbytower__DOT__dut__DOT__playing = 0;
    CData/*2:0*/ __Vfunc_row__6__Vfuncout;
    __Vfunc_row__6__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_row__6__index;
    __Vfunc_row__6__index = 0;
    CData/*2:0*/ __Vfunc_col__7__Vfuncout;
    __Vfunc_col__7__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_col__7__index;
    __Vfunc_col__7__index = 0;
    // Body
    testcheckbytower__DOT__dut__DOT__playing = (1U 
                                                & (vlSelf->testcheckbytower__DOT__board
                                                   [vlSelf->testcheckbytower__DOT__kingPosition] 
                                                   >> 3U));
    __Vfunc_row__6__index = vlSelf->testcheckbytower__DOT__kingPosition;
    __Vfunc_row__6__Vfuncout = (7U & ((IData)(__Vfunc_row__6__index) 
                                      >> 3U));
    testcheckbytower__DOT__dut__DOT__row = __Vfunc_row__6__Vfuncout;
    __Vfunc_col__7__index = vlSelf->testcheckbytower__DOT__kingPosition;
    __Vfunc_col__7__Vfuncout = (7U & (IData)(__Vfunc_col__7__index));
    testcheckbytower__DOT__dut__DOT__col = __Vfunc_col__7__Vfuncout;
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[0U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = vlSelf->__Vfunc_fullcoord__8__col;
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[1U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (8U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[2U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (0x10U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[3U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (0x18U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[4U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (0x20U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[5U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (0x28U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[6U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (0x30U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[7U] 
        = vlSelf->testcheckbytower__DOT__board[([&]() {
            vlSelf->__Vfunc_fullcoord__8__col = testcheckbytower__DOT__dut__DOT__col;
            vlSelf->__Vfunc_fullcoord__8__Vfuncout 
                = (0x38U | (IData)(vlSelf->__Vfunc_fullcoord__8__col));
        }(), (IData)(vlSelf->__Vfunc_fullcoord__8__Vfuncout))];
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[0U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [0U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [0U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [0U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[1U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [1U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [1U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [1U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[2U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [2U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [2U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [2U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[3U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [3U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [3U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [3U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[4U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [4U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [4U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [4U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[5U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [5U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [5U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [5U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[6U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [6U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [6U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [6U])))
                                   ? 0U : 2U));
    vlSelf->testcheckbytower__DOT__dut__DOT__status_col[7U] 
        = ((0U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                   [7U])) ? 1U : ((((1U & (vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                           [7U] >> 3U)) 
                                    != (IData)(testcheckbytower__DOT__dut__DOT__playing)) 
                                   & (4U == (7U & vlSelf->testcheckbytower__DOT__dut__DOT__wholecol
                                             [7U])))
                                   ? 0U : 2U));
    testcheckbytower__DOT__dut__DOT__lefttowerattack 
        = (((((IData)(testcheckbytower__DOT__dut__DOT__row) 
              - (IData)(1U)) < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
            & (0U == vlSelf->testcheckbytower__DOT__dut__DOT__status_col
               [(7U & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                       - (IData)(1U)))])) | (((1U == 
                                               vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                               [(7U 
                                                 & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                    - (IData)(1U)))]) 
                                              & ((((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                   - (IData)(2U)) 
                                                  < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
                                                 & (0U 
                                                    == 
                                                    vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                    [
                                                    (7U 
                                                     & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                        - (IData)(2U)))]))) 
                                             | (((1U 
                                                  == 
                                                  vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                  [
                                                  (7U 
                                                   & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                      - (IData)(2U)))]) 
                                                 & ((((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                      - (IData)(3U)) 
                                                     < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
                                                    & (0U 
                                                       == 
                                                       vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                       [
                                                       (7U 
                                                        & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                           - (IData)(3U)))]))) 
                                                | (((1U 
                                                     == 
                                                     vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                     [
                                                     (7U 
                                                      & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                         - (IData)(3U)))]) 
                                                    & ((((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                         - (IData)(4U)) 
                                                        < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
                                                       & (0U 
                                                          == 
                                                          vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                          [
                                                          (7U 
                                                           & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                              - (IData)(4U)))]))) 
                                                   | (((1U 
                                                        == 
                                                        vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                        [
                                                        (7U 
                                                         & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                            - (IData)(4U)))]) 
                                                       & ((((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                            - (IData)(5U)) 
                                                           < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
                                                          & (0U 
                                                             == 
                                                             vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                             [
                                                             (7U 
                                                              & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                                 - (IData)(5U)))]))) 
                                                      | (((1U 
                                                           == 
                                                           vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                           [
                                                           (7U 
                                                            & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                               - (IData)(5U)))]) 
                                                          & ((((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                               - (IData)(6U)) 
                                                              < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
                                                             & (0U 
                                                                == 
                                                                vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                                [
                                                                (7U 
                                                                 & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                                    - (IData)(6U)))]))) 
                                                         | ((1U 
                                                             == 
                                                             vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                             [
                                                             (7U 
                                                              & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                                 - (IData)(6U)))]) 
                                                            & ((((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                                 - (IData)(7U)) 
                                                                < (IData)(testcheckbytower__DOT__dut__DOT__row)) 
                                                               & (0U 
                                                                  == 
                                                                  vlSelf->testcheckbytower__DOT__dut__DOT__status_col
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(testcheckbytower__DOT__dut__DOT__row) 
                                                                      - (IData)(7U)))])))))))));
    vlSelf->testcheckbytower__DOT__attacked = testcheckbytower__DOT__dut__DOT__lefttowerattack;
    vlSelf->testcheckbytower__DOT__out_lefttowerattack 
        = testcheckbytower__DOT__dut__DOT__lefttowerattack;
    vlSelf->testcheckbytower__DOT__out_status_col[7U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [7U];
    vlSelf->testcheckbytower__DOT__out_status_col[6U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [6U];
    vlSelf->testcheckbytower__DOT__out_status_col[5U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [5U];
    vlSelf->testcheckbytower__DOT__out_status_col[4U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [4U];
    vlSelf->testcheckbytower__DOT__out_status_col[3U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [3U];
    vlSelf->testcheckbytower__DOT__out_status_col[2U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [2U];
    vlSelf->testcheckbytower__DOT__out_status_col[1U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [1U];
    vlSelf->testcheckbytower__DOT__out_status_col[0U] 
        = vlSelf->testcheckbytower__DOT__dut__DOT__status_col
        [0U];
}

void Vtestcheckbytower___024root___eval_act(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestcheckbytower___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestcheckbytower___024root___eval_nba(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcheckbytower___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestcheckbytower___024root___timing_resume(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestcheckbytower___024root___eval_triggers__act(Vtestcheckbytower___024root* vlSelf);

bool Vtestcheckbytower___024root___eval_phase__act(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestcheckbytower___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestcheckbytower___024root___timing_resume(vlSelf);
        Vtestcheckbytower___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestcheckbytower___024root___eval_phase__nba(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestcheckbytower___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckbytower___024root___dump_triggers__nba(Vtestcheckbytower___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckbytower___024root___dump_triggers__act(Vtestcheckbytower___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestcheckbytower___024root___eval(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestcheckbytower___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tests/testcheckbytower.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestcheckbytower___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tests/testcheckbytower.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestcheckbytower___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestcheckbytower___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestcheckbytower___024root___eval_debug_assertions(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
