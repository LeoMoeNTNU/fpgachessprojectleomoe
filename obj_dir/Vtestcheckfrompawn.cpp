// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestcheckfrompawn__pch.h"

//============================================================
// Constructors

Vtestcheckfrompawn::Vtestcheckfrompawn(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestcheckfrompawn__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestcheckfrompawn::Vtestcheckfrompawn(const char* _vcname__)
    : Vtestcheckfrompawn(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestcheckfrompawn::~Vtestcheckfrompawn() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestcheckfrompawn___024root___eval_debug_assertions(Vtestcheckfrompawn___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestcheckfrompawn___024root___eval_static(Vtestcheckfrompawn___024root* vlSelf);
void Vtestcheckfrompawn___024root___eval_initial(Vtestcheckfrompawn___024root* vlSelf);
void Vtestcheckfrompawn___024root___eval_settle(Vtestcheckfrompawn___024root* vlSelf);
void Vtestcheckfrompawn___024root___eval(Vtestcheckfrompawn___024root* vlSelf);

void Vtestcheckfrompawn::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestcheckfrompawn::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestcheckfrompawn___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestcheckfrompawn___024root___eval_static(&(vlSymsp->TOP));
        Vtestcheckfrompawn___024root___eval_initial(&(vlSymsp->TOP));
        Vtestcheckfrompawn___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestcheckfrompawn___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestcheckfrompawn::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestcheckfrompawn::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestcheckfrompawn::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestcheckfrompawn___024root___eval_final(Vtestcheckfrompawn___024root* vlSelf);

VL_ATTR_COLD void Vtestcheckfrompawn::final() {
    Vtestcheckfrompawn___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestcheckfrompawn::hierName() const { return vlSymsp->name(); }
const char* Vtestcheckfrompawn::modelName() const { return "Vtestcheckfrompawn"; }
unsigned Vtestcheckfrompawn::threads() const { return 1; }
void Vtestcheckfrompawn::prepareClone() const { contextp()->prepareClone(); }
void Vtestcheckfrompawn::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtestcheckfrompawn::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestcheckfrompawn::trace()' called on model that was Verilated without --trace option");
}
