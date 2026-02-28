// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchesstypes.h for the primary calling header

#include "Vchesstypes__pch.h"
#include "Vchesstypes__Syms.h"
#include "Vchesstypes___024root.h"

void Vchesstypes___024root___ctor_var_reset(Vchesstypes___024root* vlSelf);

Vchesstypes___024root::Vchesstypes___024root(Vchesstypes__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchesstypes___024root___ctor_var_reset(this);
}

void Vchesstypes___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vchesstypes___024root::~Vchesstypes___024root() {
}
