// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestnextkingposition2__pch.h"

//============================================================
// Constructors

Vtestnextkingposition2::Vtestnextkingposition2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestnextkingposition2__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestnextkingposition2::Vtestnextkingposition2(const char* _vcname__)
    : Vtestnextkingposition2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestnextkingposition2::~Vtestnextkingposition2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestnextkingposition2___024root___eval_debug_assertions(Vtestnextkingposition2___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestnextkingposition2___024root___eval_static(Vtestnextkingposition2___024root* vlSelf);
void Vtestnextkingposition2___024root___eval_initial(Vtestnextkingposition2___024root* vlSelf);
void Vtestnextkingposition2___024root___eval_settle(Vtestnextkingposition2___024root* vlSelf);
void Vtestnextkingposition2___024root___eval(Vtestnextkingposition2___024root* vlSelf);

void Vtestnextkingposition2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestnextkingposition2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestnextkingposition2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestnextkingposition2___024root___eval_static(&(vlSymsp->TOP));
        Vtestnextkingposition2___024root___eval_initial(&(vlSymsp->TOP));
        Vtestnextkingposition2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestnextkingposition2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestnextkingposition2::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestnextkingposition2::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestnextkingposition2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestnextkingposition2___024root___eval_final(Vtestnextkingposition2___024root* vlSelf);

VL_ATTR_COLD void Vtestnextkingposition2::final() {
    Vtestnextkingposition2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestnextkingposition2::hierName() const { return vlSymsp->name(); }
const char* Vtestnextkingposition2::modelName() const { return "Vtestnextkingposition2"; }
unsigned Vtestnextkingposition2::threads() const { return 1; }
void Vtestnextkingposition2::prepareClone() const { contextp()->prepareClone(); }
void Vtestnextkingposition2::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtestnextkingposition2::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestnextkingposition2::trace()' called on model that was Verilated without --trace option");
}
