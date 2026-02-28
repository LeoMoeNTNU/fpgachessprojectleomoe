// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcheckfrompawn.h for the primary calling header

#include "Vtestcheckfrompawn__pch.h"
#include "Vtestcheckfrompawn__Syms.h"
#include "Vtestcheckfrompawn___024root.h"

void Vtestcheckfrompawn___024root___ctor_var_reset(Vtestcheckfrompawn___024root* vlSelf);

Vtestcheckfrompawn___024root::Vtestcheckfrompawn___024root(Vtestcheckfrompawn__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestcheckfrompawn___024root___ctor_var_reset(this);
}

void Vtestcheckfrompawn___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestcheckfrompawn___024root::~Vtestcheckfrompawn___024root() {
}
