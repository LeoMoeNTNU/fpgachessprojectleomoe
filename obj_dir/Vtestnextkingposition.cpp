// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestnextkingposition__pch.h"

//============================================================
// Constructors

Vtestnextkingposition::Vtestnextkingposition(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestnextkingposition__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestnextkingposition::Vtestnextkingposition(const char* _vcname__)
    : Vtestnextkingposition(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestnextkingposition::~Vtestnextkingposition() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestnextkingposition___024root___eval_debug_assertions(Vtestnextkingposition___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestnextkingposition___024root___eval_static(Vtestnextkingposition___024root* vlSelf);
void Vtestnextkingposition___024root___eval_initial(Vtestnextkingposition___024root* vlSelf);
void Vtestnextkingposition___024root___eval_settle(Vtestnextkingposition___024root* vlSelf);
void Vtestnextkingposition___024root___eval(Vtestnextkingposition___024root* vlSelf);

void Vtestnextkingposition::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestnextkingposition::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestnextkingposition___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestnextkingposition___024root___eval_static(&(vlSymsp->TOP));
        Vtestnextkingposition___024root___eval_initial(&(vlSymsp->TOP));
        Vtestnextkingposition___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestnextkingposition___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestnextkingposition::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestnextkingposition::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestnextkingposition::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestnextkingposition___024root___eval_final(Vtestnextkingposition___024root* vlSelf);

VL_ATTR_COLD void Vtestnextkingposition::final() {
    Vtestnextkingposition___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestnextkingposition::hierName() const { return vlSymsp->name(); }
const char* Vtestnextkingposition::modelName() const { return "Vtestnextkingposition"; }
unsigned Vtestnextkingposition::threads() const { return 1; }
void Vtestnextkingposition::prepareClone() const { contextp()->prepareClone(); }
void Vtestnextkingposition::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtestnextkingposition::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestnextkingposition::trace()' called on model that was Verilated without --trace option");
}
