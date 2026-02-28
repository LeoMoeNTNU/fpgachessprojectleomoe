// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchesstypes.h for the primary calling header

#include "Vchesstypes__pch.h"
#include "Vchesstypes__Syms.h"
#include "Vchesstypes___024unit.h"

void Vchesstypes___024unit___ctor_var_reset(Vchesstypes___024unit* vlSelf);

Vchesstypes___024unit::Vchesstypes___024unit(Vchesstypes__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchesstypes___024unit___ctor_var_reset(this);
}

void Vchesstypes___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vchesstypes___024unit::~Vchesstypes___024unit() {
}
