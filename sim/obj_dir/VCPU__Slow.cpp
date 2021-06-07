// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU.h"
#include "VCPU__Syms.h"

//==========

VCPU::VCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VCPU__Syms* __restrict vlSymsp = __VlSymsp = new VCPU__Syms(_vcontextp__, this, name());
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCPU::__Vconfigure(VCPU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VCPU::~VCPU() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VCPU::_settle__TOP__3(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_settle__TOP__3\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp46[3];
    WData/*95:0*/ __Vtemp47[3];
    WData/*95:0*/ __Vtemp48[3];
    WData/*95:0*/ __Vtemp49[3];
    WData/*95:0*/ __Vtemp56[3];
    WData/*95:0*/ __Vtemp57[3];
    WData/*95:0*/ __Vtemp59[3];
    WData/*1055:0*/ __Vtemp60[33];
    WData/*1055:0*/ __Vtemp61[33];
    WData/*1055:0*/ __Vtemp62[33];
    WData/*1055:0*/ __Vtemp64[33];
    WData/*1055:0*/ __Vtemp65[33];
    WData/*1055:0*/ __Vtemp68[33];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_0 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_1 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_2 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_3 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_4 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_5 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_6 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_7 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_8 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_9 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_10 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_11 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_12 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_13 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_14 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_15 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_16 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_17 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_18 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_19 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_20 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_21 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_22 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_23 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_24 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_25 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_26 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_27 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_28 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_29 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_30 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_31 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_32 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_33 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_34 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_35 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_36 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_37 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_38 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_39 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_40 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_41 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_42 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_43 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_44 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_45 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_46 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_47 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_48 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_49 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_50 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_51 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_52 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_53 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_54 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_55 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_56 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_57 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_58 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_59 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_60 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_61 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_62 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_63 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_64 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_65 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_66 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_67 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_68 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_69 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_70 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_71 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_72 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_73 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_74 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_75 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_76 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_77 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_78 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_79 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_80 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_81 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_82 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_83 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_84 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_85 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_86 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_87 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_88 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_89 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_90 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_91 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_92 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_93 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_94 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_95 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_96 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_97 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_98 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_99 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_100 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_101 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_102 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_103 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_104 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_105 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_106 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_107 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_108 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_109 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_110 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_111 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_112 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_113 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_114 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_115 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_116 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_117 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_118 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_119 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_120 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_121 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_122 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_123 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_124 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_125 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_126 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_127 = 0U;
    } else {
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_0 = vlTOPp->CPU__DOT__mod_data__DOT__mem_0;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_1 = vlTOPp->CPU__DOT__mod_data__DOT__mem_1;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_2 = vlTOPp->CPU__DOT__mod_data__DOT__mem_2;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_3 = vlTOPp->CPU__DOT__mod_data__DOT__mem_3;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_4 = vlTOPp->CPU__DOT__mod_data__DOT__mem_4;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_5 = vlTOPp->CPU__DOT__mod_data__DOT__mem_5;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_6 = vlTOPp->CPU__DOT__mod_data__DOT__mem_6;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_7 = vlTOPp->CPU__DOT__mod_data__DOT__mem_7;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_8 = vlTOPp->CPU__DOT__mod_data__DOT__mem_8;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_9 = vlTOPp->CPU__DOT__mod_data__DOT__mem_9;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_10 = vlTOPp->CPU__DOT__mod_data__DOT__mem_10;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_11 = vlTOPp->CPU__DOT__mod_data__DOT__mem_11;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_12 = vlTOPp->CPU__DOT__mod_data__DOT__mem_12;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_13 = vlTOPp->CPU__DOT__mod_data__DOT__mem_13;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_14 = vlTOPp->CPU__DOT__mod_data__DOT__mem_14;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_15 = vlTOPp->CPU__DOT__mod_data__DOT__mem_15;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_16 = vlTOPp->CPU__DOT__mod_data__DOT__mem_16;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_17 = vlTOPp->CPU__DOT__mod_data__DOT__mem_17;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_18 = vlTOPp->CPU__DOT__mod_data__DOT__mem_18;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_19 = vlTOPp->CPU__DOT__mod_data__DOT__mem_19;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_20 = vlTOPp->CPU__DOT__mod_data__DOT__mem_20;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_21 = vlTOPp->CPU__DOT__mod_data__DOT__mem_21;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_22 = vlTOPp->CPU__DOT__mod_data__DOT__mem_22;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_23 = vlTOPp->CPU__DOT__mod_data__DOT__mem_23;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_24 = vlTOPp->CPU__DOT__mod_data__DOT__mem_24;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_25 = vlTOPp->CPU__DOT__mod_data__DOT__mem_25;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_26 = vlTOPp->CPU__DOT__mod_data__DOT__mem_26;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_27 = vlTOPp->CPU__DOT__mod_data__DOT__mem_27;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_28 = vlTOPp->CPU__DOT__mod_data__DOT__mem_28;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_29 = vlTOPp->CPU__DOT__mod_data__DOT__mem_29;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_30 = vlTOPp->CPU__DOT__mod_data__DOT__mem_30;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_31 = vlTOPp->CPU__DOT__mod_data__DOT__mem_31;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_32 = vlTOPp->CPU__DOT__mod_data__DOT__mem_32;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_33 = vlTOPp->CPU__DOT__mod_data__DOT__mem_33;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_34 = vlTOPp->CPU__DOT__mod_data__DOT__mem_34;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_35 = vlTOPp->CPU__DOT__mod_data__DOT__mem_35;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_36 = vlTOPp->CPU__DOT__mod_data__DOT__mem_36;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_37 = vlTOPp->CPU__DOT__mod_data__DOT__mem_37;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_38 = vlTOPp->CPU__DOT__mod_data__DOT__mem_38;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_39 = vlTOPp->CPU__DOT__mod_data__DOT__mem_39;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_40 = vlTOPp->CPU__DOT__mod_data__DOT__mem_40;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_41 = vlTOPp->CPU__DOT__mod_data__DOT__mem_41;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_42 = vlTOPp->CPU__DOT__mod_data__DOT__mem_42;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_43 = vlTOPp->CPU__DOT__mod_data__DOT__mem_43;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_44 = vlTOPp->CPU__DOT__mod_data__DOT__mem_44;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_45 = vlTOPp->CPU__DOT__mod_data__DOT__mem_45;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_46 = vlTOPp->CPU__DOT__mod_data__DOT__mem_46;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_47 = vlTOPp->CPU__DOT__mod_data__DOT__mem_47;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_48 = vlTOPp->CPU__DOT__mod_data__DOT__mem_48;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_49 = vlTOPp->CPU__DOT__mod_data__DOT__mem_49;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_50 = vlTOPp->CPU__DOT__mod_data__DOT__mem_50;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_51 = vlTOPp->CPU__DOT__mod_data__DOT__mem_51;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_52 = vlTOPp->CPU__DOT__mod_data__DOT__mem_52;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_53 = vlTOPp->CPU__DOT__mod_data__DOT__mem_53;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_54 = vlTOPp->CPU__DOT__mod_data__DOT__mem_54;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_55 = vlTOPp->CPU__DOT__mod_data__DOT__mem_55;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_56 = vlTOPp->CPU__DOT__mod_data__DOT__mem_56;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_57 = vlTOPp->CPU__DOT__mod_data__DOT__mem_57;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_58 = vlTOPp->CPU__DOT__mod_data__DOT__mem_58;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_59 = vlTOPp->CPU__DOT__mod_data__DOT__mem_59;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_60 = vlTOPp->CPU__DOT__mod_data__DOT__mem_60;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_61 = vlTOPp->CPU__DOT__mod_data__DOT__mem_61;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_62 = vlTOPp->CPU__DOT__mod_data__DOT__mem_62;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_63 = vlTOPp->CPU__DOT__mod_data__DOT__mem_63;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_64 = vlTOPp->CPU__DOT__mod_data__DOT__mem_64;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_65 = vlTOPp->CPU__DOT__mod_data__DOT__mem_65;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_66 = vlTOPp->CPU__DOT__mod_data__DOT__mem_66;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_67 = vlTOPp->CPU__DOT__mod_data__DOT__mem_67;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_68 = vlTOPp->CPU__DOT__mod_data__DOT__mem_68;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_69 = vlTOPp->CPU__DOT__mod_data__DOT__mem_69;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_70 = vlTOPp->CPU__DOT__mod_data__DOT__mem_70;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_71 = vlTOPp->CPU__DOT__mod_data__DOT__mem_71;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_72 = vlTOPp->CPU__DOT__mod_data__DOT__mem_72;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_73 = vlTOPp->CPU__DOT__mod_data__DOT__mem_73;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_74 = vlTOPp->CPU__DOT__mod_data__DOT__mem_74;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_75 = vlTOPp->CPU__DOT__mod_data__DOT__mem_75;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_76 = vlTOPp->CPU__DOT__mod_data__DOT__mem_76;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_77 = vlTOPp->CPU__DOT__mod_data__DOT__mem_77;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_78 = vlTOPp->CPU__DOT__mod_data__DOT__mem_78;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_79 = vlTOPp->CPU__DOT__mod_data__DOT__mem_79;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_80 = vlTOPp->CPU__DOT__mod_data__DOT__mem_80;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_81 = vlTOPp->CPU__DOT__mod_data__DOT__mem_81;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_82 = vlTOPp->CPU__DOT__mod_data__DOT__mem_82;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_83 = vlTOPp->CPU__DOT__mod_data__DOT__mem_83;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_84 = vlTOPp->CPU__DOT__mod_data__DOT__mem_84;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_85 = vlTOPp->CPU__DOT__mod_data__DOT__mem_85;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_86 = vlTOPp->CPU__DOT__mod_data__DOT__mem_86;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_87 = vlTOPp->CPU__DOT__mod_data__DOT__mem_87;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_88 = vlTOPp->CPU__DOT__mod_data__DOT__mem_88;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_89 = vlTOPp->CPU__DOT__mod_data__DOT__mem_89;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_90 = vlTOPp->CPU__DOT__mod_data__DOT__mem_90;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_91 = vlTOPp->CPU__DOT__mod_data__DOT__mem_91;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_92 = vlTOPp->CPU__DOT__mod_data__DOT__mem_92;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_93 = vlTOPp->CPU__DOT__mod_data__DOT__mem_93;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_94 = vlTOPp->CPU__DOT__mod_data__DOT__mem_94;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_95 = vlTOPp->CPU__DOT__mod_data__DOT__mem_95;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_96 = vlTOPp->CPU__DOT__mod_data__DOT__mem_96;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_97 = vlTOPp->CPU__DOT__mod_data__DOT__mem_97;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_98 = vlTOPp->CPU__DOT__mod_data__DOT__mem_98;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_99 = vlTOPp->CPU__DOT__mod_data__DOT__mem_99;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_100 = vlTOPp->CPU__DOT__mod_data__DOT__mem_100;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_101 = vlTOPp->CPU__DOT__mod_data__DOT__mem_101;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_102 = vlTOPp->CPU__DOT__mod_data__DOT__mem_102;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_103 = vlTOPp->CPU__DOT__mod_data__DOT__mem_103;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_104 = vlTOPp->CPU__DOT__mod_data__DOT__mem_104;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_105 = vlTOPp->CPU__DOT__mod_data__DOT__mem_105;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_106 = vlTOPp->CPU__DOT__mod_data__DOT__mem_106;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_107 = vlTOPp->CPU__DOT__mod_data__DOT__mem_107;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_108 = vlTOPp->CPU__DOT__mod_data__DOT__mem_108;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_109 = vlTOPp->CPU__DOT__mod_data__DOT__mem_109;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_110 = vlTOPp->CPU__DOT__mod_data__DOT__mem_110;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_111 = vlTOPp->CPU__DOT__mod_data__DOT__mem_111;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_112 = vlTOPp->CPU__DOT__mod_data__DOT__mem_112;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_113 = vlTOPp->CPU__DOT__mod_data__DOT__mem_113;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_114 = vlTOPp->CPU__DOT__mod_data__DOT__mem_114;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_115 = vlTOPp->CPU__DOT__mod_data__DOT__mem_115;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_116 = vlTOPp->CPU__DOT__mod_data__DOT__mem_116;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_117 = vlTOPp->CPU__DOT__mod_data__DOT__mem_117;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_118 = vlTOPp->CPU__DOT__mod_data__DOT__mem_118;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_119 = vlTOPp->CPU__DOT__mod_data__DOT__mem_119;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_120 = vlTOPp->CPU__DOT__mod_data__DOT__mem_120;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_121 = vlTOPp->CPU__DOT__mod_data__DOT__mem_121;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_122 = vlTOPp->CPU__DOT__mod_data__DOT__mem_122;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_123 = vlTOPp->CPU__DOT__mod_data__DOT__mem_123;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_124 = vlTOPp->CPU__DOT__mod_data__DOT__mem_124;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_125 = vlTOPp->CPU__DOT__mod_data__DOT__mem_125;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_126 = vlTOPp->CPU__DOT__mod_data__DOT__mem_126;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_127 = vlTOPp->CPU__DOT__mod_data__DOT__mem_127;
    }
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_62 = ((0U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_0);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_63 = ((1U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_1);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_64 = ((2U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_2);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_65 = ((3U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_3);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_66 = ((4U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_4);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_67 = ((5U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_5);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_68 = ((6U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_6);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_69 = ((7U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_7);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_70 = ((8U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_8);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_71 = ((9U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_9);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_72 = ((0xaU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_10);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_73 = ((0xbU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_11);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_74 = ((0xcU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_12);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_75 = ((0xdU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_13);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_76 = ((0xeU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_14);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_77 = ((0xfU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_15);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_78 = ((0x10U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_16);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_79 = ((0x11U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_17);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_80 = ((0x12U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_18);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_81 = ((0x13U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_19);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_82 = ((0x14U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_20);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_83 = ((0x15U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_21);
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_140 = ((0xcU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_1
                                                             : vlTOPp->CPU__DOT__mod_data__DOT__mem_0))))))))))));
    vlTOPp->CPU__DOT__mod_alu__DOT___T_11 = VL_LTS_III(1,32,32, vlTOPp->CPU__DOT__alu_src_1, vlTOPp->CPU__DOT__alu_src_2);
    vlTOPp->CPU__DOT__mod_alu__DOT___T_14 = (vlTOPp->CPU__DOT__alu_src_1 
                                             < vlTOPp->CPU__DOT__alu_src_2);
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_13 
        = ((0xdU == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0x14a8b33U : ((0xcU == (0x7fU & vlTOPp->CPU__DOT__pc))
                             ? 0x16a4bb3U : ((0xbU 
                                              == (0x7fU 
                                                  & vlTOPp->CPU__DOT__pc))
                                              ? 0x414a8b33U
                                              : ((0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__pc))
                                                  ? 0xfffa2b93U
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__pc))
                                                   ? 0x765a7b13U
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0xfffa3b93U
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0x34a3b13U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0x7bca4b93U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0xc00a0b13U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0x345a8a93U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0x98765ab7U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0x15a6a33U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0x3fb95ab7U
                                                           : 0x18f06a13U)))))))))))));
    vlTOPp->CPU__DOT__mod_pc__DOT___pc_reg_T_1 = ((IData)(4U) 
                                                  + vlTOPp->CPU__DOT__mod_pc__DOT__pc_reg);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_84 = ((0x16U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_22);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_85 = ((0x17U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_23);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_86 = ((0x18U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_24);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_87 = ((0x19U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_25);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_88 = ((0x1aU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_26);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_89 = ((0x1bU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_27);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_90 = ((0x1cU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_28);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_91 = ((0x1dU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_29);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_92 = ((0x1eU 
                                                == (IData)(vlTOPp->CPU__DOT__reg_write_addr))
                                                ? vlTOPp->CPU__DOT__reg_write_data
                                                : vlTOPp->CPU__DOT__mod_reg__DOT__reg_30);
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_21 = ((0x15U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_21
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                    ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                     ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                      ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                       ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                        ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                         ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                          ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                           ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                            ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                             ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                              ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                               ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                 ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                  ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                   ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                    ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                     ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                      ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlTOPp->CPU__DOT__reg_read_addr_1))
                                                                       ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_1
                                                                       : vlTOPp->CPU__DOT__mod_reg__DOT__reg_0)))))))))))))))))))));
    vlTOPp->CPU__DOT__mod_reg__DOT___GEN_52 = ((0x15U 
                                                == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_21
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                    ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                     ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                      ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                       ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                        ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                         ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                          ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                           ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                            ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                             ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                              ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                               ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                 ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                  ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                   ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                    ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                     ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                      ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlTOPp->CPU__DOT__reg_read_addr_2))
                                                                       ? vlTOPp->CPU__DOT__mod_reg__DOT__reg_1
                                                                       : vlTOPp->CPU__DOT__mod_reg__DOT__reg_0)))))))))))))))))))));
    vlTOPp->CPU__DOT__mod_pc__DOT___GEN_0 = ((4U == (IData)(vlTOPp->CPU__DOT__pc_ctrl))
                                              ? vlTOPp->CPU__DOT__pc_imm
                                              : vlTOPp->CPU__DOT__mod_pc__DOT__pc_reg);
    vlTOPp->CPU__DOT__mod_ctrl__DOT___GEN_69 = ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__instruction))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->CPU__DOT__instruction 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->CPU__DOT__instruction 
                                                       >> 0xcU)))
                                                   ? 6U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->CPU__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->CPU__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->CPU__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 5U
                                                      : 0U)))))
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__instruction))
                                                  ? 8U
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__instruction))
                                                   ? 9U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__instruction))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->CPU__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 0xaU
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->CPU__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 0xbU
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->CPU__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 0xcU
                                                       : 0U)))
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__instruction))
                                                     ? 0xdU
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__instruction))
                                                      ? 0xeU
                                                      : 0U))))));
    vlTOPp->CPU__DOT__mod_ctrl__DOT___GEN_79 = ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__instruction))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->CPU__DOT__instruction 
                                                      >> 0xcU)))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->CPU__DOT__instruction 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->CPU__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->CPU__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->CPU__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 0U
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->CPU__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->CPU__DOT__instruction 
                                                            >> 0xcU)))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->CPU__DOT__instruction 
                                                             >> 0xcU)))
                                                         ? 2U
                                                         : 0U))))))))
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__instruction))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__instruction))
                                                   ? 4U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__instruction))
                                                    ? 5U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__instruction))
                                                     ? 6U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__instruction))
                                                      ? 7U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__instruction))
                                                       ? 8U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__instruction))
                                                        ? 9U
                                                        : 0U))))))));
    vlTOPp->CPU__DOT__mod_ctrl__DOT___GEN_83 = ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__instruction))
                                                 ? 1U
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__instruction))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__instruction))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__instruction))
                                                    ? 3U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__instruction))
                                                     ? 4U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__instruction))
                                                      ? 5U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__instruction))
                                                       ? 6U
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__instruction))
                                                        ? 7U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__instruction))
                                                         ? 8U
                                                         : 0U)))))))));
    vlTOPp->CPU__DOT__mod_ctrl__DOT___GEN_70 = ((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__instruction))
                                                 ? 0U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__instruction))
                                                  ? 0U
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__instruction))
                                                   ? 0U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__instruction))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->CPU__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 
                                                    (1U 
                                                     & (vlTOPp->CPU__DOT__instruction 
                                                        >> 0x1eU))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->CPU__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->CPU__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 2U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->CPU__DOT__instruction 
                                                            >> 0xcU)))
                                                        ? 3U
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->CPU__DOT__instruction 
                                                             >> 0xcU)))
                                                         ? 4U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->CPU__DOT__instruction 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0x40000000U 
                                                           & vlTOPp->CPU__DOT__instruction)
                                                           ? 9U
                                                           : 8U)
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->CPU__DOT__instruction 
                                                               >> 0xcU)))
                                                           ? 5U
                                                           : 
                                                          ((7U 
                                                            == 
                                                            (7U 
                                                             & (vlTOPp->CPU__DOT__instruction 
                                                                >> 0xcU)))
                                                            ? 6U
                                                            : 0U))))))))
                                                    : 0U))));
    vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_2 = ((0x80000000U 
                                                   & vlTOPp->CPU__DOT__instruction)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   ((IData)(0xffffffffU) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (vlTOPp->CPU__DOT__instruction 
                                                                        >> 0x14U))))) 
                                                   << 0xbU)
                                                   : (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlTOPp->CPU__DOT__instruction 
                                                                         >> 0x14U)))));
    if ((2U == (IData)(vlTOPp->CPU__DOT__select_ctrl))) {
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_372 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_62;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_373 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_63;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_374 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_64;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_375 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_65;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_376 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_66;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_377 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_67;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_378 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_68;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_379 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_69;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_380 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_70;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_381 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_71;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_382 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_72;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_383 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_73;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_384 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_74;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_385 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_75;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_386 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_76;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_387 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_77;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_388 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_78;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_389 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_79;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_390 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_80;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_391 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_81;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_392 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_82;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_393 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_83;
    } else {
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_372 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_62
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_62
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_62
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_0)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_373 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_63
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_63
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_63
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_1)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_374 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_64
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_64
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_64
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_2)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_375 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_65
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_65
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_65
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_3)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_376 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_66
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_66
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_66
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_4)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_377 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_67
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_67
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_67
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_5)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_378 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_68
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_68
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_68
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_6)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_379 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_69
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_69
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_69
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_7)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_380 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_70
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_70
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_70
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_8)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_381 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_71
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_71
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_71
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_9)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_382 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_72
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_72
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_72
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_10)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_383 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_73
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_73
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_73
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_11)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_384 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_74
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_74
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_74
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_12)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_385 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_75
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_75
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_75
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_13)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_386 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_76
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_76
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_76
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_14)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_387 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_77
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_77
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_77
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_15)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_388 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_78
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_78
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_78
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_16)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_389 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_79
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_79
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_79
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_17)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_390 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_80
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_80
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_80
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_18)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_391 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_81
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_81
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_81
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_19)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_392 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_82
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_82
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_82
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_20)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_393 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_83
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_83
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_83
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_21)));
    }
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_152 = ((0x18U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_13
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_140))))))))))));
    VL_EXTEND_WI(95,32, __Vtemp46, (vlTOPp->CPU__DOT__alu_src_1 
                                    | vlTOPp->CPU__DOT__alu_src_2));
    VL_EXTEND_WI(95,32, __Vtemp47, vlTOPp->CPU__DOT__alu_src_1);
    VL_SHIFTL_WWI(95,95,6, __Vtemp48, __Vtemp47, (0x3fU 
                                                  & vlTOPp->CPU__DOT__alu_src_2));
    VL_EXTEND_WI(95,32, __Vtemp49, ((8U == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                     ? ((0x1fU >= (0x3fU 
                                                   & vlTOPp->CPU__DOT__alu_src_2))
                                         ? (vlTOPp->CPU__DOT__alu_src_1 
                                            >> (0x3fU 
                                                & vlTOPp->CPU__DOT__alu_src_2))
                                         : 0U) : ((9U 
                                                   == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                   ? 
                                                  ((0x1fU 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->CPU__DOT__alu_src_2))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,6, vlTOPp->CPU__DOT__alu_src_1, 
                                                                  (0x3fU 
                                                                   & vlTOPp->CPU__DOT__alu_src_2))
                                                    : 
                                                   (- 
                                                    (vlTOPp->CPU__DOT__alu_src_1 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                    ? 
                                                   (vlTOPp->CPU__DOT__alu_src_1 
                                                    ^ vlTOPp->CPU__DOT__alu_src_2)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                     ? 
                                                    ((vlTOPp->CPU__DOT__alu_src_1 
                                                      <= vlTOPp->CPU__DOT__alu_src_2) 
                                                     & (IData)(vlTOPp->CPU__DOT__mod_alu__DOT___T_11))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                      ? 
                                                     ((vlTOPp->CPU__DOT__alu_src_1 
                                                       <= vlTOPp->CPU__DOT__alu_src_2) 
                                                      & (IData)(vlTOPp->CPU__DOT__mod_alu__DOT___T_14))
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                       ? 
                                                      (vlTOPp->CPU__DOT__alu_src_1 
                                                       == vlTOPp->CPU__DOT__alu_src_2)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                        ? 
                                                       (vlTOPp->CPU__DOT__alu_src_1 
                                                        != vlTOPp->CPU__DOT__alu_src_2)
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                         ? (IData)(vlTOPp->CPU__DOT__mod_alu__DOT___T_11)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                          ? 
                                                         VL_GTES_III(1,32,32, vlTOPp->CPU__DOT__alu_src_1, vlTOPp->CPU__DOT__alu_src_2)
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                                                           ? (IData)(vlTOPp->CPU__DOT__mod_alu__DOT___T_14)
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlTOPp->CPU__DOT__alu_ctrl)) 
                                                           & (vlTOPp->CPU__DOT__alu_src_1 
                                                              >= vlTOPp->CPU__DOT__alu_src_2)))))))))))));
    if ((5U == (IData)(vlTOPp->CPU__DOT__alu_ctrl))) {
        vlTOPp->CPU__DOT__mod_alu__DOT___GEN_22[0U] 
            = __Vtemp46[0U];
        vlTOPp->CPU__DOT__mod_alu__DOT___GEN_22[1U] 
            = __Vtemp46[1U];
        vlTOPp->CPU__DOT__mod_alu__DOT___GEN_22[2U] 
            = (0x7fffffffU & __Vtemp46[2U]);
    } else {
        vlTOPp->CPU__DOT__mod_alu__DOT___GEN_22[0U] 
            = ((7U == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                ? __Vtemp48[0U] : __Vtemp49[0U]);
        vlTOPp->CPU__DOT__mod_alu__DOT___GEN_22[1U] 
            = ((7U == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                ? __Vtemp48[1U] : __Vtemp49[1U]);
        vlTOPp->CPU__DOT__mod_alu__DOT___GEN_22[2U] 
            = (0x7fffffffU & ((7U == (IData)(vlTOPp->CPU__DOT__alu_ctrl))
                               ? __Vtemp48[2U] : __Vtemp49[2U]));
    }
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_26 
        = ((0x1aU == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0x193U : ((0x19U == (0x7fU & vlTOPp->CPU__DOT__pc))
                         ? 0x408adb93U : ((0x18U == 
                                           (0x7fU & vlTOPp->CPU__DOT__pc))
                                           ? 0x8adb93U
                                           : ((0x17U 
                                               == (0x7fU 
                                                   & vlTOPp->CPU__DOT__pc))
                                               ? 0x10a9b93U
                                               : ((0x16U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__pc))
                                                   ? 0x403adb33U
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0x3adb33U
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0x3a1b33U
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0x418193U
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0x15a3bb3U
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0x15a2b33U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0x16bfbb3U
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0x16bebb3U
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0x414b0b33U
                                                           : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_13)))))))))))));
    if ((2U == (IData)(vlTOPp->CPU__DOT__select_ctrl))) {
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_394 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_84;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_395 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_85;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_396 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_86;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_397 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_87;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_398 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_88;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_399 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_89;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_400 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_90;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_401 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_91;
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_402 = vlTOPp->CPU__DOT__mod_reg__DOT___GEN_92;
    } else {
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_394 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_84
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_84
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_84
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_22)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_395 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_85
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_85
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_85
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_23)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_396 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_86
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_86
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_86
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_24)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_397 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_87
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_87
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_87
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_25)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_398 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_88
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_88
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_88
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_26)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_399 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_89
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_89
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_89
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_27)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_400 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_90
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_90
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_90
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_28)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_401 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_91
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_91
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_91
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_29)));
        vlTOPp->CPU__DOT__mod_reg__DOT___GEN_402 = 
            ((3U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
              ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_92
              : ((8U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                  ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_92
                  : ((5U == (IData)(vlTOPp->CPU__DOT__select_ctrl))
                      ? vlTOPp->CPU__DOT__mod_reg__DOT___GEN_92
                      : vlTOPp->CPU__DOT__mod_reg__DOT__reg_30)));
    }
    vlTOPp->CPU__DOT__mod_ctrl__DOT___GEN_84 = ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__instruction))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->CPU__DOT__instruction 
                                                      >> 0xcU)))
                                                  ? 0xaU
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->CPU__DOT__instruction 
                                                       >> 0xcU)))
                                                   ? 0xbU
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->CPU__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 0xfU
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->CPU__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 0xdU
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->CPU__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 0xeU
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->CPU__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 0xcU
                                                       : 0U))))))
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__instruction))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->CPU__DOT__instruction 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->CPU__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 2U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->CPU__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->CPU__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->CPU__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 5U
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->CPU__DOT__instruction 
                                                            >> 0xcU)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->CPU__DOT__instruction 
                                                             >> 0xcU)))
                                                         ? 7U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->CPU__DOT__instruction 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0x40000000U 
                                                           & vlTOPp->CPU__DOT__instruction)
                                                           ? 9U
                                                           : 8U)
                                                          : 0U))))))))
                                                  : (IData)(vlTOPp->CPU__DOT__mod_ctrl__DOT___GEN_70)));
    VL_EXTEND_WQ(79,64, __Vtemp56, ((QData)((IData)(
                                                    (1U 
                                                     & (vlTOPp->CPU__DOT__instruction 
                                                        >> 7U)))) 
                                    << (0x3fU & ((IData)(0xbU) 
                                                 + 
                                                 (vlTOPp->CPU__DOT__instruction 
                                                  >> 0x19U)))));
    VL_SHIFTL_WWI(79,79,4, __Vtemp57, __Vtemp56, (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     (vlTOPp->CPU__DOT__instruction 
                                                      >> 8U))));
    __Vtemp59[0U] = (0xfffffffeU & (__Vtemp57[0U] << 1U));
    __Vtemp59[1U] = ((1U & (__Vtemp57[0U] >> 0x1fU)) 
                     | (0xfffffffeU & (__Vtemp57[1U] 
                                       << 1U)));
    __Vtemp59[2U] = ((1U & (__Vtemp57[1U] >> 0x1fU)) 
                     | (0xfffeU & (__Vtemp57[2U] << 1U)));
    VL_EXTEND_WW(1047,80, __Vtemp60, __Vtemp59);
    VL_EXTEND_WI(1047,5, __Vtemp61, (0x1fU & (vlTOPp->CPU__DOT__instruction 
                                              >> 0x14U)));
    VL_EXTEND_WI(1047,12, __Vtemp62, (0xfffU & (vlTOPp->CPU__DOT__instruction 
                                                >> 0x14U)));
    VL_EXTEND_WI(1046,23, __Vtemp64, (0x7fffffU & (
                                                   (0xffU 
                                                    & (vlTOPp->CPU__DOT__instruction 
                                                       >> 0xcU)) 
                                                   << 
                                                   (0xfU 
                                                    & ((IData)(0xcU) 
                                                       + 
                                                       (1U 
                                                        & (vlTOPp->CPU__DOT__instruction 
                                                           >> 0x14U)))))));
    VL_SHIFTL_WWI(1046,1046,10, __Vtemp65, __Vtemp64, 
                  (0x3ffU & ((IData)(0xbU) + (vlTOPp->CPU__DOT__instruction 
                                              >> 0x15U))));
    VL_EXTEND_WQ(1047,47, __Vtemp68, ((3U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_2
                                       : ((4U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_2
                                           : (0x3fffffffffULL 
                                              & ((9U 
                                                  == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                                  ? (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlTOPp->CPU__DOT__instruction)))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & (vlTOPp->CPU__DOT__instruction 
                                                                        >> 0x19U)))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        (vlTOPp->CPU__DOT__instruction 
                                                         >> 7U))))
                                                    : 0ULL)))))));
    if ((1U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))) {
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0U] 
            = __Vtemp60[0U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[1U] 
            = __Vtemp60[1U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[2U] 
            = __Vtemp60[2U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[3U] 
            = __Vtemp60[3U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[4U] 
            = __Vtemp60[4U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[5U] 
            = __Vtemp60[5U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[6U] 
            = __Vtemp60[6U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[7U] 
            = __Vtemp60[7U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[8U] 
            = __Vtemp60[8U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[9U] 
            = __Vtemp60[9U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xaU] 
            = __Vtemp60[0xaU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xbU] 
            = __Vtemp60[0xbU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xcU] 
            = __Vtemp60[0xcU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xdU] 
            = __Vtemp60[0xdU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xeU] 
            = __Vtemp60[0xeU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xfU] 
            = __Vtemp60[0xfU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x10U] 
            = __Vtemp60[0x10U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x11U] 
            = __Vtemp60[0x11U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x12U] 
            = __Vtemp60[0x12U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x13U] 
            = __Vtemp60[0x13U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x14U] 
            = __Vtemp60[0x14U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x15U] 
            = __Vtemp60[0x15U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x16U] 
            = __Vtemp60[0x16U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x17U] 
            = __Vtemp60[0x17U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x18U] 
            = __Vtemp60[0x18U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x19U] 
            = __Vtemp60[0x19U];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1aU] 
            = __Vtemp60[0x1aU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1bU] 
            = __Vtemp60[0x1bU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1cU] 
            = __Vtemp60[0x1cU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1dU] 
            = __Vtemp60[0x1dU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1eU] 
            = __Vtemp60[0x1eU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1fU] 
            = __Vtemp60[0x1fU];
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x20U] 
            = __Vtemp60[0x20U];
    } else {
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[0U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? (0xfffffffeU 
                                           & (__Vtemp65[0U] 
                                              << 1U))
                                        : __Vtemp68[0U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[1U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[1U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[1U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[0U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[1U] 
                                                 << 1U)))
                                        : __Vtemp68[1U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[2U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[2U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[2U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[1U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[2U] 
                                                 << 1U)))
                                        : __Vtemp68[2U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[3U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[3U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[3U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[2U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[3U] 
                                                 << 1U)))
                                        : __Vtemp68[3U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[4U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[4U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[4U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[3U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[4U] 
                                                 << 1U)))
                                        : __Vtemp68[4U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[5U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[5U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[5U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[4U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[5U] 
                                                 << 1U)))
                                        : __Vtemp68[5U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[6U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[6U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[6U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[5U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[6U] 
                                                 << 1U)))
                                        : __Vtemp68[6U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[7U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[7U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[7U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[6U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[7U] 
                                                 << 1U)))
                                        : __Vtemp68[7U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[8U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[8U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[8U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[7U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[8U] 
                                                 << 1U)))
                                        : __Vtemp68[8U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[9U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[9U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                    ? __Vtemp62[9U]
                                    : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                        ? ((1U & (__Vtemp65[8U] 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & (__Vtemp65[9U] 
                                                 << 1U)))
                                        : __Vtemp68[9U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xaU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0xaU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                      ? __Vtemp62[0xaU]
                                      : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                          ? ((1U & 
                                              (__Vtemp65[9U] 
                                               >> 0x1fU)) 
                                             | (0xfffffffeU 
                                                & (__Vtemp65[0xaU] 
                                                   << 1U)))
                                          : __Vtemp68[0xaU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xbU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0xbU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                      ? __Vtemp62[0xbU]
                                      : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                          ? ((1U & 
                                              (__Vtemp65[0xaU] 
                                               >> 0x1fU)) 
                                             | (0xfffffffeU 
                                                & (__Vtemp65[0xbU] 
                                                   << 1U)))
                                          : __Vtemp68[0xbU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xcU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0xcU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                      ? __Vtemp62[0xcU]
                                      : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                          ? ((1U & 
                                              (__Vtemp65[0xbU] 
                                               >> 0x1fU)) 
                                             | (0xfffffffeU 
                                                & (__Vtemp65[0xcU] 
                                                   << 1U)))
                                          : __Vtemp68[0xcU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xdU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0xdU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                      ? __Vtemp62[0xdU]
                                      : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                          ? ((1U & 
                                              (__Vtemp65[0xcU] 
                                               >> 0x1fU)) 
                                             | (0xfffffffeU 
                                                & (__Vtemp65[0xdU] 
                                                   << 1U)))
                                          : __Vtemp68[0xdU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xeU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0xeU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                      ? __Vtemp62[0xeU]
                                      : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                          ? ((1U & 
                                              (__Vtemp65[0xdU] 
                                               >> 0x1fU)) 
                                             | (0xfffffffeU 
                                                & (__Vtemp65[0xeU] 
                                                   << 1U)))
                                          : __Vtemp68[0xeU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0xfU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0xfU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                      ? __Vtemp62[0xfU]
                                      : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                          ? ((1U & 
                                              (__Vtemp65[0xeU] 
                                               >> 0x1fU)) 
                                             | (0xfffffffeU 
                                                & (__Vtemp65[0xfU] 
                                                   << 1U)))
                                          : __Vtemp68[0xfU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x10U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x10U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x10U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0xfU] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x10U] 
                                                    << 1U)))
                                           : __Vtemp68[0x10U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x11U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x11U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x11U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x10U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x11U] 
                                                    << 1U)))
                                           : __Vtemp68[0x11U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x12U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x12U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x12U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x11U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x12U] 
                                                    << 1U)))
                                           : __Vtemp68[0x12U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x13U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x13U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x13U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x12U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x13U] 
                                                    << 1U)))
                                           : __Vtemp68[0x13U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x14U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x14U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x14U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x13U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x14U] 
                                                    << 1U)))
                                           : __Vtemp68[0x14U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x15U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x15U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x15U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x14U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x15U] 
                                                    << 1U)))
                                           : __Vtemp68[0x15U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x16U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x16U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x16U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x15U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x16U] 
                                                    << 1U)))
                                           : __Vtemp68[0x16U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x17U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x17U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x17U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x16U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x17U] 
                                                    << 1U)))
                                           : __Vtemp68[0x17U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x18U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x18U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x18U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x17U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x18U] 
                                                    << 1U)))
                                           : __Vtemp68[0x18U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x19U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x19U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x19U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x18U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x19U] 
                                                    << 1U)))
                                           : __Vtemp68[0x19U])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1aU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x1aU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x1aU]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x19U] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x1aU] 
                                                    << 1U)))
                                           : __Vtemp68[0x1aU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1bU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x1bU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x1bU]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x1aU] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x1bU] 
                                                    << 1U)))
                                           : __Vtemp68[0x1bU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1cU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x1cU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x1cU]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x1bU] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x1cU] 
                                                    << 1U)))
                                           : __Vtemp68[0x1cU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1dU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x1dU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x1dU]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x1cU] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x1dU] 
                                                    << 1U)))
                                           : __Vtemp68[0x1dU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1eU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x1eU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x1eU]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x1dU] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x1eU] 
                                                    << 1U)))
                                           : __Vtemp68[0x1eU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x1fU] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x1fU] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x1fU]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x1eU] 
                                                >> 0x1fU)) 
                                              | (0xfffffffeU 
                                                 & (__Vtemp65[0x1fU] 
                                                    << 1U)))
                                           : __Vtemp68[0x1fU])));
        vlTOPp->CPU__DOT__mod_imm_gen__DOT___GEN_12[0x20U] 
            = ((2U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                ? __Vtemp61[0x20U] : ((0U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                       ? __Vtemp62[0x20U]
                                       : ((5U == (IData)(vlTOPp->CPU__DOT__imm_ctrl))
                                           ? ((1U & 
                                               (__Vtemp65[0x1fU] 
                                                >> 0x1fU)) 
                                              | (0x7ffffeU 
                                                 & (__Vtemp65[0x20U] 
                                                    << 1U)))
                                           : __Vtemp68[0x20U])));
    }
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_164 = ((0x24U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_36
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_35
                                                   : 
                                                  ((0x22U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_34
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_33
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_32
                                                      : 
                                                     ((0x1fU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_31
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_30
                                                        : 
                                                       ((0x1dU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_29
                                                         : 
                                                        ((0x1cU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_28
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_27
                                                           : 
                                                          ((0x1aU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_26
                                                            : 
                                                           ((0x19U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_25
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_152))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_39 
        = ((0x27U == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0x171a823U : ((0x26U == (0x7fU & vlTOPp->CPU__DOT__pc))
                             ? 0x819b83U : ((0x25U 
                                             == (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                             ? 0x161a623U
                                             : ((0x24U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__pc))
                                                 ? 0x1ab03U
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__pc))
                                                  ? 0x518423U
                                                  : 
                                                 ((0x22U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__pc))
                                                   ? 0x5184a3U
                                                   : 
                                                  ((0x21U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0x5183a3U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0x1419523U
                                                     : 
                                                    ((0x1fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0x1619223U
                                                      : 
                                                     ((0x1eU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0x171a423U
                                                       : 
                                                      ((0x1dU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0x151a223U
                                                        : 
                                                       ((0x1cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0x141a023U
                                                         : 
                                                        ((0x1bU 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0xf500293U
                                                          : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_26)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_176 = ((0x30U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_48
                                                  : 
                                                 ((0x2fU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_47
                                                   : 
                                                  ((0x2eU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_46
                                                    : 
                                                   ((0x2dU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_45
                                                     : 
                                                    ((0x2cU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_44
                                                      : 
                                                     ((0x2bU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_43
                                                       : 
                                                      ((0x2aU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_42
                                                        : 
                                                       ((0x29U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_41
                                                         : 
                                                        ((0x28U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_40
                                                          : 
                                                         ((0x27U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_39
                                                           : 
                                                          ((0x26U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_38
                                                            : 
                                                           ((0x25U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_37
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_164))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_52 
        = ((0x34U == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0x15a5463U : ((0x33U == (0x7fU & vlTOPp->CPU__DOT__pc))
                             ? 0x148493U : ((0x32U 
                                             == (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                             ? 0x15a1463U
                                             : ((0x31U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->CPU__DOT__pc))
                                                 ? 0x9074b3U
                                                 : 
                                                ((0x30U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->CPU__DOT__pc))
                                                  ? 0x1a223U
                                                  : 
                                                 ((0x2fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->CPU__DOT__pc))
                                                   ? 0x371a023U
                                                   : 
                                                  ((0x2eU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0x181cb83U
                                                    : 
                                                   ((0x2dU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0x171ae23U
                                                     : 
                                                    ((0x2cU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0x71cb83U
                                                      : 
                                                     ((0x2bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0x151ac23U
                                                       : 
                                                      ((0x2aU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0x718b03U
                                                        : 
                                                       ((0x29U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0x141aa23U
                                                         : 
                                                        ((0x28U 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0x81db83U
                                                          : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_39)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_188 = ((0x3cU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_60
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_59
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_58
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_57
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_56
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_55
                                                       : 
                                                      ((0x36U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_54
                                                        : 
                                                       ((0x35U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_53
                                                         : 
                                                        ((0x34U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_52
                                                          : 
                                                         ((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_51
                                                           : 
                                                          ((0x32U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_50
                                                            : 
                                                           ((0x31U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_49
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_176))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_65 
        = ((0x41U == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0xc000efU : ((0x40U == (0x7fU & vlTOPp->CPU__DOT__pc))
                            ? 0x41a503U : ((0x3fU == 
                                            (0x7fU 
                                             & vlTOPp->CPU__DOT__pc))
                                            ? 0x91a223U
                                            : ((0x3eU 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                                ? 0x548493U
                                                : (
                                                   (0x3dU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0x19a8463U
                                                    : 
                                                   ((0x3cU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0x181ac83U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0x448493U
                                                      : 
                                                     ((0x3aU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0x15a6463U
                                                       : 
                                                      ((0x39U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0x348493U
                                                        : 
                                                       ((0x38U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0x15a4463U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0x248493U
                                                          : 
                                                         ((0x36U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0x15a7463U
                                                           : 
                                                          ((0x35U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->CPU__DOT__pc))
                                                            ? 0x148493U
                                                            : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_52)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_200 = ((0x48U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_72
                                                  : 
                                                 ((0x47U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_71
                                                   : 
                                                  ((0x46U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_70
                                                    : 
                                                   ((0x45U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_69
                                                     : 
                                                    ((0x44U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_68
                                                      : 
                                                     ((0x43U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_67
                                                       : 
                                                      ((0x42U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_66
                                                        : 
                                                       ((0x41U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_65
                                                         : 
                                                        ((0x40U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_64
                                                          : 
                                                         ((0x3fU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_63
                                                           : 
                                                          ((0x3eU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_62
                                                            : 
                                                           ((0x3dU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_61
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_188))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_78 
        = ((0x4eU == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0U : ((0x4dU == (0x7fU & vlTOPp->CPU__DOT__pc))
                     ? 0U : ((0x4cU == (0x7fU & vlTOPp->CPU__DOT__pc))
                              ? 0U : ((0x4bU == (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                       ? 0U : ((0x4aU 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                                ? 0U
                                                : (
                                                   (0x49U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0U
                                                    : 
                                                   ((0x48U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0U
                                                     : 
                                                    ((0x47U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0U
                                                      : 
                                                     ((0x46U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0x8067U
                                                       : 
                                                      ((0x45U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0xa1a223U
                                                        : 
                                                       ((0x44U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0x45c56513U
                                                         : 
                                                        ((0x43U 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0xa1a223U
                                                          : 
                                                         ((0x42U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0x850513U
                                                           : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_65)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_212 = ((0x54U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_84
                                                  : 
                                                 ((0x53U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_83
                                                   : 
                                                  ((0x52U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_82
                                                    : 
                                                   ((0x51U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_81
                                                     : 
                                                    ((0x50U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_80
                                                      : 
                                                     ((0x4fU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_79
                                                       : 
                                                      ((0x4eU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_78
                                                        : 
                                                       ((0x4dU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_77
                                                         : 
                                                        ((0x4cU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_76
                                                          : 
                                                         ((0x4bU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_75
                                                           : 
                                                          ((0x4aU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_74
                                                            : 
                                                           ((0x49U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_73
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_200))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_91 
        = ((0x5bU == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0U : ((0x5aU == (0x7fU & vlTOPp->CPU__DOT__pc))
                     ? 0U : ((0x59U == (0x7fU & vlTOPp->CPU__DOT__pc))
                              ? 0U : ((0x58U == (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                       ? 0U : ((0x57U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                                ? 0U
                                                : (
                                                   (0x56U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0U
                                                    : 
                                                   ((0x55U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0U
                                                     : 
                                                    ((0x54U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0U
                                                      : 
                                                     ((0x53U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0U
                                                       : 
                                                      ((0x52U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0U
                                                        : 
                                                       ((0x51U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0U
                                                         : 
                                                        ((0x50U 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0U
                                                          : 
                                                         ((0x4fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0U
                                                           : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_78)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_224 = ((0x60U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_96
                                                  : 
                                                 ((0x5fU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_95
                                                   : 
                                                  ((0x5eU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_94
                                                    : 
                                                   ((0x5dU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_93
                                                     : 
                                                    ((0x5cU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_92
                                                      : 
                                                     ((0x5bU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_91
                                                       : 
                                                      ((0x5aU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_90
                                                        : 
                                                       ((0x59U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_89
                                                         : 
                                                        ((0x58U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_88
                                                          : 
                                                         ((0x57U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_87
                                                           : 
                                                          ((0x56U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_86
                                                            : 
                                                           ((0x55U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_85
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_212))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_104 
        = ((0x68U == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0U : ((0x67U == (0x7fU & vlTOPp->CPU__DOT__pc))
                     ? 0U : ((0x66U == (0x7fU & vlTOPp->CPU__DOT__pc))
                              ? 0U : ((0x65U == (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                       ? 0U : ((0x64U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                                ? 0U
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0U
                                                    : 
                                                   ((0x62U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0U
                                                     : 
                                                    ((0x61U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0U
                                                      : 
                                                     ((0x60U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0U
                                                       : 
                                                      ((0x5fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0U
                                                        : 
                                                       ((0x5eU 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0U
                                                         : 
                                                        ((0x5dU 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0U
                                                          : 
                                                         ((0x5cU 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0U
                                                           : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_91)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_236 = ((0x6cU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_108
                                                  : 
                                                 ((0x6bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_107
                                                   : 
                                                  ((0x6aU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_106
                                                    : 
                                                   ((0x69U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_105
                                                     : 
                                                    ((0x68U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_104
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_103
                                                       : 
                                                      ((0x66U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_102
                                                        : 
                                                       ((0x65U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_101
                                                         : 
                                                        ((0x64U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_100
                                                          : 
                                                         ((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_99
                                                           : 
                                                          ((0x62U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_98
                                                            : 
                                                           ((0x61U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_97
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_224))))))))))));
    vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_117 
        = ((0x75U == (0x7fU & vlTOPp->CPU__DOT__pc))
            ? 0U : ((0x74U == (0x7fU & vlTOPp->CPU__DOT__pc))
                     ? 0U : ((0x73U == (0x7fU & vlTOPp->CPU__DOT__pc))
                              ? 0U : ((0x72U == (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                       ? 0U : ((0x71U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->CPU__DOT__pc))
                                                ? 0U
                                                : (
                                                   (0x70U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0U
                                                     : 
                                                    ((0x6eU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0U
                                                      : 
                                                     ((0x6dU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0U
                                                       : 
                                                      ((0x6cU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0U
                                                        : 
                                                       ((0x6bU 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0U
                                                         : 
                                                        ((0x6aU 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0U
                                                          : 
                                                         ((0x69U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0U
                                                           : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_104)))))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_248 = ((0x78U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_120
                                                  : 
                                                 ((0x77U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_119
                                                   : 
                                                  ((0x76U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_118
                                                    : 
                                                   ((0x75U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_117
                                                     : 
                                                    ((0x74U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_116
                                                      : 
                                                     ((0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_115
                                                       : 
                                                      ((0x72U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_114
                                                        : 
                                                       ((0x71U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                         ? vlTOPp->CPU__DOT__mod_data__DOT__mem_113
                                                         : 
                                                        ((0x70U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                          ? vlTOPp->CPU__DOT__mod_data__DOT__mem_112
                                                          : 
                                                         ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                           ? vlTOPp->CPU__DOT__mod_data__DOT__mem_111
                                                           : 
                                                          ((0x6eU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                            ? vlTOPp->CPU__DOT__mod_data__DOT__mem_110
                                                            : 
                                                           ((0x6dU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                             ? vlTOPp->CPU__DOT__mod_data__DOT__mem_109
                                                             : vlTOPp->CPU__DOT__mod_data__DOT___GEN_236))))))))))));
    vlTOPp->CPU__DOT__mod_instruction_io_instruction 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x7eU == 
                                           (0x7fU & vlTOPp->CPU__DOT__pc))
                                           ? 0U : (
                                                   (0x7dU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->CPU__DOT__pc))
                                                    ? 0U
                                                    : 
                                                   ((0x7cU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->CPU__DOT__pc))
                                                     ? 0U
                                                     : 
                                                    ((0x7bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->CPU__DOT__pc))
                                                      ? 0U
                                                      : 
                                                     ((0x7aU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->CPU__DOT__pc))
                                                       ? 0U
                                                       : 
                                                      ((0x79U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->CPU__DOT__pc))
                                                        ? 0U
                                                        : 
                                                       ((0x78U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->CPU__DOT__pc))
                                                         ? 0U
                                                         : 
                                                        ((0x77U 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->CPU__DOT__pc))
                                                          ? 0U
                                                          : 
                                                         ((0x76U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->CPU__DOT__pc))
                                                           ? 0U
                                                           : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_117))))))))));
    vlTOPp->CPU__DOT__mod_data__DOT___GEN_255 = ((0x7fU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                  ? vlTOPp->CPU__DOT__mod_data__DOT__mem_127
                                                  : 
                                                 ((0x7eU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                   ? vlTOPp->CPU__DOT__mod_data__DOT__mem_126
                                                   : 
                                                  ((0x7dU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                    ? vlTOPp->CPU__DOT__mod_data__DOT__mem_125
                                                    : 
                                                   ((0x7cU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                     ? vlTOPp->CPU__DOT__mod_data__DOT__mem_124
                                                     : 
                                                    ((0x7bU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                      ? vlTOPp->CPU__DOT__mod_data__DOT__mem_123
                                                      : 
                                                     ((0x7aU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                       ? vlTOPp->CPU__DOT__mod_data__DOT__mem_122
                                                       : 
                                                      ((0x79U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->CPU__DOT__data_addr)))
                                                        ? vlTOPp->CPU__DOT__mod_data__DOT__mem_121
                                                        : vlTOPp->CPU__DOT__mod_data__DOT___GEN_248)))))));
    vlTOPp->io_out = vlTOPp->CPU__DOT__mod_instruction_io_instruction;
}

void VCPU::_eval_initial(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_eval_initial\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VCPU::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::final\n"); );
    // Variables
    VCPU__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCPU::_eval_settle(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_eval_settle\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VCPU::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_out = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction_io_instruction = VL_RAND_RESET_I(32);
    CPU__DOT__pc = VL_RAND_RESET_I(32);
    CPU__DOT__instruction = VL_RAND_RESET_I(32);
    CPU__DOT__imm = VL_RAND_RESET_I(32);
    CPU__DOT__data_read = VL_RAND_RESET_I(32);
    CPU__DOT__data_addr = VL_RAND_RESET_I(5);
    CPU__DOT__data_write = VL_RAND_RESET_I(32);
    CPU__DOT__reg_read_addr_1 = VL_RAND_RESET_I(5);
    CPU__DOT__reg_read_addr_2 = VL_RAND_RESET_I(5);
    CPU__DOT__reg_write_addr = VL_RAND_RESET_I(5);
    CPU__DOT__reg_write_data = VL_RAND_RESET_I(32);
    CPU__DOT__alu_src_1 = VL_RAND_RESET_I(32);
    CPU__DOT__alu_src_2 = VL_RAND_RESET_I(32);
    CPU__DOT__pc_imm = VL_RAND_RESET_I(32);
    CPU__DOT__pc_ctrl = VL_RAND_RESET_I(8);
    CPU__DOT__imm_ctrl = VL_RAND_RESET_I(8);
    CPU__DOT__data_ctrl = VL_RAND_RESET_I(8);
    CPU__DOT__select_ctrl = VL_RAND_RESET_I(8);
    CPU__DOT__alu_ctrl = VL_RAND_RESET_I(8);
    CPU__DOT__reg_read_data_1 = VL_RAND_RESET_I(32);
    CPU__DOT__reg_read_data_2 = VL_RAND_RESET_I(32);
    CPU__DOT__alu_out = VL_RAND_RESET_I(32);
    CPU__DOT__mod_pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    CPU__DOT__mod_pc__DOT___pc_reg_T_1 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_pc__DOT___GEN_0 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_alu__DOT___T_11 = VL_RAND_RESET_I(1);
    CPU__DOT__mod_alu__DOT___T_14 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95, CPU__DOT__mod_alu__DOT___GEN_22);
    CPU__DOT__mod_ctrl__DOT___GEN_69 = VL_RAND_RESET_I(4);
    CPU__DOT__mod_ctrl__DOT___GEN_70 = VL_RAND_RESET_I(4);
    CPU__DOT__mod_ctrl__DOT___GEN_79 = VL_RAND_RESET_I(4);
    CPU__DOT__mod_ctrl__DOT___GEN_83 = VL_RAND_RESET_I(4);
    CPU__DOT__mod_ctrl__DOT___GEN_84 = VL_RAND_RESET_I(4);
    CPU__DOT__mod_data__DOT__mem_0 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_1 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_2 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_3 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_4 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_5 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_6 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_7 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_8 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_9 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_10 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_11 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_12 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_13 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_14 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_15 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_16 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_17 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_18 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_19 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_20 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_21 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_22 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_23 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_24 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_25 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_26 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_27 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_28 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_29 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_30 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_31 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_32 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_33 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_34 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_35 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_36 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_37 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_38 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_39 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_40 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_41 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_42 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_43 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_44 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_45 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_46 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_47 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_48 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_49 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_50 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_51 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_52 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_53 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_54 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_55 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_56 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_57 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_58 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_59 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_60 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_61 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_62 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_63 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_64 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_65 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_66 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_67 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_68 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_69 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_70 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_71 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_72 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_73 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_74 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_75 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_76 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_77 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_78 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_79 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_80 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_81 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_82 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_83 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_84 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_85 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_86 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_87 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_88 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_89 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_90 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_91 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_92 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_93 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_94 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_95 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_96 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_97 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_98 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_99 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_100 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_101 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_102 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_103 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_104 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_105 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_106 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_107 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_108 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_109 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_110 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_111 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_112 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_113 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_114 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_115 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_116 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_117 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_118 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_119 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_120 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_121 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_122 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_123 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_124 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_125 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_126 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT__mem_127 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_0 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_1 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_2 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_3 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_4 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_5 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_6 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_7 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_8 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_9 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_10 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_11 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_12 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_13 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_14 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_15 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_16 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_17 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_18 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_19 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_20 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_21 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_22 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_23 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_24 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_25 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_26 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_27 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_28 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_29 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_30 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_31 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_32 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_33 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_34 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_35 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_36 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_37 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_38 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_39 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_40 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_41 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_42 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_43 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_44 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_45 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_46 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_47 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_48 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_49 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_50 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_51 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_52 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_53 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_54 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_55 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_56 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_57 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_58 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_59 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_60 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_61 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_62 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_63 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_64 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_65 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_66 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_67 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_68 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_69 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_70 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_71 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_72 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_73 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_74 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_75 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_76 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_77 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_78 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_79 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_80 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_81 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_82 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_83 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_84 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_85 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_86 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_87 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_88 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_89 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_90 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_91 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_92 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_93 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_94 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_95 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_96 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_97 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_98 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_99 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_100 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_101 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_102 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_103 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_104 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_105 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_106 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_107 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_108 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_109 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_110 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_111 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_112 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_113 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_114 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_115 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_116 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_117 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_118 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_119 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_120 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_121 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_122 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_123 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_124 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_125 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_126 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_127 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_140 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_152 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_164 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_176 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_188 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_200 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_212 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_224 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_236 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_248 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_data__DOT___GEN_255 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_imm_gen__DOT___GEN_2 = VL_RAND_RESET_Q(47);
    VL_RAND_RESET_W(1047, CPU__DOT__mod_imm_gen__DOT___GEN_12);
    CPU__DOT__mod_instruction__DOT___GEN_13 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_26 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_39 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_52 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_65 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_78 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_91 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_104 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_instruction__DOT___GEN_117 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_0 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_1 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_2 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_3 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_4 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_5 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_6 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_7 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_8 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_9 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_10 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_11 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_12 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_13 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_14 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_15 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_16 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_17 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_18 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_19 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_20 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_21 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_22 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_23 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_24 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_25 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_26 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_27 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_28 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_29 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT__reg_30 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_21 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_52 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_62 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_63 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_64 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_65 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_66 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_67 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_68 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_69 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_70 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_71 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_72 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_73 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_74 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_75 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_76 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_77 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_78 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_79 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_80 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_81 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_82 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_83 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_84 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_85 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_86 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_87 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_88 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_89 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_90 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_91 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_92 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_372 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_373 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_374 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_375 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_376 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_377 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_378 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_379 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_380 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_381 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_382 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_383 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_384 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_385 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_386 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_387 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_388 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_389 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_390 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_391 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_392 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_393 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_394 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_395 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_396 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_397 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_398 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_399 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_400 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_401 = VL_RAND_RESET_I(32);
    CPU__DOT__mod_reg__DOT___GEN_402 = VL_RAND_RESET_I(32);
    __Vdly__CPU__DOT__pc_imm = VL_RAND_RESET_I(32);
}
