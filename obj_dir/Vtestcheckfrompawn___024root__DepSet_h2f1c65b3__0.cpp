// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcheckfrompawn.h for the primary calling header

#include "Vtestcheckfrompawn__pch.h"
#include "Vtestcheckfrompawn___024root.h"

VlCoroutine Vtestcheckfrompawn___024root___eval_initial__TOP__Vtiming__0(Vtestcheckfrompawn___024root* vlSelf);

void Vtestcheckfrompawn___024root___eval_initial(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_initial\n"); );
    // Body
    Vtestcheckfrompawn___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtestcheckfrompawn___024root___eval_initial__TOP__Vtiming__0(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*2:0*/ testcheckfrompawn__DOT__unnamedblk2__DOT__row;
    testcheckfrompawn__DOT__unnamedblk2__DOT__row = 0;
    CData/*2:0*/ testcheckfrompawn__DOT__unnamedblk2__DOT__col;
    testcheckfrompawn__DOT__unnamedblk2__DOT__col = 0;
    CData/*5:0*/ testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition;
    testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition = 0;
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
    // Body
    VL_WRITEF("first easy test with empty board\n");
    vlSelf->testcheckfrompawn__DOT__board[0U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [0U]);
    vlSelf->testcheckfrompawn__DOT__board[0U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [0U]);
    vlSelf->testcheckfrompawn__DOT__board[1U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [1U]);
    vlSelf->testcheckfrompawn__DOT__board[1U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [1U]);
    vlSelf->testcheckfrompawn__DOT__board[2U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [2U]);
    vlSelf->testcheckfrompawn__DOT__board[2U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [2U]);
    vlSelf->testcheckfrompawn__DOT__board[3U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [3U]);
    vlSelf->testcheckfrompawn__DOT__board[3U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [3U]);
    vlSelf->testcheckfrompawn__DOT__board[4U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [4U]);
    vlSelf->testcheckfrompawn__DOT__board[4U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [4U]);
    vlSelf->testcheckfrompawn__DOT__board[5U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [5U]);
    vlSelf->testcheckfrompawn__DOT__board[5U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [5U]);
    vlSelf->testcheckfrompawn__DOT__board[6U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [6U]);
    vlSelf->testcheckfrompawn__DOT__board[6U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [6U]);
    vlSelf->testcheckfrompawn__DOT__board[7U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [7U]);
    vlSelf->testcheckfrompawn__DOT__board[7U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [7U]);
    vlSelf->testcheckfrompawn__DOT__board[8U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [8U]);
    vlSelf->testcheckfrompawn__DOT__board[8U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [8U]);
    vlSelf->testcheckfrompawn__DOT__board[9U] = (8U 
                                                 & vlSelf->testcheckfrompawn__DOT__board
                                                 [9U]);
    vlSelf->testcheckfrompawn__DOT__board[9U] = (8U 
                                                 | vlSelf->testcheckfrompawn__DOT__board
                                                 [9U]);
    vlSelf->testcheckfrompawn__DOT__board[0xaU] = (8U 
                                                   & vlSelf->testcheckfrompawn__DOT__board
                                                   [0xaU]);
    vlSelf->testcheckfrompawn__DOT__board[0xaU] = (8U 
                                                   | vlSelf->testcheckfrompawn__DOT__board
                                                   [0xaU]);
    vlSelf->testcheckfrompawn__DOT__board[0xbU] = (8U 
                                                   & vlSelf->testcheckfrompawn__DOT__board
                                                   [0xbU]);
    vlSelf->testcheckfrompawn__DOT__board[0xbU] = (8U 
                                                   | vlSelf->testcheckfrompawn__DOT__board
                                                   [0xbU]);
    vlSelf->testcheckfrompawn__DOT__board[0xcU] = (8U 
                                                   & vlSelf->testcheckfrompawn__DOT__board
                                                   [0xcU]);
    vlSelf->testcheckfrompawn__DOT__board[0xcU] = (8U 
                                                   | vlSelf->testcheckfrompawn__DOT__board
                                                   [0xcU]);
    vlSelf->testcheckfrompawn__DOT__board[0xdU] = (8U 
                                                   & vlSelf->testcheckfrompawn__DOT__board
                                                   [0xdU]);
    vlSelf->testcheckfrompawn__DOT__board[0xdU] = (8U 
                                                   | vlSelf->testcheckfrompawn__DOT__board
                                                   [0xdU]);
    vlSelf->testcheckfrompawn__DOT__board[0xeU] = (8U 
                                                   & vlSelf->testcheckfrompawn__DOT__board
                                                   [0xeU]);
    vlSelf->testcheckfrompawn__DOT__board[0xeU] = (8U 
                                                   | vlSelf->testcheckfrompawn__DOT__board
                                                   [0xeU]);
    vlSelf->testcheckfrompawn__DOT__board[0xfU] = (8U 
                                                   & vlSelf->testcheckfrompawn__DOT__board
                                                   [0xfU]);
    vlSelf->testcheckfrompawn__DOT__board[0xfU] = (8U 
                                                   | vlSelf->testcheckfrompawn__DOT__board
                                                   [0xfU]);
    vlSelf->testcheckfrompawn__DOT__board[0x10U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x10U]);
    vlSelf->testcheckfrompawn__DOT__board[0x10U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x10U]);
    vlSelf->testcheckfrompawn__DOT__board[0x11U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x11U]);
    vlSelf->testcheckfrompawn__DOT__board[0x11U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x11U]);
    vlSelf->testcheckfrompawn__DOT__board[0x12U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x12U]);
    vlSelf->testcheckfrompawn__DOT__board[0x12U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x12U]);
    vlSelf->testcheckfrompawn__DOT__board[0x13U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x13U]);
    vlSelf->testcheckfrompawn__DOT__board[0x13U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x13U]);
    vlSelf->testcheckfrompawn__DOT__board[0x14U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x14U]);
    vlSelf->testcheckfrompawn__DOT__board[0x14U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x14U]);
    vlSelf->testcheckfrompawn__DOT__board[0x15U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x15U]);
    vlSelf->testcheckfrompawn__DOT__board[0x15U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x15U]);
    vlSelf->testcheckfrompawn__DOT__board[0x16U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x16U]);
    vlSelf->testcheckfrompawn__DOT__board[0x16U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x16U]);
    vlSelf->testcheckfrompawn__DOT__board[0x17U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x17U]);
    vlSelf->testcheckfrompawn__DOT__board[0x17U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x17U]);
    vlSelf->testcheckfrompawn__DOT__board[0x18U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x18U]);
    vlSelf->testcheckfrompawn__DOT__board[0x18U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x18U]);
    vlSelf->testcheckfrompawn__DOT__board[0x19U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x19U]);
    vlSelf->testcheckfrompawn__DOT__board[0x19U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x19U]);
    vlSelf->testcheckfrompawn__DOT__board[0x1aU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x1aU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1aU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x1aU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1bU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x1bU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1bU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x1bU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1cU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x1cU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1cU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x1cU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1dU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x1dU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1dU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x1dU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1eU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x1eU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1eU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x1eU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1fU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x1fU]);
    vlSelf->testcheckfrompawn__DOT__board[0x1fU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x1fU]);
    vlSelf->testcheckfrompawn__DOT__board[0x20U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x20U]);
    vlSelf->testcheckfrompawn__DOT__board[0x20U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x20U]);
    vlSelf->testcheckfrompawn__DOT__board[0x21U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x21U]);
    vlSelf->testcheckfrompawn__DOT__board[0x21U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x21U]);
    vlSelf->testcheckfrompawn__DOT__board[0x22U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x22U]);
    vlSelf->testcheckfrompawn__DOT__board[0x22U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x22U]);
    vlSelf->testcheckfrompawn__DOT__board[0x23U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x23U]);
    vlSelf->testcheckfrompawn__DOT__board[0x23U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x23U]);
    vlSelf->testcheckfrompawn__DOT__board[0x24U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x24U]);
    vlSelf->testcheckfrompawn__DOT__board[0x24U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x24U]);
    vlSelf->testcheckfrompawn__DOT__board[0x25U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x25U]);
    vlSelf->testcheckfrompawn__DOT__board[0x25U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x25U]);
    vlSelf->testcheckfrompawn__DOT__board[0x26U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x26U]);
    vlSelf->testcheckfrompawn__DOT__board[0x26U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x26U]);
    vlSelf->testcheckfrompawn__DOT__board[0x27U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x27U]);
    vlSelf->testcheckfrompawn__DOT__board[0x27U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x27U]);
    vlSelf->testcheckfrompawn__DOT__board[0x28U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x28U]);
    vlSelf->testcheckfrompawn__DOT__board[0x28U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x28U]);
    vlSelf->testcheckfrompawn__DOT__board[0x29U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x29U]);
    vlSelf->testcheckfrompawn__DOT__board[0x29U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x29U]);
    vlSelf->testcheckfrompawn__DOT__board[0x2aU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x2aU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2aU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x2aU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2bU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x2bU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2bU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x2bU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2cU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x2cU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2cU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x2cU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2dU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x2dU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2dU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x2dU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2eU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x2eU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2eU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x2eU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2fU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x2fU]);
    vlSelf->testcheckfrompawn__DOT__board[0x2fU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x2fU]);
    vlSelf->testcheckfrompawn__DOT__board[0x30U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x30U]);
    vlSelf->testcheckfrompawn__DOT__board[0x30U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x30U]);
    vlSelf->testcheckfrompawn__DOT__board[0x31U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x31U]);
    vlSelf->testcheckfrompawn__DOT__board[0x31U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x31U]);
    vlSelf->testcheckfrompawn__DOT__board[0x32U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x32U]);
    vlSelf->testcheckfrompawn__DOT__board[0x32U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x32U]);
    vlSelf->testcheckfrompawn__DOT__board[0x33U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x33U]);
    vlSelf->testcheckfrompawn__DOT__board[0x33U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x33U]);
    vlSelf->testcheckfrompawn__DOT__board[0x34U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x34U]);
    vlSelf->testcheckfrompawn__DOT__board[0x34U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x34U]);
    vlSelf->testcheckfrompawn__DOT__board[0x35U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x35U]);
    vlSelf->testcheckfrompawn__DOT__board[0x35U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x35U]);
    vlSelf->testcheckfrompawn__DOT__board[0x36U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x36U]);
    vlSelf->testcheckfrompawn__DOT__board[0x36U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x36U]);
    vlSelf->testcheckfrompawn__DOT__board[0x37U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x37U]);
    vlSelf->testcheckfrompawn__DOT__board[0x37U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x37U]);
    vlSelf->testcheckfrompawn__DOT__board[0x38U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x38U]);
    vlSelf->testcheckfrompawn__DOT__board[0x38U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x38U]);
    vlSelf->testcheckfrompawn__DOT__board[0x39U] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x39U]);
    vlSelf->testcheckfrompawn__DOT__board[0x39U] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x39U]);
    vlSelf->testcheckfrompawn__DOT__board[0x3aU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x3aU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3aU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x3aU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3bU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x3bU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3bU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x3bU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3cU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x3cU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3cU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x3cU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3dU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x3dU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3dU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x3dU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3eU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x3eU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3eU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x3eU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3fU] = 
        (8U & vlSelf->testcheckfrompawn__DOT__board
         [0x3fU]);
    vlSelf->testcheckfrompawn__DOT__board[0x3fU] = 
        (8U | vlSelf->testcheckfrompawn__DOT__board
         [0x3fU]);
    vlSelf->testcheckfrompawn__DOT__kingPosition = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testcheckfrompawn.sv", 
                                       59);
    if (VL_UNLIKELY(vlSelf->testcheckfrompawn__DOT__attacked)) {
        VL_WRITEF("for some reason we are attacked on an empty board\n");
    }
    if (VL_UNLIKELY(vlSelf->testcheckfrompawn__DOT__valid)) {
        VL_WRITEF("for some reason it thinks there is a king at 0\n");
    }
    testcheckfrompawn__DOT__unnamedblk2__DOT__row = 2U;
    testcheckfrompawn__DOT__unnamedblk2__DOT__col = 4U;
    VL_ASSIGNSEL_II(4,3,0U, vlSelf->testcheckfrompawn__DOT__board
                    [([&]() {
                __Vfunc_fullcoord__1__col = testcheckfrompawn__DOT__unnamedblk2__DOT__col;
                __Vfunc_fullcoord__1__row = testcheckfrompawn__DOT__unnamedblk2__DOT__row;
                __Vfunc_fullcoord__1__Vfuncout = (((IData)(__Vfunc_fullcoord__1__row) 
                                                   << 3U) 
                                                  | (IData)(__Vfunc_fullcoord__1__col));
            }(), (IData)(__Vfunc_fullcoord__1__Vfuncout))], 6U);
    __Vfunc_fullcoord__2__col = testcheckfrompawn__DOT__unnamedblk2__DOT__col;
    __Vfunc_fullcoord__2__row = testcheckfrompawn__DOT__unnamedblk2__DOT__row;
    __Vfunc_fullcoord__2__Vfuncout = (((IData)(__Vfunc_fullcoord__2__row) 
                                       << 3U) | (IData)(__Vfunc_fullcoord__2__col));
    vlSelf->testcheckfrompawn__DOT__kingPosition = __Vfunc_fullcoord__2__Vfuncout;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tests/testcheckfrompawn.sv", 
                                       74);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testcheckfrompawn__DOT__valid))))) {
        VL_WRITEF("for some reason valid is %0# instead of true even though kingPosition has been inserted!\n",
                  1,vlSelf->testcheckfrompawn__DOT__valid);
    }
    if (VL_UNLIKELY(vlSelf->testcheckfrompawn__DOT__out_attackedfromleft)) {
        VL_WRITEF("attacked from left shouldnt happen because there are no pawns. \n");
    }
    if (VL_UNLIKELY(vlSelf->testcheckfrompawn__DOT__out_attackedfromright)) {
        VL_WRITEF("attacked from right also shouldnt happen\n");
    }
    __Vfunc_fullcoord__3__col = (7U & ((IData)(1U) 
                                       + (IData)(testcheckfrompawn__DOT__unnamedblk2__DOT__col)));
    __Vfunc_fullcoord__3__row = (7U & ((IData)(1U) 
                                       + (IData)(testcheckfrompawn__DOT__unnamedblk2__DOT__row)));
    __Vfunc_fullcoord__3__Vfuncout = (((IData)(__Vfunc_fullcoord__3__row) 
                                       << 3U) | (IData)(__Vfunc_fullcoord__3__col));
    testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition 
        = __Vfunc_fullcoord__3__Vfuncout;
    VL_ASSIGNBIT_IO(3U, vlSelf->testcheckfrompawn__DOT__board
                    [([&]() {
                __Vfunc_fullcoord__4__col = testcheckfrompawn__DOT__unnamedblk2__DOT__col;
                __Vfunc_fullcoord__4__row = testcheckfrompawn__DOT__unnamedblk2__DOT__row;
                __Vfunc_fullcoord__4__Vfuncout = (((IData)(__Vfunc_fullcoord__4__row) 
                                                   << 3U) 
                                                  | (IData)(__Vfunc_fullcoord__4__col));
            }(), (IData)(__Vfunc_fullcoord__4__Vfuncout))]);
    vlSelf->testcheckfrompawn__DOT__board[testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition] 
        = (7U & vlSelf->testcheckfrompawn__DOT__board
           [testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition]);
    vlSelf->testcheckfrompawn__DOT__board[testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition] 
        = (1U | (8U & vlSelf->testcheckfrompawn__DOT__board
                 [testcheckfrompawn__DOT__unnamedblk2__DOT__attackingposposition]));
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testcheckfrompawn.sv", 
                                       92);
    if (VL_UNLIKELY((((IData)(vlSelf->testcheckfrompawn__DOT__out_row) 
                      != (IData)(testcheckfrompawn__DOT__unnamedblk2__DOT__row)) 
                     | ((IData)(vlSelf->testcheckfrompawn__DOT__out_col) 
                        != (IData)(testcheckfrompawn__DOT__unnamedblk2__DOT__col))))) {
        VL_WRITEF("we tried inputting (%0#,%0#) but the component thinks we are on (%0#, %0#)\n",
                  3,testcheckfrompawn__DOT__unnamedblk2__DOT__row,
                  3,(IData)(testcheckfrompawn__DOT__unnamedblk2__DOT__col),
                  3,vlSelf->testcheckfrompawn__DOT__out_row,
                  3,(IData)(vlSelf->testcheckfrompawn__DOT__out_col));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testcheckfrompawn__DOT__valid))))) {
        VL_WRITEF("it should be valid because there is a king there!\n");
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testcheckfrompawn__DOT__attacked))))) {
        VL_WRITEF("the king is not attacked even if it should be!\n");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testcheckfrompawn__DOT__out_attackedfromright))))) {
            VL_WRITEF("it should be attacked from the right\n");
        }
        if (VL_UNLIKELY(vlSelf->testcheckfrompawn__DOT__out_attackedfromleft)) {
            VL_WRITEF("idk why it is attacked from the left\n");
        }
    }
    VL_FINISH_MT("tests/testcheckfrompawn.sv", 111, "");
}

