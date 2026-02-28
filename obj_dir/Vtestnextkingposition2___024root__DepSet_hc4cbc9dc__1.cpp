// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestnextkingposition2.h for the primary calling header

#include "Vtestnextkingposition2__pch.h"
#include "Vtestnextkingposition2___024root.h"

VlCoroutine Vtestnextkingposition2___024root___eval_initial__TOP__Vtiming__0__1(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->testnextkingposition2__DOT__valid) 
                     != ([&]() {
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number 
                            = vlSelf->testnextkingposition2__DOT__number;
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in 
                            = vlSelf->testnextkingposition2__DOT__pos;
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                            = VL_EXTEND_II(32,3, ([&]() {
                                    vlSelf->__Vfunc_row__38__index 
                                        = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in;
                                    vlSelf->__Vfunc_row__38__Vfuncout 
                                        = (7U & ((IData)(vlSelf->__Vfunc_row__38__index) 
                                                 >> 3U));
                                }(), (IData)(vlSelf->__Vfunc_row__38__Vfuncout)));
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                            = VL_EXTEND_II(32,3, ([&]() {
                                    vlSelf->__Vfunc_col__39__index 
                                        = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in;
                                    vlSelf->__Vfunc_col__39__Vfuncout 
                                        = (7U & (IData)(vlSelf->__Vfunc_col__39__index));
                                }(), (IData)(vlSelf->__Vfunc_col__39__Vfuncout)));
                        if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                                  | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                                 | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                                | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                               | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                              | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                             | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number)))) {
                            if ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row);
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row);
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col);
                            } else if ((2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row;
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col);
                            } else if ((3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                                       - (IData)(1U));
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col);
                            } else if ((4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                                       - (IData)(1U));
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col;
                            } else if ((5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                                       - (IData)(1U));
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                                       - (IData)(1U));
                            } else if ((6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row;
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                                       - (IData)(1U));
                            } else {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row);
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                                       - (IData)(1U));
                            }
                        }
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__Vfuncout 
                            = (((VL_LTES_III(32, 0U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i) 
                                 & VL_GTES_III(32, 7U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i)) 
                                & VL_LTES_III(32, 0U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i)) 
                               & VL_GTES_III(32, 7U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i));
                    }(), (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__Vfuncout))))) {
        VL_WRITEF("valid is false, which it shouldn't be!\n");
    }
    if (vlSelf->testnextkingposition2__DOT__valid) {
        if (VL_UNLIKELY(((IData)(vlSelf->testnextkingposition2__DOT__row) 
                         != ([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_row__41__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__a;
                                        vlSelf->__Vfunc_row__41__Vfuncout 
                                            = (7U & 
                                               ((IData)(vlSelf->__Vfunc_row__41__index) 
                                                >> 3U));
                                    }(), (IData)(vlSelf->__Vfunc_row__41__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                        ? ((IData)(1U) 
                                           + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base)
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                    ? 
                                                   (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                                    - (IData)(1U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                     ? 
                                                    (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                                     - (IData)(1U))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                       ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__Vfuncout)))) {
            VL_WRITEF("row coming out is %0d and not %0d\n",
                      32,vlSelf->testnextkingposition2__DOT__row,
                      32,([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_row__43__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__a;
                                        vlSelf->__Vfunc_row__43__Vfuncout 
                                            = (7U & 
                                               ((IData)(vlSelf->__Vfunc_row__43__index) 
                                                >> 3U));
                                    }(), (IData)(vlSelf->__Vfunc_row__43__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                        ? ((IData)(1U) 
                                           + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base)
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                    ? 
                                                   (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                                    - (IData)(1U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                     ? 
                                                    (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                                     - (IData)(1U))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                       ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__Vfuncout));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->testnextkingposition2__DOT__col) 
                         != ([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_col__45__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__a;
                                        vlSelf->__Vfunc_col__45__Vfuncout 
                                            = (7U & (IData)(vlSelf->__Vfunc_col__45__index));
                                    }(), (IData)(vlSelf->__Vfunc_col__45__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                        ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                ? ((IData)(1U) 
                                                   + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                     ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                       ? 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                                       - (IData)(1U))
                                                       : 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                                       - (IData)(1U)))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__Vfuncout)))) {
            VL_WRITEF("col coming out is %0d and not %0d\n",
                      32,vlSelf->testnextkingposition2__DOT__col,
                      32,([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_col__47__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__a;
                                        vlSelf->__Vfunc_col__47__Vfuncout 
                                            = (7U & (IData)(vlSelf->__Vfunc_col__47__index));
                                    }(), (IData)(vlSelf->__Vfunc_col__47__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                        ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                ? ((IData)(1U) 
                                                   + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                     ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                       ? 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                                       - (IData)(1U))
                                                       : 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                                       - (IData)(1U)))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__Vfuncout));
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tests/testnextkingpositions2.sv", 
                                       171);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testnextkingposition2__DOT__active))))) {
        VL_WRITEF("should be active!\n");
    }
    if (VL_UNLIKELY((7U != (IData)(vlSelf->testnextkingposition2__DOT__number)))) {
        VL_WRITEF("counter: %0# \n",3,vlSelf->testnextkingposition2__DOT__number);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->testnextkingposition2__DOT__valid) 
                     != ([&]() {
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number 
                            = vlSelf->testnextkingposition2__DOT__number;
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in 
                            = vlSelf->testnextkingposition2__DOT__pos;
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                            = VL_EXTEND_II(32,3, ([&]() {
                                    vlSelf->__Vfunc_row__38__index 
                                        = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in;
                                    vlSelf->__Vfunc_row__38__Vfuncout 
                                        = (7U & ((IData)(vlSelf->__Vfunc_row__38__index) 
                                                 >> 3U));
                                }(), (IData)(vlSelf->__Vfunc_row__38__Vfuncout)));
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                            = VL_EXTEND_II(32,3, ([&]() {
                                    vlSelf->__Vfunc_col__39__index 
                                        = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in;
                                    vlSelf->__Vfunc_col__39__Vfuncout 
                                        = (7U & (IData)(vlSelf->__Vfunc_col__39__index));
                                }(), (IData)(vlSelf->__Vfunc_col__39__Vfuncout)));
                        if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                                  | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                                 | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                                | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                               | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                              | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) 
                             | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number)))) {
                            if ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row);
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row);
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col);
                            } else if ((2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row;
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col);
                            } else if ((3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                                       - (IData)(1U));
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col);
                            } else if ((4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                                       - (IData)(1U));
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col;
                            } else if ((5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row 
                                       - (IData)(1U));
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                                       - (IData)(1U));
                            } else if ((6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row;
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                                       - (IData)(1U));
                            } else {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i 
                                    = ((IData)(1U) 
                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row);
                                vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i 
                                    = (vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col 
                                       - (IData)(1U));
                            }
                        }
                        vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__Vfuncout 
                            = (((VL_LTES_III(32, 0U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i) 
                                 & VL_GTES_III(32, 7U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i)) 
                                & VL_LTES_III(32, 0U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i)) 
                               & VL_GTES_III(32, 7U, vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i));
                    }(), (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__shouldbevalid__37__Vfuncout))))) {
        VL_WRITEF("valid is false, which it shouldn't be!\n");
    }
    if (vlSelf->testnextkingposition2__DOT__valid) {
        if (VL_UNLIKELY(((IData)(vlSelf->testnextkingposition2__DOT__row) 
                         != ([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_row__41__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__a;
                                        vlSelf->__Vfunc_row__41__Vfuncout 
                                            = (7U & 
                                               ((IData)(vlSelf->__Vfunc_row__41__index) 
                                                >> 3U));
                                    }(), (IData)(vlSelf->__Vfunc_row__41__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                        ? ((IData)(1U) 
                                           + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base)
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                    ? 
                                                   (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                                    - (IData)(1U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                     ? 
                                                    (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                                     - (IData)(1U))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number))
                                                       ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__40__Vfuncout)))) {
            VL_WRITEF("row coming out is %0d and not %0d\n",
                      32,vlSelf->testnextkingposition2__DOT__row,
                      32,([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_row__43__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__a;
                                        vlSelf->__Vfunc_row__43__Vfuncout 
                                            = (7U & 
                                               ((IData)(vlSelf->__Vfunc_row__43__index) 
                                                >> 3U));
                                    }(), (IData)(vlSelf->__Vfunc_row__43__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                        ? ((IData)(1U) 
                                           + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base)
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                    ? 
                                                   (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                                    - (IData)(1U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                     ? 
                                                    (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                                     - (IData)(1U))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number))
                                                       ? vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__rowfromnumber__42__Vfuncout));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->testnextkingposition2__DOT__col) 
                         != ([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_col__45__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__a;
                                        vlSelf->__Vfunc_col__45__Vfuncout 
                                            = (7U & (IData)(vlSelf->__Vfunc_col__45__index));
                                    }(), (IData)(vlSelf->__Vfunc_col__45__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                        ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                ? ((IData)(1U) 
                                                   + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                     ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__number))
                                                       ? 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                                       - (IData)(1U))
                                                       : 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base 
                                                       - (IData)(1U)))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__44__Vfuncout)))) {
            VL_WRITEF("col coming out is %0d and not %0d\n",
                      32,vlSelf->testnextkingposition2__DOT__col,
                      32,([&]() {
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number 
                                = vlSelf->testnextkingposition2__DOT__number;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__a 
                                = vlSelf->testnextkingposition2__DOT__pos;
                            vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                = VL_EXTEND_II(32,3, 
                                               ([&]() {
                                        vlSelf->__Vfunc_col__47__index 
                                            = vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__a;
                                        vlSelf->__Vfunc_col__47__Vfuncout 
                                            = (7U & (IData)(vlSelf->__Vfunc_col__47__index));
                                    }(), (IData)(vlSelf->__Vfunc_col__47__Vfuncout)));
                            if (((((((((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number)) 
                                       | (1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                      | (2U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                     | (3U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                    | (4U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                   | (5U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                  | (6U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))) 
                                 | (7U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number)))) {
                                vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__Vfuncout 
                                    = ((0U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                        ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base
                                        : ((1U == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                            ? ((IData)(1U) 
                                               + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base)
                                            : ((2U 
                                                == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                ? ((IData)(1U) 
                                                   + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                     ? vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                      ? 
                                                     (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                                      - (IData)(1U))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__number))
                                                       ? 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                                       - (IData)(1U))
                                                       : 
                                                      (vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base 
                                                       - (IData)(1U)))))))));
                            }
                        }(), vlSelf->__Vfunc_testnextkingposition2__DOT__colfromnumber__46__Vfuncout));
        }
    }
    VL_FINISH_MT("tests/testnextkingpositions2.sv", 233, "");
}

VL_INLINE_OPT VlCoroutine Vtestnextkingposition2___024root___eval_initial__TOP__Vtiming__1(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tests/testnextkingpositions2.sv", 
                                           211);
        vlSelf->testnextkingposition2__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tests/testnextkingpositions2.sv", 
                                           212);
        vlSelf->testnextkingposition2__DOT__clk = 0U;
    }
}

