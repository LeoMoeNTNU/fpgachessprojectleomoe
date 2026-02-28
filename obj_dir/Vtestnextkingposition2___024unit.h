// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestnextkingposition2.h for the primary calling header

#ifndef VERILATED_VTESTNEXTKINGPOSITION2___024UNIT_H_
#define VERILATED_VTESTNEXTKINGPOSITION2___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestnextkingposition2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestnextkingposition2___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestnextkingposition2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestnextkingposition2___024unit(Vtestnextkingposition2__Syms* symsp, const char* v__name);
    ~Vtestnextkingposition2___024unit();
    VL_UNCOPYABLE(Vtestnextkingposition2___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
