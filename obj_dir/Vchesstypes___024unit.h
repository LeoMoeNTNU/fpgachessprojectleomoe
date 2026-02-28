// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchesstypes.h for the primary calling header

#ifndef VERILATED_VCHESSTYPES___024UNIT_H_
#define VERILATED_VCHESSTYPES___024UNIT_H_  // guard

#include "verilated.h"


class Vchesstypes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchesstypes___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vchesstypes__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchesstypes___024unit(Vchesstypes__Syms* symsp, const char* v__name);
    ~Vchesstypes___024unit();
    VL_UNCOPYABLE(Vchesstypes___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
