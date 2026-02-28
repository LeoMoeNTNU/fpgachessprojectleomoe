// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCHESSTYPES__SYMS_H_
#define VERILATED_VCHESSTYPES__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vchesstypes.h"

// INCLUDE MODULE CLASSES
#include "Vchesstypes___024root.h"
#include "Vchesstypes___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vchesstypes__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vchesstypes* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vchesstypes___024root          TOP;

    // CONSTRUCTORS
    Vchesstypes__Syms(VerilatedContext* contextp, const char* namep, Vchesstypes* modelp);
    ~Vchesstypes__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
