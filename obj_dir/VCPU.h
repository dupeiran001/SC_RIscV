// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCPU_H_
#define VERILATED_VCPU_H_  // guard

#include "verilated_heavy.h"

//==========

class VCPU__Syms;

//----------

VL_MODULE(VCPU) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT(io_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ CPU__DOT__data_addr;
        CData/*4:0*/ CPU__DOT__reg_read_addr_1;
        CData/*4:0*/ CPU__DOT__reg_read_addr_2;
        CData/*4:0*/ CPU__DOT__reg_write_addr;
        CData/*7:0*/ CPU__DOT__pc_ctrl;
        CData/*7:0*/ CPU__DOT__imm_ctrl;
        CData/*7:0*/ CPU__DOT__data_ctrl;
        CData/*7:0*/ CPU__DOT__select_ctrl;
        CData/*7:0*/ CPU__DOT__alu_ctrl;
        CData/*0:0*/ CPU__DOT__mod_alu__DOT___T_11;
        CData/*0:0*/ CPU__DOT__mod_alu__DOT___T_14;
        CData/*3:0*/ CPU__DOT__mod_ctrl__DOT___GEN_69;
        CData/*3:0*/ CPU__DOT__mod_ctrl__DOT___GEN_70;
        CData/*3:0*/ CPU__DOT__mod_ctrl__DOT___GEN_79;
        CData/*3:0*/ CPU__DOT__mod_ctrl__DOT___GEN_83;
        CData/*3:0*/ CPU__DOT__mod_ctrl__DOT___GEN_84;
        IData/*31:0*/ CPU__DOT__mod_instruction_io_instruction;
        IData/*31:0*/ CPU__DOT__pc;
        IData/*31:0*/ CPU__DOT__instruction;
        IData/*31:0*/ CPU__DOT__imm;
        IData/*31:0*/ CPU__DOT__data_read;
        IData/*31:0*/ CPU__DOT__data_write;
        IData/*31:0*/ CPU__DOT__reg_write_data;
        IData/*31:0*/ CPU__DOT__alu_src_1;
        IData/*31:0*/ CPU__DOT__alu_src_2;
        IData/*31:0*/ CPU__DOT__pc_imm;
        IData/*31:0*/ CPU__DOT__reg_read_data_1;
        IData/*31:0*/ CPU__DOT__reg_read_data_2;
        IData/*31:0*/ CPU__DOT__alu_out;
        IData/*31:0*/ CPU__DOT__mod_pc__DOT__pc_reg;
        IData/*31:0*/ CPU__DOT__mod_pc__DOT___pc_reg_T_1;
        IData/*31:0*/ CPU__DOT__mod_pc__DOT___GEN_0;
        WData/*94:0*/ CPU__DOT__mod_alu__DOT___GEN_22[3];
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_0;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_1;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_2;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_3;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_4;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_5;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_6;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_7;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_8;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_9;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_10;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_11;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_12;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_13;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_14;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_15;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_16;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_17;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_18;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_19;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_20;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_21;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_22;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_23;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_24;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_25;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_26;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_27;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_28;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_29;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_30;
    };
    struct {
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_31;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_32;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_33;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_34;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_35;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_36;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_37;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_38;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_39;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_40;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_41;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_42;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_43;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_44;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_45;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_46;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_47;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_48;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_49;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_50;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_51;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_52;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_53;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_54;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_55;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_56;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_57;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_58;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_59;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_60;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_61;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_62;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_63;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_64;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_65;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_66;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_67;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_68;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_69;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_70;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_71;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_72;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_73;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_74;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_75;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_76;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_77;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_78;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_79;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_80;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_81;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_82;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_83;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_84;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_85;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_86;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_87;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_88;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_89;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_90;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_91;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_92;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_93;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_94;
    };
    struct {
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_95;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_96;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_97;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_98;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_99;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_100;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_101;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_102;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_103;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_104;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_105;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_106;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_107;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_108;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_109;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_110;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_111;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_112;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_113;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_114;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_115;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_116;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_117;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_118;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_119;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_120;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_121;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_122;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_123;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_124;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_125;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_126;
        IData/*31:0*/ CPU__DOT__mod_data__DOT__mem_127;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_0;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_1;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_2;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_3;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_4;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_5;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_6;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_7;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_8;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_9;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_10;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_11;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_12;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_13;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_14;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_15;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_16;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_17;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_18;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_19;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_20;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_21;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_22;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_23;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_24;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_25;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_26;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_27;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_28;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_29;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_30;
    };
    struct {
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_31;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_32;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_33;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_34;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_35;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_36;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_37;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_38;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_39;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_40;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_41;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_42;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_43;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_44;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_45;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_46;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_47;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_48;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_49;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_50;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_51;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_52;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_53;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_54;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_55;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_56;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_57;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_58;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_59;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_60;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_61;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_62;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_63;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_64;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_65;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_66;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_67;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_68;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_69;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_70;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_71;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_72;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_73;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_74;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_75;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_76;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_77;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_78;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_79;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_80;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_81;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_82;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_83;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_84;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_85;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_86;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_87;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_88;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_89;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_90;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_91;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_92;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_93;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_94;
    };
    struct {
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_95;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_96;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_97;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_98;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_99;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_100;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_101;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_102;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_103;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_104;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_105;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_106;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_107;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_108;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_109;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_110;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_111;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_112;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_113;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_114;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_115;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_116;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_117;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_118;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_119;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_120;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_121;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_122;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_123;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_124;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_125;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_126;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_127;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_140;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_152;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_164;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_176;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_188;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_200;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_212;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_224;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_236;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_248;
        IData/*31:0*/ CPU__DOT__mod_data__DOT___GEN_255;
        WData/*1046:0*/ CPU__DOT__mod_imm_gen__DOT___GEN_12[33];
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_13;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_26;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_39;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_52;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_65;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_78;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_91;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_104;
        IData/*31:0*/ CPU__DOT__mod_instruction__DOT___GEN_117;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_0;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_1;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_2;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_3;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_4;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_5;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_6;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_7;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_8;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_9;
    };
    struct {
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_10;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_11;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_12;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_13;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_14;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_15;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_16;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_17;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_18;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_19;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_20;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_21;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_22;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_23;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_24;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_25;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_26;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_27;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_28;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_29;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT__reg_30;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_21;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_52;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_62;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_63;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_64;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_65;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_66;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_67;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_68;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_69;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_70;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_71;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_72;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_73;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_74;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_75;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_76;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_77;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_78;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_79;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_80;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_81;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_82;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_83;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_84;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_85;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_86;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_87;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_88;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_89;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_90;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_91;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_92;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_372;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_373;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_374;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_375;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_376;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_377;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_378;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_379;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_380;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_381;
    };
    struct {
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_382;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_383;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_384;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_385;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_386;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_387;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_388;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_389;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_390;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_391;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_392;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_393;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_394;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_395;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_396;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_397;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_398;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_399;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_400;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_401;
        IData/*31:0*/ CPU__DOT__mod_reg__DOT___GEN_402;
        QData/*46:0*/ CPU__DOT__mod_imm_gen__DOT___GEN_2;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ __Vdly__CPU__DOT__pc_imm;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCPU__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCPU);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCPU(VerilatedContext* contextp, const char* name = "TOP");
    VCPU(const char* name = "TOP")
      : VCPU(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VCPU();
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(VCPU__Syms* __restrict vlSymsp);
    void __Vconfigure(VCPU__Syms* symsp, bool first);
  private:
    static QData _change_request(VCPU__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCPU__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VCPU__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCPU__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VCPU__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VCPU__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VCPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