VL_INLINE_OPT void Vtestnextkingposition2___024root___act_sequent__TOP__0(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->testnextkingposition2__DOT__active) {
        vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 1U;
        if (vlSelf->testnextkingposition2__DOT__active) {
            if ((7U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 0U;
            }
        }
    } else {
        vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 0U;
        if (vlSelf->testnextkingposition2__DOT__start) {
            vlSelf->testnextkingposition2__DOT__dut__DOT__next_active = 1U;
        }
    }
    vlSelf->testnextkingposition2__DOT__dut__DOT__next_stored_pos 
        = vlSelf->testnextkingposition2__DOT__dut__DOT__stored_pos;
    if ((1U & (~ (IData)(vlSelf->testnextkingposition2__DOT__active)))) {
        if (vlSelf->testnextkingposition2__DOT__start) {
            vlSelf->testnextkingposition2__DOT__dut__DOT__next_stored_pos 
                = vlSelf->testnextkingposition2__DOT__pos;
        }
    }
}

void Vtestnextkingposition2___024root___eval_act(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestnextkingposition2___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestnextkingposition2___024root___nba_sequent__TOP__0(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___nba_sequent__TOP__0\n"); );
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
    vlSelf->testnextkingposition2__DOT__dut__DOT__stored_pos 
        = vlSelf->testnextkingposition2__DOT__dut__DOT__next_stored_pos;
    vlSelf->testnextkingposition2__DOT__number = vlSelf->testnextkingposition2__DOT__dut__DOT__next_number;
    vlSelf->testnextkingposition2__DOT__active = vlSelf->testnextkingposition2__DOT__dut__DOT__next_active;
    if (vlSelf->testnextkingposition2__DOT__active) {
        if (vlSelf->testnextkingposition2__DOT__active) {
            vlSelf->testnextkingposition2__DOT__dut__DOT__next_number 
                = (7U & ((IData)(1U) + (IData)(vlSelf->testnextkingposition2__DOT__number)));
            if ((7U == (IData)(vlSelf->testnextkingposition2__DOT__number))) {
                vlSelf->testnextkingposition2__DOT__dut__DOT__next_number = 0U;
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
        vlSelf->testnextkingposition2__DOT__dut__DOT__addtorow = 0U;
        vlSelf->testnextkingposition2__DOT__dut__DOT__addtocol = 0U;
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

void Vtestnextkingposition2___024root___eval_nba(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestnextkingposition2___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestnextkingposition2___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestnextkingposition2___024root___timing_resume(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestnextkingposition2___024root___eval_triggers__act(Vtestnextkingposition2___024root* vlSelf);

bool Vtestnextkingposition2___024root___eval_phase__act(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestnextkingposition2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestnextkingposition2___024root___timing_resume(vlSelf);
        Vtestnextkingposition2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestnextkingposition2___024root___eval_phase__nba(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestnextkingposition2___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__nba(Vtestnextkingposition2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__act(Vtestnextkingposition2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestnextkingposition2___024root___eval(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestnextkingposition2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tests/testnextkingpositions2.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestnextkingposition2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tests/testnextkingpositions2.sv", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestnextkingposition2___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestnextkingposition2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestnextkingposition2___024root___eval_debug_assertions(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
