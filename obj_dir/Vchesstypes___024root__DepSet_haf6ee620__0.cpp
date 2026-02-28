// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchesstypes.h for the primary calling header

#include "Vchesstypes__pch.h"
#include "Vchesstypes__Syms.h"
#include "Vchesstypes___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchesstypes___024root___dump_triggers__act(Vchesstypes___024root* vlSelf);
#endif  // VL_DEBUG

void Vchesstypes___024root___eval_triggers__act(Vchesstypes___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchesstypes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchesstypes___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchesstypes___024root___dump_triggers__act(vlSelf);
    }
#endif
}
