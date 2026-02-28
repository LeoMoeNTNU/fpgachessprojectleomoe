// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestiskingonposition.h for the primary calling header

#ifndef VERILATED_VTESTISKINGONPOSITION___024UNIT_H_
#define VERILATED_VTESTISKINGONPOSITION___024UNIT_H_  // guard

#include "verilated.h"


class Vtestiskingonposition__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestiskingonposition___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestiskingonposition__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestiskingonposition___024unit(Vtestiskingonposition__Syms* symsp, const char* v__name);
    ~Vtestiskingonposition___024unit();
    VL_UNCOPYABLE(Vtestiskingonposition___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
