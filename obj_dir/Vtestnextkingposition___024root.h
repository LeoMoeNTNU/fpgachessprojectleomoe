// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestnextkingposition.h for the primary calling header

#ifndef VERILATED_VTESTNEXTKINGPOSITION___024ROOT_H_
#define VERILATED_VTESTNEXTKINGPOSITION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestnextkingposition__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestnextkingposition___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testnextkingposition__DOT__clk;
    CData/*0:0*/ testnextkingposition__DOT__req;
    CData/*0:0*/ testnextkingposition__DOT__ack;
    CData/*1:0*/ testnextkingposition__DOT__out_state;
    CData/*2:0*/ testnextkingposition__DOT__out_counter;
    CData/*1:0*/ testnextkingposition__DOT__dut__DOT__state;
    CData/*1:0*/ testnextkingposition__DOT__dut__DOT__next_state;
    CData/*2:0*/ testnextkingposition__DOT__dut__DOT__counter;
    CData/*2:0*/ testnextkingposition__DOT__dut__DOT__next_counter;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testnextkingposition__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestnextkingposition__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestnextkingposition___024root(Vtestnextkingposition__Syms* symsp, const char* v__name);
    ~Vtestnextkingposition___024root();
    VL_UNCOPYABLE(Vtestnextkingposition___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
