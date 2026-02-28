// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchesstypes.h for the primary calling header

#ifndef VERILATED_VCHESSTYPES___024ROOT_H_
#define VERILATED_VCHESSTYPES___024ROOT_H_  // guard

#include "verilated.h"


class Vchesstypes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchesstypes___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ testone__DOT__kingPosition;
    CData/*0:0*/ testone__DOT__kinghere;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 64> testone__DOT__board;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vchesstypes__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchesstypes___024root(Vchesstypes__Syms* symsp, const char* v__name);
    ~Vchesstypes___024root();
    VL_UNCOPYABLE(Vchesstypes___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
