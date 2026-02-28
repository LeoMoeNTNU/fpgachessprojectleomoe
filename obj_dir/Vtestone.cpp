// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestone__pch.h"

//============================================================
// Constructors

Vtestone::Vtestone(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestone__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestone::Vtestone(const char* _vcname__)
    : Vtestone(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestone::~Vtestone() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestone___024root___eval_debug_assertions(Vtestone___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestone___024root___eval_static(Vtestone___024root* vlSelf);
void Vtestone___024root___eval_initial(Vtestone___024root* vlSelf);
void Vtestone___024root___eval_settle(Vtestone___024root* vlSelf);
void Vtestone___024root___eval(Vtestone___024root* vlSelf);

void Vtestone::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestone::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestone___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestone___024root___eval_static(&(vlSymsp->TOP));
        Vtestone___024root___eval_initial(&(vlSymsp->TOP));
        Vtestone___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestone___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestone::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestone::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestone::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestone___024root___eval_final(Vtestone___024root* vlSelf);

VL_ATTR_COLD void Vtestone::final() {
    Vtestone___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestone::hierName() const { return vlSymsp->name(); }
const char* Vtestone::modelName() const { return "Vtestone"; }
unsigned Vtestone::threads() const { return 1; }
void Vtestone::prepareClone() const { contextp()->prepareClone(); }
void Vtestone::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtestone::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestone::trace()' called on model that was Verilated without --trace option");
}
