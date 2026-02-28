// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestiskingonposition.h for the primary calling header

#ifndef VERILATED_VTESTISKINGONPOSITION___024ROOT_H_
#define VERILATED_VTESTISKINGONPOSITION___024ROOT_H_  // guard

#include "verilated.h"


class Vtestiskingonposition__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestiskingonposition___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ testiskingonposition__DOT__kingPosition;
    CData/*0:0*/ testiskingonposition__DOT__kinghere;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 64> testiskingonposition__DOT__board;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestiskingonposition__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestiskingonposition___024root(Vtestiskingonposition__Syms* symsp, const char* v__name);
    ~Vtestiskingonposition___024root();
    VL_UNCOPYABLE(Vtestiskingonposition___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
