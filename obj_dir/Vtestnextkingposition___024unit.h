// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestnextkingposition.h for the primary calling header

#ifndef VERILATED_VTESTNEXTKINGPOSITION___024UNIT_H_
#define VERILATED_VTESTNEXTKINGPOSITION___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestnextkingposition__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestnextkingposition___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestnextkingposition__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestnextkingposition___024unit(Vtestnextkingposition__Syms* symsp, const char* v__name);
    ~Vtestnextkingposition___024unit();
    VL_UNCOPYABLE(Vtestnextkingposition___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
