// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTNEXTKINGPOSITION2__SYMS_H_
#define VERILATED_VTESTNEXTKINGPOSITION2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtestnextkingposition2.h"

// INCLUDE MODULE CLASSES
#include "Vtestnextkingposition2___024root.h"
#include "Vtestnextkingposition2___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtestnextkingposition2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtestnextkingposition2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtestnextkingposition2___024root TOP;

    // CONSTRUCTORS
    Vtestnextkingposition2__Syms(VerilatedContext* contextp, const char* namep, Vtestnextkingposition2* modelp);
    ~Vtestnextkingposition2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
