// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcheckbytower.h for the primary calling header

#include "Vtestcheckbytower__pch.h"
#include "Vtestcheckbytower___024root.h"

VL_ATTR_COLD void Vtestcheckbytower___024root___eval_static(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestcheckbytower___024root___eval_final(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckbytower___024root___dump_triggers__stl(Vtestcheckbytower___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestcheckbytower___024root___eval_phase__stl(Vtestcheckbytower___024root* vlSelf);

VL_ATTR_COLD void Vtestcheckbytower___024root___eval_settle(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_settle\n"); );
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
            Vtestcheckbytower___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tests/testcheckbytower.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestcheckbytower___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckbytower___024root___dump_triggers__stl(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtestcheckbytower___024root___act_sequent__TOP__0(Vtestcheckbytower___024root* vlSelf);

VL_ATTR_COLD void Vtestcheckbytower___024root___eval_stl(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestcheckbytower___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtestcheckbytower___024root___eval_triggers__stl(Vtestcheckbytower___024root* vlSelf);

VL_ATTR_COLD bool Vtestcheckbytower___024root___eval_phase__stl(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestcheckbytower___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestcheckbytower___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckbytower___024root___dump_triggers__act(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckbytower___024root___dump_triggers__nba(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestcheckbytower___024root___ctor_var_reset(Vtestcheckbytower___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckbytower__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckbytower___024root___ctor_var_reset\n"); );
    // Body
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testcheckbytower__DOT__board[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->testcheckbytower__DOT__kingPosition = VL_RAND_RESET_I(6);
    vlSelf->testcheckbytower__DOT__attacked = VL_RAND_RESET_I(1);
    vlSelf->testcheckbytower__DOT__out_lefttowerattack = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->testcheckbytower__DOT__out_status_col[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->testcheckbytower__DOT__dut__DOT__wholecol[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->testcheckbytower__DOT__dut__DOT__status_col[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__Vfunc_fullcoord__8__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_fullcoord__8__col = VL_RAND_RESET_I(3);
    }
