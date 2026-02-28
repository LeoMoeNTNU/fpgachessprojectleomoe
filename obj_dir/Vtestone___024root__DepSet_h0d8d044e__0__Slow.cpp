// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestone.h for the primary calling header

#include "Vtestone__pch.h"
#include "Vtestone__Syms.h"
#include "Vtestone___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestone___024root___dump_triggers__stl(Vtestone___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestone___024root___eval_triggers__stl(Vtestone___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestone__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestone___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestone___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
