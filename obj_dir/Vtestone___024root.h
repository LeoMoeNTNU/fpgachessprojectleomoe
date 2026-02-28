// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestone.h for the primary calling header

#ifndef VERILATED_VTESTONE___024ROOT_H_
#define VERILATED_VTESTONE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestone__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestone___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ testone__DOT__kingPosition;
    CData/*0:0*/ testone__DOT__kinghere;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 64> testone__DOT__board;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestone__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestone___024root(Vtestone__Syms* symsp, const char* v__name);
    ~Vtestone___024root();
    VL_UNCOPYABLE(Vtestone___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
