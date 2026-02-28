// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestone.h for the primary calling header

#include "Vtestone__pch.h"
#include "Vtestone__Syms.h"
#include "Vtestone___024unit.h"

void Vtestone___024unit___ctor_var_reset(Vtestone___024unit* vlSelf);

Vtestone___024unit::Vtestone___024unit(Vtestone__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestone___024unit___ctor_var_reset(this);
}

void Vtestone___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestone___024unit::~Vtestone___024unit() {
}
