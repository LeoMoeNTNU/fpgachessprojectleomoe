// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestone.h for the primary calling header

#ifndef VERILATED_VTESTONE___024UNIT_H_
#define VERILATED_VTESTONE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestone__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestone___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestone__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestone___024unit(Vtestone__Syms* symsp, const char* v__name);
    ~Vtestone___024unit();
    VL_UNCOPYABLE(Vtestone___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
