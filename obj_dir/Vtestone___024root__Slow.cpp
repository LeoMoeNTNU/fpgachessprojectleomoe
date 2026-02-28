// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestone.h for the primary calling header

#include "Vtestone__pch.h"
#include "Vtestone__Syms.h"
#include "Vtestone___024root.h"

void Vtestone___024root___ctor_var_reset(Vtestone___024root* vlSelf);

Vtestone___024root::Vtestone___024root(Vtestone__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestone___024root___ctor_var_reset(this);
}

void Vtestone___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestone___024root::~Vtestone___024root() {
}
