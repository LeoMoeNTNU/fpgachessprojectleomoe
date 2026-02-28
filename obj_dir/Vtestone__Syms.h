// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTONE__SYMS_H_
#define VERILATED_VTESTONE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtestone.h"

// INCLUDE MODULE CLASSES
#include "Vtestone___024root.h"
#include "Vtestone___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtestone__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtestone* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtestone___024root             TOP;

    // CONSTRUCTORS
    Vtestone__Syms(VerilatedContext* contextp, const char* namep, Vtestone* modelp);
    ~Vtestone__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
