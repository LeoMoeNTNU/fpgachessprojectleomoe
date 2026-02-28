// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestnextkingposition.h for the primary calling header

#include "Vtestnextkingposition__pch.h"
#include "Vtestnextkingposition___024root.h"

VL_ATTR_COLD void Vtestnextkingposition___024root___eval_static(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestnextkingposition___024root___eval_final(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition___024root___dump_triggers__stl(Vtestnextkingposition___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestnextkingposition___024root___eval_phase__stl(Vtestnextkingposition___024root* vlSelf);

VL_ATTR_COLD void Vtestnextkingposition___024root___eval_settle(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_settle\n"); );
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
            Vtestnextkingposition___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tests/testnextkingposition.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestnextkingposition___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition___024root___dump_triggers__stl(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtestnextkingposition___024root___act_sequent__TOP__0(Vtestnextkingposition___024root* vlSelf);

VL_ATTR_COLD void Vtestnextkingposition___024root___eval_stl(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestnextkingposition___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtestnextkingposition___024root___eval_triggers__stl(Vtestnextkingposition___024root* vlSelf);

VL_ATTR_COLD bool Vtestnextkingposition___024root___eval_phase__stl(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestnextkingposition___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestnextkingposition___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition___024root___dump_triggers__act(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testnextkingposition.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition___024root___dump_triggers__nba(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testnextkingposition.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestnextkingposition___024root___ctor_var_reset(Vtestnextkingposition___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testnextkingposition__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition__DOT__out_state = VL_RAND_RESET_I(2);
    vlSelf->testnextkingposition__DOT__out_counter = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->testnextkingposition__DOT__dut__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->testnextkingposition__DOT__dut__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition__DOT__dut__DOT__next_counter = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__testnextkingposition__DOT__clk__0 = VL_RAND_RESET_I(1);
}
