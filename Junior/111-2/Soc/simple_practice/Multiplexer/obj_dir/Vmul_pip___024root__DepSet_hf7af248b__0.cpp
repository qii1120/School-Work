// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_pip.h for the primary calling header

#include "verilated.h"

#include "Vmul_pip___024root.h"

VL_INLINE_OPT void Vmul_pip___024root___ico_sequent__TOP__0(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ready_o = ((~ (IData)(vlSelf->rst_i)) & 
                       ((IData)(vlSelf->req_i) & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o)));
    vlSelf->result_o = ((IData)(vlSelf->rst_i) ? 0ULL
                         : ((IData)(vlSelf->req_i) ? 
                            (((QData)((IData)(vlSelf->mul_pip__DOT__acc_temp
                                              [0x1fU][1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->mul_pip__DOT__acc_temp
                                                          [0x1fU][0U])))
                             : 0ULL));
}

void Vmul_pip___024root___eval_ico(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmul_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmul_pip___024root___eval_act(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmul_pip___024root___nba_sequent__TOP__0(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf190db82__0;
    VlWide<3>/*95:0*/ __Vtemp_h41aec6ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h7db5ca76__0;
    VlWide<3>/*95:0*/ __Vtemp_h33819741__0;
    VlWide<3>/*95:0*/ __Vtemp_hcb89d0e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h49e86408__0;
    VlWide<3>/*95:0*/ __Vtemp_h392e621b__0;
    VlWide<3>/*95:0*/ __Vtemp_hd4d74dc0__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d1a1e40__0;
    VlWide<3>/*95:0*/ __Vtemp_h64aeaa93__0;
    VlWide<3>/*95:0*/ __Vtemp_h56c963cd__0;
    VlWide<3>/*95:0*/ __Vtemp_ha5539c5f__0;
    VlWide<3>/*95:0*/ __Vtemp_h8c9d6cc6__0;
    VlWide<3>/*95:0*/ __Vtemp_h412bbdb9__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e130ca4__0;
    VlWide<3>/*95:0*/ __Vtemp_h1afbab3e__0;
    VlWide<3>/*95:0*/ __Vtemp_h565e5e9f__0;
    VlWide<3>/*95:0*/ __Vtemp_hae05053a__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d6a3d27__0;
    VlWide<3>/*95:0*/ __Vtemp_ha9437cce__0;
    VlWide<3>/*95:0*/ __Vtemp_h70ebed0d__0;
    VlWide<3>/*95:0*/ __Vtemp_h21c2b7cf__0;
    VlWide<3>/*95:0*/ __Vtemp_h59619388__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3186ef4__0;
    VlWide<3>/*95:0*/ __Vtemp_hf359449e__0;
    VlWide<3>/*95:0*/ __Vtemp_hc1d0f2d7__0;
    VlWide<3>/*95:0*/ __Vtemp_h1fdf0275__0;
    VlWide<3>/*95:0*/ __Vtemp_h2f5b7abc__0;
    VlWide<3>/*95:0*/ __Vtemp_hcac17335__0;
    VlWide<3>/*95:0*/ __Vtemp_he3112a9b__0;
    VlWide<3>/*95:0*/ __Vtemp_ha09f141e__0;
    VlWide<3>/*95:0*/ __Vtemp_hddf54308__0;
    VlWide<3>/*95:0*/ __Vtemp_h838b3bd0__0;
    VlWide<3>/*95:0*/ __Vtemp_h8ac7f81c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1327350f__0;
    VlWide<3>/*95:0*/ __Vtemp_h890ff488__0;
    VlWide<3>/*95:0*/ __Vtemp_h5c4fb6a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h7952a140__0;
    VlWide<3>/*95:0*/ __Vtemp_h57602592__0;
    VlWide<3>/*95:0*/ __Vtemp_h15342243__0;
    VlWide<3>/*95:0*/ __Vtemp_h8b0a14cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h6652d0c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h59b6079f__0;
    VlWide<3>/*95:0*/ __Vtemp_hf6d39a52__0;
    VlWide<3>/*95:0*/ __Vtemp_h721d40b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h264930bb__0;
    VlWide<3>/*95:0*/ __Vtemp_hed61a94c__0;
    VlWide<3>/*95:0*/ __Vtemp_h59e2f5d0__0;
    VlWide<3>/*95:0*/ __Vtemp_heb00411f__0;
    VlWide<3>/*95:0*/ __Vtemp_h9a25140b__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f235e13__0;
    VlWide<3>/*95:0*/ __Vtemp_hf4a77332__0;
    VlWide<3>/*95:0*/ __Vtemp_h04221622__0;
    VlWide<3>/*95:0*/ __Vtemp_hf5a5dbb5__0;
    VlWide<3>/*95:0*/ __Vtemp_h8674e839__0;
    VlWide<3>/*95:0*/ __Vtemp_h7154dd1a__0;
    VlWide<3>/*95:0*/ __Vtemp_had3c008a__0;
    VlWide<3>/*95:0*/ __Vtemp_h567bfad0__0;
    VlWide<3>/*95:0*/ __Vtemp_ha01d9ed6__0;
    VlWide<3>/*95:0*/ __Vtemp_heeb7caf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h7318a729__0;
    VlWide<3>/*95:0*/ __Vtemp_h9485247b__0;
    // Body
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_hf190db82__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
    __Vtemp_hf190db82__0[1U] = 0U;
    __Vtemp_hf190db82__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h41aec6ce__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o, __Vtemp_hf190db82__0);
    vlSelf->ready_o = ((~ (IData)(vlSelf->rst_i)) & 
                       ((IData)(vlSelf->req_i) & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o)));
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x1fU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x1fU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h41aec6ce__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h41aec6ce__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h41aec6ce__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x1fU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x1fU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x1fU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x1fU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x1fU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h7db5ca76__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
    __Vtemp_h7db5ca76__0[1U] = 0U;
    __Vtemp_h7db5ca76__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h33819741__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o, __Vtemp_h7db5ca76__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x1eU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x1eU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h33819741__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h33819741__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h33819741__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x1eU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x1eU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x1eU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x1eU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x1eU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_hcb89d0e9__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
    __Vtemp_hcb89d0e9__0[1U] = 0U;
    __Vtemp_hcb89d0e9__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h49e86408__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o, __Vtemp_hcb89d0e9__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x1dU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x1dU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h49e86408__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h49e86408__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h49e86408__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x1dU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x1dU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x1dU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x1dU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x1dU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h392e621b__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
    __Vtemp_h392e621b__0[1U] = 0U;
    __Vtemp_h392e621b__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hd4d74dc0__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o, __Vtemp_h392e621b__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x1cU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x1cU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hd4d74dc0__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hd4d74dc0__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hd4d74dc0__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x1cU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x1cU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x1cU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x1cU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x1cU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h2d1a1e40__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
    __Vtemp_h2d1a1e40__0[1U] = 0U;
    __Vtemp_h2d1a1e40__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h64aeaa93__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o, __Vtemp_h2d1a1e40__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x1bU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x1bU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h64aeaa93__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h64aeaa93__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h64aeaa93__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x1bU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x1bU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x1bU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x1bU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x1bU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h56c963cd__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
    __Vtemp_h56c963cd__0[1U] = 0U;
    __Vtemp_h56c963cd__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_ha5539c5f__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o, __Vtemp_h56c963cd__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x1aU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x1aU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_ha5539c5f__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_ha5539c5f__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_ha5539c5f__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x1aU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x1aU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x1aU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x1aU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x1aU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h8c9d6cc6__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
    __Vtemp_h8c9d6cc6__0[1U] = 0U;
    __Vtemp_h8c9d6cc6__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h412bbdb9__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o, __Vtemp_h8c9d6cc6__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x19U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x19U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h412bbdb9__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h412bbdb9__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h412bbdb9__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x19U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x19U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x19U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x19U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x19U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h7e130ca4__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
    __Vtemp_h7e130ca4__0[1U] = 0U;
    __Vtemp_h7e130ca4__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h1afbab3e__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o, __Vtemp_h7e130ca4__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x18U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x18U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h1afbab3e__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h1afbab3e__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h1afbab3e__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x18U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x18U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x18U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x18U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x18U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h565e5e9f__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
    __Vtemp_h565e5e9f__0[1U] = 0U;
    __Vtemp_h565e5e9f__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hae05053a__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o, __Vtemp_h565e5e9f__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x17U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x17U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hae05053a__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hae05053a__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hae05053a__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x17U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x17U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x17U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x17U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x17U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h7d6a3d27__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
    __Vtemp_h7d6a3d27__0[1U] = 0U;
    __Vtemp_h7d6a3d27__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_ha9437cce__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o, __Vtemp_h7d6a3d27__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x16U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x16U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_ha9437cce__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_ha9437cce__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_ha9437cce__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x16U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x16U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x16U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x16U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x16U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h70ebed0d__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
    __Vtemp_h70ebed0d__0[1U] = 0U;
    __Vtemp_h70ebed0d__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h21c2b7cf__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o, __Vtemp_h70ebed0d__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x15U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x15U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h21c2b7cf__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h21c2b7cf__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h21c2b7cf__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x15U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x15U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x15U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x15U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x15U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h59619388__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
    __Vtemp_h59619388__0[1U] = 0U;
    __Vtemp_h59619388__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hd3186ef4__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o, __Vtemp_h59619388__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x14U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x14U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hd3186ef4__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hd3186ef4__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hd3186ef4__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x14U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x14U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x14U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x14U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x14U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_hf359449e__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
    __Vtemp_hf359449e__0[1U] = 0U;
    __Vtemp_hf359449e__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hc1d0f2d7__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o, __Vtemp_hf359449e__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x13U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x13U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hc1d0f2d7__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hc1d0f2d7__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hc1d0f2d7__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x13U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x13U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x13U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x13U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x13U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h1fdf0275__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
    __Vtemp_h1fdf0275__0[1U] = 0U;
    __Vtemp_h1fdf0275__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h2f5b7abc__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o, __Vtemp_h1fdf0275__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x12U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x12U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h2f5b7abc__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h2f5b7abc__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h2f5b7abc__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x12U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x12U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x12U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x12U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x12U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_hcac17335__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
    __Vtemp_hcac17335__0[1U] = 0U;
    __Vtemp_hcac17335__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_he3112a9b__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o, __Vtemp_hcac17335__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x11U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x11U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_he3112a9b__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_he3112a9b__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_he3112a9b__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x11U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x11U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x11U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x11U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x11U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_ha09f141e__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
    __Vtemp_ha09f141e__0[1U] = 0U;
    __Vtemp_ha09f141e__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hddf54308__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o, __Vtemp_ha09f141e__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0x10U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0x10U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hddf54308__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hddf54308__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hddf54308__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0x10U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0x10U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0x10U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0x10U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0x10U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h838b3bd0__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
    __Vtemp_h838b3bd0__0[1U] = 0U;
    __Vtemp_h838b3bd0__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h8ac7f81c__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o, __Vtemp_h838b3bd0__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0xfU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0xfU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h8ac7f81c__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h8ac7f81c__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h8ac7f81c__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0xfU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0xfU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0xfU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0xfU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0xfU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h1327350f__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
    __Vtemp_h1327350f__0[1U] = 0U;
    __Vtemp_h1327350f__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h890ff488__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o, __Vtemp_h1327350f__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0xeU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0xeU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h890ff488__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h890ff488__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h890ff488__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0xeU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0xeU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0xeU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0xeU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0xeU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h5c4fb6a1__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
    __Vtemp_h5c4fb6a1__0[1U] = 0U;
    __Vtemp_h5c4fb6a1__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h7952a140__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o, __Vtemp_h5c4fb6a1__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0xdU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0xdU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h7952a140__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h7952a140__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h7952a140__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0xdU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0xdU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0xdU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0xdU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0xdU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h57602592__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
    __Vtemp_h57602592__0[1U] = 0U;
    __Vtemp_h57602592__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h15342243__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o, __Vtemp_h57602592__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0xcU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0xcU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h15342243__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h15342243__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h15342243__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0xcU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0xcU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0xcU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0xcU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0xcU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h8b0a14cc__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
    __Vtemp_h8b0a14cc__0[1U] = 0U;
    __Vtemp_h8b0a14cc__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h6652d0c6__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o, __Vtemp_h8b0a14cc__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0xbU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0xbU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h6652d0c6__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h6652d0c6__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h6652d0c6__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0xbU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0xbU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0xbU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0xbU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0xbU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h59b6079f__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
    __Vtemp_h59b6079f__0[1U] = 0U;
    __Vtemp_h59b6079f__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hf6d39a52__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o, __Vtemp_h59b6079f__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0xaU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0xaU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hf6d39a52__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hf6d39a52__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hf6d39a52__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0xaU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[0xaU] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0xaU][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0xaU][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0xaU][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h721d40b1__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
    __Vtemp_h721d40b1__0[1U] = 0U;
    __Vtemp_h721d40b1__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h264930bb__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o, __Vtemp_h721d40b1__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[9U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[9U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h264930bb__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h264930bb__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h264930bb__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[9U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[9U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[9U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[9U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[9U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_hed61a94c__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
    __Vtemp_hed61a94c__0[1U] = 0U;
    __Vtemp_hed61a94c__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h59e2f5d0__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o, __Vtemp_hed61a94c__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[8U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[8U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h59e2f5d0__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h59e2f5d0__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h59e2f5d0__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[8U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[8U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[8U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[8U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[8U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_heb00411f__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
    __Vtemp_heb00411f__0[1U] = 0U;
    __Vtemp_heb00411f__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h9a25140b__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o, __Vtemp_heb00411f__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[7U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[7U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h9a25140b__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h9a25140b__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h9a25140b__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[7U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[7U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[7U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[7U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[7U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h9f235e13__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
    __Vtemp_h9f235e13__0[1U] = 0U;
    __Vtemp_h9f235e13__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hf4a77332__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o, __Vtemp_h9f235e13__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[6U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[6U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hf4a77332__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hf4a77332__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hf4a77332__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[6U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[6U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[6U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[6U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[6U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h04221622__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
    __Vtemp_h04221622__0[1U] = 0U;
    __Vtemp_h04221622__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hf5a5dbb5__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o, __Vtemp_h04221622__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[5U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[5U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hf5a5dbb5__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hf5a5dbb5__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hf5a5dbb5__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[5U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[5U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[5U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[5U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[5U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_h8674e839__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
    __Vtemp_h8674e839__0[1U] = 0U;
    __Vtemp_h8674e839__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h7154dd1a__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o, __Vtemp_h8674e839__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[4U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[4U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h7154dd1a__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h7154dd1a__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h7154dd1a__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[4U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[4U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[4U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[4U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[4U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_had3c008a__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
    __Vtemp_had3c008a__0[1U] = 0U;
    __Vtemp_had3c008a__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h567bfad0__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o, __Vtemp_had3c008a__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[3U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[3U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h567bfad0__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h567bfad0__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h567bfad0__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[3U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[3U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[3U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[3U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[3U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o)));
    __Vtemp_ha01d9ed6__0[0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
    __Vtemp_ha01d9ed6__0[1U] = 0U;
    __Vtemp_ha01d9ed6__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_heeb7caf8__0, vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o, __Vtemp_ha01d9ed6__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_heeb7caf8__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_heeb7caf8__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_heeb7caf8__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[2U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[2U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[2U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__ready_o)));
    __Vtemp_h7318a729__0[0U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o;
    __Vtemp_h7318a729__0[1U] = 0U;
    __Vtemp_h7318a729__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h9485247b__0, vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o, __Vtemp_h7318a729__0);
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__ready_o) {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o 
                       >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o 
                       << 1U);
                if ((1U & vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o)) {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h9485247b__0[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h9485247b__0[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h9485247b__0[2U]);
                } else {
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[0U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[1U];
                    vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[2U]);
                }
            } else {
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o;
        vlSelf->mul_pip__DOT__a_temp[1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[1U][0U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[1U][1U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[1U][2U] = vlSelf->mul_pip__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & (IData)(vlSelf->req_i));
    if (vlSelf->rst_i) {
        vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o = 0U;
        vlSelf->mul_pip__DOT__b_temp[0U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o;
        vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o = 0U;
        vlSelf->mul_pip__DOT__a_temp[0U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o;
        vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
        vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->req_i) {
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o 
                    = (vlSelf->b_i >> 1U);
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o 
                    = (vlSelf->a_i << 1U);
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[0U] 
                    = ((1U & vlSelf->b_i) ? vlSelf->a_i
                        : 0U);
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
            } else {
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o = 0U;
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
                vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o = 0U;
            vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
            vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
        }
        vlSelf->mul_pip__DOT__b_temp[0U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__b_o;
        vlSelf->mul_pip__DOT__a_temp[0U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__a_o;
    }
    vlSelf->mul_pip__DOT__acc_temp[0U][0U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[0U];
    vlSelf->mul_pip__DOT__acc_temp[0U][1U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[1U];
    vlSelf->mul_pip__DOT__acc_temp[0U][2U] = vlSelf->mul_pip__DOT____Vcellout__u_mult_step0__acc_o[2U];
    vlSelf->result_o = ((IData)(vlSelf->rst_i) ? 0ULL
                         : ((IData)(vlSelf->req_i) ? 
                            (((QData)((IData)(vlSelf->mul_pip__DOT__acc_temp
                                              [0x1fU][1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->mul_pip__DOT__acc_temp
                                                          [0x1fU][0U])))
                             : 0ULL));
}

void Vmul_pip___024root___eval_nba(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmul_pip___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmul_pip___024root___eval_triggers__ico(Vmul_pip___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_pip___024root___dump_triggers__ico(Vmul_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vmul_pip___024root___eval_triggers__act(Vmul_pip___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_pip___024root___dump_triggers__act(Vmul_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_pip___024root___dump_triggers__nba(Vmul_pip___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul_pip___024root___eval(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmul_pip___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmul_pip___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("mul_pip.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmul_pip___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmul_pip___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmul_pip___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mul_pip.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmul_pip___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmul_pip___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mul_pip.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmul_pip___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmul_pip___024root___eval_debug_assertions(Vmul_pip___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_pip___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->req_i & 0xfeU))) {
        Verilated::overWidthError("req_i");}
}
#endif  // VL_DEBUG
