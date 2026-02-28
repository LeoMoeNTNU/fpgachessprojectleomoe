// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestnextkingposition2.h for the primary calling header

#include "Vtestnextkingposition2__pch.h"
#include "Vtestnextkingposition2__Syms.h"
#include "Vtestnextkingposition2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestnextkingposition2___024root___dump_triggers__act(Vtestnextkingposition2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestnextkingposition2___024root___eval_triggers__act(Vtestnextkingposition2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestnextkingposition2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestnextkingposition2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->testnextkingposition2__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testnextkingposition2__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__testnextkingposition2__DOT__clk__0 
        = vlSelf->testnextkingposition2__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestnextkingposition2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
