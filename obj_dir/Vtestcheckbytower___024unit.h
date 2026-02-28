// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestcheckbytower.h for the primary calling header

#ifndef VERILATED_VTESTCHECKBYTOWER___024UNIT_H_
#define VERILATED_VTESTCHECKBYTOWER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestcheckbytower__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestcheckbytower___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestcheckbytower__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestcheckbytower___024unit(Vtestcheckbytower__Syms* symsp, const char* v__name);
    ~Vtestcheckbytower___024unit();
    VL_UNCOPYABLE(Vtestcheckbytower___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
