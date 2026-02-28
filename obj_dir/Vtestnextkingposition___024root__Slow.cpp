// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestnextkingposition.h for the primary calling header

#include "Vtestnextkingposition__pch.h"
#include "Vtestnextkingposition__Syms.h"
#include "Vtestnextkingposition___024root.h"

void Vtestnextkingposition___024root___ctor_var_reset(Vtestnextkingposition___024root* vlSelf);

Vtestnextkingposition___024root::Vtestnextkingposition___024root(Vtestnextkingposition__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestnextkingposition___024root___ctor_var_reset(this);
}

void Vtestnextkingposition___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestnextkingposition___024root::~Vtestnextkingposition___024root() {
}
