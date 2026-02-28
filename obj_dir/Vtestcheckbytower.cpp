// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestcheckbytower__pch.h"

//============================================================
// Constructors

Vtestcheckbytower::Vtestcheckbytower(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestcheckbytower__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestcheckbytower::Vtestcheckbytower(const char* _vcname__)
    : Vtestcheckbytower(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestcheckbytower::~Vtestcheckbytower() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestcheckbytower___024root___eval_debug_assertions(Vtestcheckbytower___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestcheckbytower___024root___eval_static(Vtestcheckbytower___024root* vlSelf);
void Vtestcheckbytower___024root___eval_initial(Vtestcheckbytower___024root* vlSelf);
void Vtestcheckbytower___024root___eval_settle(Vtestcheckbytower___024root* vlSelf);
void Vtestcheckbytower___024root___eval(Vtestcheckbytower___024root* vlSelf);

void Vtestcheckbytower::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestcheckbytower::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestcheckbytower___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestcheckbytower___024root___eval_static(&(vlSymsp->TOP));
        Vtestcheckbytower___024root___eval_initial(&(vlSymsp->TOP));
        Vtestcheckbytower___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestcheckbytower___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestcheckbytower::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestcheckbytower::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestcheckbytower::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestcheckbytower___024root___eval_final(Vtestcheckbytower___024root* vlSelf);

VL_ATTR_COLD void Vtestcheckbytower::final() {
    Vtestcheckbytower___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestcheckbytower::hierName() const { return vlSymsp->name(); }
const char* Vtestcheckbytower::modelName() const { return "Vtestcheckbytower"; }
unsigned Vtestcheckbytower::threads() const { return 1; }
void Vtestcheckbytower::prepareClone() const { contextp()->prepareClone(); }
void Vtestcheckbytower::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtestcheckbytower::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestcheckbytower::trace()' called on model that was Verilated without --trace option");
}
