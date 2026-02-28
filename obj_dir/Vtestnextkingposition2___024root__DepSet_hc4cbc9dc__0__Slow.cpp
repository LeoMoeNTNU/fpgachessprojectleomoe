// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestnextkingposition2.h for the primary calling header

#include "Vtestnextkingposition2__pch.h"
#include "Vtestnextkingposition2___024root.h"

VL_ATTR_COLD void Vtestnextkingposition2___024root___eval_static(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestnextkingposition2___024root___eval_final(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__stl(Vtestnextkingposition2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestnextkingposition2___024root___eval_phase__stl(Vtestnextkingposition2___024root* vlSelf);

VL_ATTR_COLD void Vtestnextkingposition2___024root___eval_settle(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_settle\n"); );
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
            Vtestnextkingposition2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tests/testnextkingpositions2.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestnextkingposition2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__stl(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestnextkingposition2___024root___stl_sequent__TOP__0(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ testnextkingposition2__DOT__dut__DOT__init_row;
    testnextkingposition2__DOT__dut__DOT__init_row = 0;
    CData/*2:0*/ testnextkingposition2__DOT__dut__DOT__init_col;
    testnextkingposition2__DOT__dut__DOT__init_col = 0;
    CData/*0:0*/ testnextkingposition2__DOT__dut__DOT__invalid;
    testnextkingposition2__DOT__dut__DOT__invalid = 0;
    CData/*2:0*/ __Vfunc_row__48__Vfuncout;
    __Vfunc_row__48__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_row__48__index;
    __Vfunc_row__48__index = 0;
    CData/*2:0*/ __Vfunc_col__49__Vfuncout;
    __Vfunc_col__49__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_col__49__index;
    __Vfunc_col__49__index = 0;
    // Body
    if (vlSelf->testnextkingposition2__DOT__active) {
        vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 1U;
        if (vlSelf->testnextkingposition2__DOT__active) {
            vlSelf->testnextkingposition2__DOT__dut__DOT__next_number 
                = (7U & ((IData)(1U) + (IData)(vlSelf->testnextkingposition2__DOT__number)));
            if ((7U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                vlSelf->testnextkingposition2__DOT__dut__DOT__next_number = 0U;
                vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 0U;
            }
            vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 0U;
            vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 0U;
            if (((((((((0U == (IData)(vlSelf->testnextkingposition2__DOT__number)) 
                       | (1U == (IData)(vlSelf->testnextkingposition2__DOT__number))) 
                      | (2U == (IData)(vlSelf->testnextkingposition2__DOT__number))) 
                     | (3U == (IData)(vlSelf->testnextkingposition2__DOT__number))) 
                    | (4U == (IData)(vlSelf->testnextkingposition2__DOT__number))) 
                   | (5U == (IData)(vlSelf->testnextkingposition2__DOT__number))) 
                  | (6U == (IData)(vlSelf->testnextkingposition2__DOT__number))) 
                 | (7U == (IData)(vlSelf->testnextkingposition2__DOT__number)))) {
                if ((0U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 1U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 0U;
                } else if ((1U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 1U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 1U;
                } else if ((2U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 0U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 1U;
                } else if ((3U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 7U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 1U;
                } else if ((4U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 7U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 0U;
                } else if ((5U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 7U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 7U;
                } else if ((6U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 0U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 7U;
                } else {
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 1U;
                    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 7U;
                }
            }
        }
    } else {
        vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 0U;
        if (vlSelf->testnextkingposition2__DOT__start) {
            vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 1U;
        }
        vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 0U;
        vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 0U;
    }
    vlSelf->testnextkingposition2__DOT__dut__DOT__next_stored_pos 
        = vlSelf->testnextkingposition2__DOT__dut__DOT__stored_pos;
    if ((1U & (~ (IData)(vlSelf->testnextkingposition2__DOT__active)))) {
        if (vlSelf->testnextkingposition2__DOT__start) {
            vlSelf->testnextkingposition2__DOT__dut__DOT__next_stored_pos 
                = vlSelf->testnextkingposition2__DOT__pos;
        }
    }
    __Vfunc_row__48__index = vlSelf->testnextkingposition2__DOT__dut__DOT__stored_pos;
    __Vfunc_row__48__Vfuncout = (7U & ((IData)(__Vfunc_row__48__index) 
                                       >> 3U));
    testnextkingposition2__DOT__dut__DOT__init_row 
        = __Vfunc_row__48__Vfuncout;
    __Vfunc_col__49__index = vlSelf->testnextkingposition2__DOT__dut__DOT__stored_pos;
    __Vfunc_col__49__Vfuncout = (7U & (IData)(__Vfunc_col__49__index));
    testnextkingposition2__DOT__dut__DOT__init_col 
        = __Vfunc_col__49__Vfuncout;
    vlSelf->testnextkingposition2__DOT__row = (7U & 
                                               ((IData)(testnextkingposition2__DOT__dut__DOT__init_row) 
                                                + (IData)(vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow)));
    vlSelf->testnextkingposition2__DOT__col = (7U & 
                                               ((IData)(testnextkingposition2__DOT__dut__DOT__init_col) 
                                                + (IData)(vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol)));
    testnextkingposition2__DOT__dut__DOT__invalid = 
        (((((0U == (IData)(testnextkingposition2__DOT__dut__DOT__init_row)) 
            & (7U == (IData)(vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow))) 
           | ((7U == (IData)(testnextkingposition2__DOT__dut__DOT__init_row)) 
              & (1U == (IData)(vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow)))) 
          | ((0U == (IData)(testnextkingposition2__DOT__dut__DOT__init_col)) 
             & (7U == (IData)(vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol)))) 
         | ((7U == (IData)(testnextkingposition2__DOT__dut__DOT__init_col)) 
            & (1U == (IData)(vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol))));
    vlSelf->testnextkingposition2__DOT__valid = (1U 
                                                 & (~ (IData)(testnextkingposition2__DOT__dut__DOT__invalid)));
}

VL_ATTR_COLD void Vtestnextkingposition2___024root___eval_stl(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestnextkingposition2___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtestnextkingposition2___024root___eval_triggers__stl(Vtestnextkingposition2___024root* vlSelf);

VL_ATTR_COLD bool Vtestnextkingposition2___024root___eval_phase__stl(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestnextkingposition2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestnextkingposition2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__act(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testnextkingposition2.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__nba(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testnextkingposition2.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestnextkingposition2___024root___ctor_var_reset(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testnextkingposition2__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition2__DOT__pos = VL_RAND_RESET_I(6);
    vlSelf->testnextkingposition2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition2__DOT__number = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition2__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition2__DOT__row = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition2__DOT__col = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition2__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition2__DOT__dut__DOT__next_number = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = VL_RAND_RESET_I(1);
    vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = VL_RAND_RESET_I(3);
    vlSelf->testnextkingposition2__DOT__dut__DOT__stored_pos = VL_RAND_RESET_I(6);
    vlSelf->testnextkingposition2__DOT__dut__DOT__next_stored_pos = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row = 0;
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col = 0;
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i = 0;
    vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i = 0;
    vlSelf->__Vfunc_row__38__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_row__38__index = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_col__39__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_col__39__index = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__a = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base = 0;
    vlSelf->__Vfunc_row__41__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_row__41__index = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__a = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base = 0;
    vlSelf->__Vfunc_row__43__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_row__43__index = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__a = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base = 0;
    vlSelf->__Vfunc_col__45__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_col__45__index = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__a = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base = 0;
    vlSelf->__Vfunc_col__47__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_col__47__index = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__testnextkingposition2__DOT__clk__0 = VL_RAND_RESET_I(1);
}
