// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTCHECKFROMPAWN__SYMS_H_
#define VERILATED_VTESTCHECKFROMPAWN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtestcheckfrompawn.h"

// INCLUDE MODULE CLASSES
#include "Vtestcheckfrompawn___024root.h"
#include "Vtestcheckfrompawn___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtestcheckfrompawn__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtestcheckfrompawn* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtestcheckfrompawn___024root   TOP;

    // CONSTRUCTORS
    Vtestcheckfrompawn__Syms(VerilatedContext* contextp, const char* namep, Vtestcheckfrompawn* modelp);
    ~Vtestcheckfrompawn__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
