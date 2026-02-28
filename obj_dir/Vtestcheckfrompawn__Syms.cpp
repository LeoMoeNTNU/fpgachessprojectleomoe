// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtestcheckfrompawn__pch.h"
#include "Vtestcheckfrompawn.h"
#include "Vtestcheckfrompawn___024root.h"
#include "Vtestcheckfrompawn___024unit.h"

// FUNCTIONS
Vtestcheckfrompawn__Syms::~Vtestcheckfrompawn__Syms()
{
}

Vtestcheckfrompawn__Syms::Vtestcheckfrompawn__Syms(VerilatedContext* contextp, const char* namep, Vtestcheckfrompawn* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
