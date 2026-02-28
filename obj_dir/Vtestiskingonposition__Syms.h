// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTISKINGONPOSITION__SYMS_H_
#define VERILATED_VTESTISKINGONPOSITION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtestiskingonposition.h"

// INCLUDE MODULE CLASSES
#include "Vtestiskingonposition___024root.h"
#include "Vtestiskingonposition___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtestiskingonposition__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtestiskingonposition* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtestiskingonposition___024root TOP;

    // CONSTRUCTORS
    Vtestiskingonposition__Syms(VerilatedContext* contextp, const char* namep, Vtestiskingonposition* modelp);
    ~Vtestiskingonposition__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
