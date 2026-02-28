// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestiskingonposition__pch.h"

//============================================================
// Constructors

Vtestiskingonposition::Vtestiskingonposition(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestiskingonposition__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestiskingonposition::Vtestiskingonposition(const char* _vcname__)
    : Vtestiskingonposition(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestiskingonposition::~Vtestiskingonposition() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestiskingonposition___024root___eval_debug_assertions(Vtestiskingonposition___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestiskingonposition___024root___eval_static(Vtestiskingonposition___024root* vlSelf);
void Vtestiskingonposition___024root___eval_initial(Vtestiskingonposition___024root* vlSelf);
void Vtestiskingonposition___024root___eval_settle(Vtestiskingonposition___024root* vlSelf);
void Vtestiskingonposition___024root___eval(Vtestiskingonposition___024root* vlSelf);

void Vtestiskingonposition::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestiskingonposition::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestiskingonposition___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestiskingonposition___024root___eval_static(&(vlSymsp->TOP));
        Vtestiskingonposition___024root___eval_initial(&(vlSymsp->TOP));
        Vtestiskingonposition___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestiskingonposition___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestiskingonposition::eventsPending() { return false; }

uint64_t Vtestiskingonposition::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtestiskingonposition::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestiskingonposition___024root___eval_final(Vtestiskingonposition___024root* vlSelf);

VL_ATTR_COLD void Vtestiskingonposition::final() {
    Vtestiskingonposition___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestiskingonposition::hierName() const { return vlSymsp->name(); }
const char* Vtestiskingonposition::modelName() const { return "Vtestiskingonposition"; }
unsigned Vtestiskingonposition::threads() const { return 1; }
void Vtestiskingonposition::prepareClone() const { contextp()->prepareClone(); }
void Vtestiskingonposition::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtestiskingonposition::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestiskingonposition::trace()' called on model that was Verilated without --trace option");
}
