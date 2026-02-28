// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTNEXTKINGPOSITION__SYMS_H_
#define VERILATED_VTESTNEXTKINGPOSITION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtestnextkingposition.h"

// INCLUDE MODULE CLASSES
#include "Vtestnextkingposition___024root.h"
#include "Vtestnextkingposition___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtestnextkingposition__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtestnextkingposition* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtestnextkingposition___024root TOP;

    // CONSTRUCTORS
    Vtestnextkingposition__Syms(VerilatedContext* contextp, const char* namep, Vtestnextkingposition* modelp);
    ~Vtestnextkingposition__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
