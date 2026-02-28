// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestcheckfrompawn.h for the primary calling header

#ifndef VERILATED_VTESTCHECKFROMPAWN___024UNIT_H_
#define VERILATED_VTESTCHECKFROMPAWN___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestcheckfrompawn__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestcheckfrompawn___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestcheckfrompawn__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestcheckfrompawn___024unit(Vtestcheckfrompawn__Syms* symsp, const char* v__name);
    ~Vtestcheckfrompawn___024unit();
    VL_UNCOPYABLE(Vtestcheckfrompawn___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
