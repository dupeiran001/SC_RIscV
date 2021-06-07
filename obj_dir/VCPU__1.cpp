// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU::_combo__TOP__4(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_combo__TOP__4\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_127 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_121 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_122 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_123 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_124 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_125 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_126 = 0U;
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
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_58 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_57 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_56 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_55 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_54 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_53 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_52 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_51 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_50 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_49 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_59 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_60 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_48 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_47 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_46 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_45 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_44 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_43 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_42 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_41 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_40 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_39 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_38 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_37 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_36 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_35 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_34 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_33 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_32 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_31 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_30 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_29 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_25 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_26 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_27 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_28 = 0U;
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
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_12 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_10 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_9 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_8 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_6 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_5 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_11 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_4 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_3 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_2 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_1 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_7 = 0U;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_0 = 0U;
        vlTOPp->CPU__DOT__mod_instruction_io_instruction = 0U;
    } else {
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_127 = vlTOPp->CPU__DOT__mod_data__DOT__mem_127;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_121 = vlTOPp->CPU__DOT__mod_data__DOT__mem_121;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_122 = vlTOPp->CPU__DOT__mod_data__DOT__mem_122;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_123 = vlTOPp->CPU__DOT__mod_data__DOT__mem_123;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_124 = vlTOPp->CPU__DOT__mod_data__DOT__mem_124;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_125 = vlTOPp->CPU__DOT__mod_data__DOT__mem_125;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_126 = vlTOPp->CPU__DOT__mod_data__DOT__mem_126;
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
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_58 = vlTOPp->CPU__DOT__mod_data__DOT__mem_58;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_57 = vlTOPp->CPU__DOT__mod_data__DOT__mem_57;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_56 = vlTOPp->CPU__DOT__mod_data__DOT__mem_56;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_55 = vlTOPp->CPU__DOT__mod_data__DOT__mem_55;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_54 = vlTOPp->CPU__DOT__mod_data__DOT__mem_54;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_53 = vlTOPp->CPU__DOT__mod_data__DOT__mem_53;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_52 = vlTOPp->CPU__DOT__mod_data__DOT__mem_52;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_51 = vlTOPp->CPU__DOT__mod_data__DOT__mem_51;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_50 = vlTOPp->CPU__DOT__mod_data__DOT__mem_50;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_49 = vlTOPp->CPU__DOT__mod_data__DOT__mem_49;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_59 = vlTOPp->CPU__DOT__mod_data__DOT__mem_59;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_60 = vlTOPp->CPU__DOT__mod_data__DOT__mem_60;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_48 = vlTOPp->CPU__DOT__mod_data__DOT__mem_48;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_47 = vlTOPp->CPU__DOT__mod_data__DOT__mem_47;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_46 = vlTOPp->CPU__DOT__mod_data__DOT__mem_46;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_45 = vlTOPp->CPU__DOT__mod_data__DOT__mem_45;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_44 = vlTOPp->CPU__DOT__mod_data__DOT__mem_44;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_43 = vlTOPp->CPU__DOT__mod_data__DOT__mem_43;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_42 = vlTOPp->CPU__DOT__mod_data__DOT__mem_42;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_41 = vlTOPp->CPU__DOT__mod_data__DOT__mem_41;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_40 = vlTOPp->CPU__DOT__mod_data__DOT__mem_40;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_39 = vlTOPp->CPU__DOT__mod_data__DOT__mem_39;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_38 = vlTOPp->CPU__DOT__mod_data__DOT__mem_38;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_37 = vlTOPp->CPU__DOT__mod_data__DOT__mem_37;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_36 = vlTOPp->CPU__DOT__mod_data__DOT__mem_36;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_35 = vlTOPp->CPU__DOT__mod_data__DOT__mem_35;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_34 = vlTOPp->CPU__DOT__mod_data__DOT__mem_34;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_33 = vlTOPp->CPU__DOT__mod_data__DOT__mem_33;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_32 = vlTOPp->CPU__DOT__mod_data__DOT__mem_32;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_31 = vlTOPp->CPU__DOT__mod_data__DOT__mem_31;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_30 = vlTOPp->CPU__DOT__mod_data__DOT__mem_30;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_29 = vlTOPp->CPU__DOT__mod_data__DOT__mem_29;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_25 = vlTOPp->CPU__DOT__mod_data__DOT__mem_25;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_26 = vlTOPp->CPU__DOT__mod_data__DOT__mem_26;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_27 = vlTOPp->CPU__DOT__mod_data__DOT__mem_27;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_28 = vlTOPp->CPU__DOT__mod_data__DOT__mem_28;
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
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_12 = vlTOPp->CPU__DOT__mod_data__DOT__mem_12;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_10 = vlTOPp->CPU__DOT__mod_data__DOT__mem_10;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_9 = vlTOPp->CPU__DOT__mod_data__DOT__mem_9;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_8 = vlTOPp->CPU__DOT__mod_data__DOT__mem_8;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_6 = vlTOPp->CPU__DOT__mod_data__DOT__mem_6;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_5 = vlTOPp->CPU__DOT__mod_data__DOT__mem_5;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_11 = vlTOPp->CPU__DOT__mod_data__DOT__mem_11;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_4 = vlTOPp->CPU__DOT__mod_data__DOT__mem_4;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_3 = vlTOPp->CPU__DOT__mod_data__DOT__mem_3;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_2 = vlTOPp->CPU__DOT__mod_data__DOT__mem_2;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_1 = vlTOPp->CPU__DOT__mod_data__DOT__mem_1;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_7 = vlTOPp->CPU__DOT__mod_data__DOT__mem_7;
        vlTOPp->CPU__DOT__mod_data__DOT___GEN_0 = vlTOPp->CPU__DOT__mod_data__DOT__mem_0;
        vlTOPp->CPU__DOT__mod_instruction_io_instruction 
            = ((0x7eU == (0x7fU & vlTOPp->CPU__DOT__pc))
                ? 0U : ((0x7dU == (0x7fU & vlTOPp->CPU__DOT__pc))
                         ? 0U : ((0x7cU == (0x7fU & vlTOPp->CPU__DOT__pc))
                                  ? 0U : ((0x7bU == 
                                           (0x7fU & vlTOPp->CPU__DOT__pc))
                                           ? 0U : (
                                                   (0x7aU 
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
                                                        : vlTOPp->CPU__DOT__mod_instruction__DOT___GEN_117)))))))));
    }
    vlTOPp->io_out = vlTOPp->CPU__DOT__mod_instruction_io_instruction;
}

void VCPU::_eval(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_eval\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VCPU::_change_request(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_change_request\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCPU::_change_request_1(VCPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_change_request_1\n"); );
    VCPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCPU::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
