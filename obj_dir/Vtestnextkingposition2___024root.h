// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestnextkingposition2.h for the primary calling header

#ifndef VERILATED_VTESTNEXTKINGPOSITION2___024ROOT_H_
#define VERILATED_VTESTNEXTKINGPOSITION2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestnextkingposition2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestnextkingposition2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testnextkingposition2__DOT__clk;
    CData/*0:0*/ testnextkingposition2__DOT__start;
    CData/*5:0*/ testnextkingposition2__DOT__pos;
    CData/*2:0*/ testnextkingposition2__DOT__number;
    CData/*0:0*/ testnextkingposition2__DOT__active;
    CData/*2:0*/ testnextkingposition2__DOT__row;
    CData/*2:0*/ testnextkingposition2__DOT__col;
    CData/*0:0*/ testnextkingposition2__DOT__valid;
    CData/*2:0*/ testnextkingposition2__DOT__dut__DOT__next_number;
    CData/*0:0*/ testnextkingposition2__DOT__dut__DOT__next_active;
    CData/*2:0*/ testnextkingposition2__DOT__dut__DOT__addtorow;
    CData/*2:0*/ testnextkingposition2__DOT__dut__DOT__addtocol;
    CData/*5:0*/ testnextkingposition2__DOT__dut__DOT__stored_pos;
    CData/*5:0*/ testnextkingposition2__DOT__dut__DOT__next_stored_pos;
    CData/*0:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__Vfuncout;
    CData/*5:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__in;
    CData/*2:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__number;
    CData/*2:0*/ __Vfunc_row__38__Vfuncout;
    CData/*5:0*/ __Vfunc_row__38__index;
    CData/*2:0*/ __Vfunc_col__39__Vfuncout;
    CData/*5:0*/ __Vfunc_col__39__index;
    CData/*5:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__40__a;
    CData/*2:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__40__number;
    CData/*2:0*/ __Vfunc_row__41__Vfuncout;
    CData/*5:0*/ __Vfunc_row__41__index;
    CData/*5:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__42__a;
    CData/*2:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__42__number;
    CData/*2:0*/ __Vfunc_row__43__Vfuncout;
    CData/*5:0*/ __Vfunc_row__43__index;
    CData/*5:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__44__a;
    CData/*2:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__44__number;
    CData/*2:0*/ __Vfunc_col__45__Vfuncout;
    CData/*5:0*/ __Vfunc_col__45__index;
    CData/*5:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__46__a;
    CData/*2:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__46__number;
    CData/*2:0*/ __Vfunc_col__47__Vfuncout;
    CData/*5:0*/ __Vfunc_col__47__index;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testnextkingposition2__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_row;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__base_col;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__row_i;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__shouldbevalid__37__unnamedblk3__DOT__col_i;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__40__Vfuncout;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__40__unnamedblk1__DOT__base;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__42__Vfuncout;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__rowfromnumber__42__unnamedblk1__DOT__base;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__44__Vfuncout;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__44__unnamedblk2__DOT__base;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__46__Vfuncout;
    IData/*31:0*/ __Vfunc_testnextkingposition2__DOT__colfromnumber__46__unnamedblk2__DOT__base;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestnextkingposition2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestnextkingposition2___024root(Vtestnextkingposition2__Syms* symsp, const char* v__name);
    ~Vtestnextkingposition2___024root();
    VL_UNCOPYABLE(Vtestnextkingposition2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
