;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.13, sbtVersion: 1.3.10
circuit CPU : 
  module pc : 
    input clock : Clock
    input reset : Reset
    output io : {flip pc_ctrl : UInt<8>, flip pc_imm : UInt<32>, pc : UInt<32>}
    
    node _io_pc_T = add(io.pc_ctrl, io.pc_imm) @[pc.scala 12:23]
    node _io_pc_T_1 = tail(_io_pc_T, 1) @[pc.scala 12:23]
    io.pc <= _io_pc_T_1 @[pc.scala 12:9]
    
  module alu : 
    input clock : Clock
    input reset : Reset
    output io : {flip alu_ctrl : UInt<8>, flip alu_src_1 : UInt<32>, flip alu_src_2 : UInt<32>, alu_out : UInt<32>}
    
    
  module ctrl : 
    input clock : Clock
    input reset : Reset
    output io : {flip instruction : UInt<32>, pc_ctrl : UInt<8>, imm_ctrl : UInt<8>, data_ctrl : UInt<8>, select_ctrl : UInt<8>, reg_ctrl : UInt<8>, alu_ctrl : UInt<8>}
    
    
  module data : 
    input clock : Clock
    input reset : Reset
    output io : {flip data_ctrl : UInt<8>, flip data_addr : UInt<5>, flip dataa_wwrite : UInt<32>, data_read : UInt<32>}
    
    
  module imm_gen : 
    input clock : Clock
    input reset : Reset
    output io : {flip imm_ctrl : UInt<8>, flip instruction : UInt<32>, imm : UInt<32>}
    
    
  module instruction : 
    input clock : Clock
    input reset : Reset
    output io : {flip pc : UInt<32>, Instruction : UInt<32>}
    
    
  module select : 
    input clock : Clock
    input reset : Reset
    output io : {flip select_ctrl : UInt<8>, flip imm : UInt<32>, flip instruction : UInt<32>, flip data_read : UInt<32>, flip alu_out : UInt<32>, flip reg_read_data_1 : UInt<32>, flip reg_read_data_2 : UInt<32>, data_addr : UInt<5>, data_write : UInt<32>, reg_read_addr_1 : UInt<5>, reg_read_addr_2 : UInt<5>, reg_write_addr : UInt<5>, reg_write_data : UInt<32>, alu_src_1 : UInt<32>, alu_src_2 : UInt<32>, pc_imm : UInt<32>}
    
    
  module reg : 
    input clock : Clock
    input reset : Reset
    output io : {flip reg_ctrl : UInt<8>, flip reg_read_addr_1 : UInt<5>, flip reg_read_addr_2 : UInt<5>, flip reg_write_data : UInt<32>, reg_read_data_1 : UInt<32>, reg_read_data_2 : UInt<32>}
    
    
  module CPU : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<32>, flip b : UInt<8>, c : UInt<32>}
    
    inst pc of pc @[cpu.scala 15:18]
    pc.clock <= clock
    pc.reset <= reset
    inst alu of alu @[cpu.scala 16:19]
    alu.clock <= clock
    alu.reset <= reset
    inst ctrl of ctrl @[cpu.scala 17:20]
    ctrl.clock <= clock
    ctrl.reset <= reset
    inst data of data @[cpu.scala 18:20]
    data.clock <= clock
    data.reset <= reset
    inst imm_gen of imm_gen @[cpu.scala 19:23]
    imm_gen.clock <= clock
    imm_gen.reset <= reset
    inst instruction of instruction @[cpu.scala 20:27]
    instruction.clock <= clock
    instruction.reset <= reset
    inst select of select @[cpu.scala 21:22]
    select.clock <= clock
    select.reset <= reset
    inst reg of reg @[cpu.scala 22:19]
    reg.clock <= clock
    reg.reset <= reset
    