VL_INLINE_OPT void Vtestcheckfrompawn___024root___act_sequent__TOP__0(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ testcheckfrompawn__DOT__dut__DOT__row;
    testcheckfrompawn__DOT__dut__DOT__row = 0;
    CData/*2:0*/ testcheckfrompawn__DOT__dut__DOT__col;
    testcheckfrompawn__DOT__dut__DOT__col = 0;
    CData/*0:0*/ testcheckfrompawn__DOT__dut__DOT__playing;
    testcheckfrompawn__DOT__dut__DOT__playing = 0;
    CData/*0:0*/ testcheckfrompawn__DOT__dut__DOT__leftattackvalid;
    testcheckfrompawn__DOT__dut__DOT__leftattackvalid = 0;
    CData/*0:0*/ testcheckfrompawn__DOT__dut__DOT__rightattackvalid;
    testcheckfrompawn__DOT__dut__DOT__rightattackvalid = 0;
    CData/*2:0*/ testcheckfrompawn__DOT__dut__DOT__coltoattackfrom;
    testcheckfrompawn__DOT__dut__DOT__coltoattackfrom = 0;
    CData/*5:0*/ testcheckfrompawn__DOT__dut__DOT__leftpawnattack;
    testcheckfrompawn__DOT__dut__DOT__leftpawnattack = 0;
    CData/*5:0*/ testcheckfrompawn__DOT__dut__DOT__rightpawnattack;
    testcheckfrompawn__DOT__dut__DOT__rightpawnattack = 0;
    CData/*0:0*/ testcheckfrompawn__DOT__dut__DOT__attackedfromleft;
    testcheckfrompawn__DOT__dut__DOT__attackedfromleft = 0;
    CData/*0:0*/ testcheckfrompawn__DOT__dut__DOT__attackedfromright;
    testcheckfrompawn__DOT__dut__DOT__attackedfromright = 0;
    CData/*2:0*/ __Vfunc_row__5__Vfuncout;
    __Vfunc_row__5__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_row__5__index;
    __Vfunc_row__5__index = 0;
    CData/*2:0*/ __Vfunc_col__6__Vfuncout;
    __Vfunc_col__6__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_col__6__index;
    __Vfunc_col__6__index = 0;
    CData/*5:0*/ __Vfunc_fullcoord__7__Vfuncout;
    __Vfunc_fullcoord__7__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__7__row;
    __Vfunc_fullcoord__7__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__7__col;
    __Vfunc_fullcoord__7__col = 0;
    CData/*5:0*/ __Vfunc_fullcoord__8__Vfuncout;
    __Vfunc_fullcoord__8__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_fullcoord__8__row;
    __Vfunc_fullcoord__8__row = 0;
    CData/*2:0*/ __Vfunc_fullcoord__8__col;
    __Vfunc_fullcoord__8__col = 0;
    // Body
    vlSelf->testcheckfrompawn__DOT__valid = (6U == 
                                             (7U & 
                                              vlSelf->testcheckfrompawn__DOT__board
                                              [vlSelf->testcheckfrompawn__DOT__kingPosition]));
    __Vfunc_row__5__index = vlSelf->testcheckfrompawn__DOT__kingPosition;
    __Vfunc_row__5__Vfuncout = (7U & ((IData)(__Vfunc_row__5__index) 
                                      >> 3U));
    testcheckfrompawn__DOT__dut__DOT__row = __Vfunc_row__5__Vfuncout;
    __Vfunc_col__6__index = vlSelf->testcheckfrompawn__DOT__kingPosition;
    __Vfunc_col__6__Vfuncout = (7U & (IData)(__Vfunc_col__6__index));
    testcheckfrompawn__DOT__dut__DOT__col = __Vfunc_col__6__Vfuncout;
    testcheckfrompawn__DOT__dut__DOT__playing = (1U 
                                                 & (vlSelf->testcheckfrompawn__DOT__board
                                                    [vlSelf->testcheckfrompawn__DOT__kingPosition] 
                                                    >> 3U));
    testcheckfrompawn__DOT__dut__DOT__leftattackvalid = 1U;
    testcheckfrompawn__DOT__dut__DOT__rightattackvalid = 1U;
    testcheckfrompawn__DOT__dut__DOT__coltoattackfrom 
        = (7U & ((IData)(testcheckfrompawn__DOT__dut__DOT__playing)
                  ? ((IData)(1U) + (IData)(testcheckfrompawn__DOT__dut__DOT__col))
                  : ((IData)(7U) + (IData)(testcheckfrompawn__DOT__dut__DOT__col))));
    if ((0U == (IData)(testcheckfrompawn__DOT__dut__DOT__row))) {
        testcheckfrompawn__DOT__dut__DOT__leftattackvalid = 0U;
    }
    if ((7U == (IData)(testcheckfrompawn__DOT__dut__DOT__row))) {
        testcheckfrompawn__DOT__dut__DOT__rightattackvalid = 0U;
    }
    __Vfunc_fullcoord__7__col = testcheckfrompawn__DOT__dut__DOT__coltoattackfrom;
    __Vfunc_fullcoord__7__row = (7U & ((IData)(testcheckfrompawn__DOT__dut__DOT__row) 
                                       - (IData)(1U)));
    __Vfunc_fullcoord__7__Vfuncout = (((IData)(__Vfunc_fullcoord__7__row) 
                                       << 3U) | (IData)(__Vfunc_fullcoord__7__col));
    testcheckfrompawn__DOT__dut__DOT__leftpawnattack 
        = __Vfunc_fullcoord__7__Vfuncout;
    __Vfunc_fullcoord__8__col = testcheckfrompawn__DOT__dut__DOT__coltoattackfrom;
    __Vfunc_fullcoord__8__row = (7U & ((IData)(1U) 
                                       + (IData)(testcheckfrompawn__DOT__dut__DOT__row)));
    __Vfunc_fullcoord__8__Vfuncout = (((IData)(__Vfunc_fullcoord__8__row) 
                                       << 3U) | (IData)(__Vfunc_fullcoord__8__col));
    testcheckfrompawn__DOT__dut__DOT__rightpawnattack 
        = __Vfunc_fullcoord__8__Vfuncout;
    testcheckfrompawn__DOT__dut__DOT__attackedfromleft 
        = ((((1U & (vlSelf->testcheckfrompawn__DOT__board
                    [testcheckfrompawn__DOT__dut__DOT__leftpawnattack] 
                    >> 3U)) != (IData)(testcheckfrompawn__DOT__dut__DOT__playing)) 
            & (1U == (7U & vlSelf->testcheckfrompawn__DOT__board
                      [testcheckfrompawn__DOT__dut__DOT__leftpawnattack]))) 
           & (IData)(testcheckfrompawn__DOT__dut__DOT__leftattackvalid));
    testcheckfrompawn__DOT__dut__DOT__attackedfromright 
        = ((((1U & (vlSelf->testcheckfrompawn__DOT__board
                    [testcheckfrompawn__DOT__dut__DOT__rightpawnattack] 
                    >> 3U)) != (IData)(testcheckfrompawn__DOT__dut__DOT__playing)) 
            & (1U == (7U & vlSelf->testcheckfrompawn__DOT__board
                      [testcheckfrompawn__DOT__dut__DOT__rightpawnattack]))) 
           & (IData)(testcheckfrompawn__DOT__dut__DOT__rightattackvalid));
    vlSelf->testcheckfrompawn__DOT__attacked = ((IData)(testcheckfrompawn__DOT__dut__DOT__attackedfromleft) 
                                                | (IData)(testcheckfrompawn__DOT__dut__DOT__attackedfromright));
    vlSelf->testcheckfrompawn__DOT__out_attackedfromright 
        = testcheckfrompawn__DOT__dut__DOT__attackedfromright;
    vlSelf->testcheckfrompawn__DOT__out_attackedfromleft 
        = testcheckfrompawn__DOT__dut__DOT__attackedfromleft;
    vlSelf->testcheckfrompawn__DOT__out_row = testcheckfrompawn__DOT__dut__DOT__row;
    vlSelf->testcheckfrompawn__DOT__out_col = testcheckfrompawn__DOT__dut__DOT__col;
}

void Vtestcheckfrompawn___024root___eval_act(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestcheckfrompawn___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestcheckfrompawn___024root___eval_nba(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcheckfrompawn___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestcheckfrompawn___024root___timing_resume(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestcheckfrompawn___024root___eval_triggers__act(Vtestcheckfrompawn___024root* vlSelf);

bool Vtestcheckfrompawn___024root___eval_phase__act(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestcheckfrompawn___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestcheckfrompawn___024root___timing_resume(vlSelf);
        Vtestcheckfrompawn___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestcheckfrompawn___024root___eval_phase__nba(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestcheckfrompawn___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckfrompawn___024root___dump_triggers__nba(Vtestcheckfrompawn___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckfrompawn___024root___dump_triggers__act(Vtestcheckfrompawn___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestcheckfrompawn___024root___eval(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestcheckfrompawn___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tests/testcheckfrompawn.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestcheckfrompawn___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tests/testcheckfrompawn.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestcheckfrompawn___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestcheckfrompawn___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestcheckfrompawn___024root___eval_debug_assertions(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
