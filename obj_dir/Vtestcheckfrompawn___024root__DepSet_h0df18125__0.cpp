// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcheckfrompawn.h for the primary calling header

#include "Vtestcheckfrompawn__pch.h"
#include "Vtestcheckfrompawn__Syms.h"
#include "Vtestcheckfrompawn___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcheckfrompawn___024root___dump_triggers__act(Vtestcheckfrompawn___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestcheckfrompawn___024root___eval_triggers__act(Vtestcheckfrompawn___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcheckfrompawn__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcheckfrompawn___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestcheckfrompawn___024root___dump_triggers__act(vlSelf);
    }
#endif
}
