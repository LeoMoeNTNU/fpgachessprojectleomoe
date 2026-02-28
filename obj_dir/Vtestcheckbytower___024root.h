// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestcheckbytower.h for the primary calling header

#ifndef VERILATED_VTESTCHECKBYTOWER___024ROOT_H_
#define VERILATED_VTESTCHECKBYTOWER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestcheckbytower__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestcheckbytower___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ testcheckbytower__DOT__kingPosition;
    CData/*0:0*/ testcheckbytower__DOT__attacked;
    CData/*0:0*/ testcheckbytower__DOT__out_lefttowerattack;
    CData/*1:0*/ testcheckbytower__DOT__unnamedblk2__DOT__status_looking_at;
    CData/*5:0*/ __Vfunc_fullcoord__8__Vfuncout;
    CData/*2:0*/ __Vfunc_fullcoord__8__col;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 64> testcheckbytower__DOT__board;
    VlUnpacked<CData/*1:0*/, 8> testcheckbytower__DOT__out_status_col;
    VlUnpacked<CData/*3:0*/, 8> testcheckbytower__DOT__dut__DOT__wholecol;
    VlUnpacked<CData/*1:0*/, 8> testcheckbytower__DOT__dut__DOT__status_col;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestcheckbytower__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestcheckbytower___024root(Vtestcheckbytower__Syms* symsp, const char* v__name);
    ~Vtestcheckbytower___024root();
    VL_UNCOPYABLE(Vtestcheckbytower___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
