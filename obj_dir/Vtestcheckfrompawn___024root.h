// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestcheckfrompawn.h for the primary calling header

#ifndef VERILATED_VTESTCHECKFROMPAWN___024ROOT_H_
#define VERILATED_VTESTCHECKFROMPAWN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestcheckfrompawn__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestcheckfrompawn___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ testcheckfrompawn__DOT__kingPosition;
    CData/*0:0*/ testcheckfrompawn__DOT__attacked;
    CData/*0:0*/ testcheckfrompawn__DOT__valid;
    CData/*0:0*/ testcheckfrompawn__DOT__out_attackedfromright;
    CData/*0:0*/ testcheckfrompawn__DOT__out_attackedfromleft;
    CData/*2:0*/ testcheckfrompawn__DOT__out_row;
    CData/*2:0*/ testcheckfrompawn__DOT__out_col;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 64> testcheckfrompawn__DOT__board;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestcheckfrompawn__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestcheckfrompawn___024root(Vtestcheckfrompawn__Syms* symsp, const char* v__name);
    ~Vtestcheckfrompawn___024root();
    VL_UNCOPYABLE(Vtestcheckfrompawn___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
