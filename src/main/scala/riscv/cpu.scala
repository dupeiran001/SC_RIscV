package riscv

import chisel3._
import chisel3.util._

import riscv.cpu._

object CPU extends Module {
  val io = IO(new Bundle{
    val out = Output(UInt(32.W))
  })

  val pc = Wire(UInt(32.W))
  val instruction = Wire(UInt(32.W))
  val imm = Wire(UInt(32.W))
  val data_read = Wire(UInt(32.W))
  val data_addr = Wire(UInt(5.W))
  val data_write = Wire(UInt(32.W))
  val reg_read_addr_1 = Wire(UInt(5.W))
  val reg_read_addr_2 = Wire(UInt(5.W))
  val reg_write_addr = Wire(UInt(5.W))
  val reg_write_data = Wire(UInt(32.W))
  val alu_src_1 = Wire(UInt(32.W))
  val alu_src_2 = Wire(UInt(32.W))
  val pc_imm = Wire(UInt(32.W))
  val pc_ctrl = Wire(UInt(8.W))
  val imm_ctrl = Wire(UInt(8.W))
  val data_ctrl = Wire(UInt(8.W))
  val select_ctrl = Wire(UInt(8.W))
  val reg_ctrl = Wire(UInt(8.W))
  val alu_ctrl = Wire(UInt(8.W))
  val reg_read_data_1 = Wire(UInt(32.W))
  val reg_read_data_2 = Wire(UInt(32.W))
  val alu_out = Wire(UInt(32.W))

  
  val mod_pc = Module(riscv.cpu.pc)
    mod_pc.io.pc_ctrl := pc_ctrl
    mod_pc.io.pc_imm  := pc_imm
    pc := mod_pc.io.pc
  val mod_alu = Module(riscv.cpu.alu)
    mod_alu.io.alu_ctrl := alu_ctrl
    mod_alu.io.alu_src_1 := alu_src_1
    mod_alu.io.alu_src_2 := alu_src_2
    alu_out := mod_alu.io.alu_out
  val mod_ctrl = Module(riscv.cpu.ctrl)
    mod_ctrl.io.instruction := instruction
    pc_ctrl := mod_ctrl.io.pc_ctrl
    imm_ctrl := mod_ctrl.io.imm_ctrl
    data_ctrl := mod_ctrl.io.data_ctrl
    select_ctrl := mod_ctrl.io.select_ctrl
    reg_ctrl := mod_ctrl.io.reg_ctrl
    alu_ctrl := mod_ctrl.io.alu_ctrl
  val mod_data = Module(riscv.cpu.data)
    mod_data.io.data_ctrl := data_ctrl
    mod_data.io.data_addr := data_addr
    mod_data.io.data_write := data_write
    data_read := mod_data.io.data_read
  val mod_imm_gen = Module(riscv.cpu.imm_gen)
    mod_imm_gen.io.imm_ctrl := imm_ctrl
    mod_imm_gen.io.instruction := instruction
    imm := mod_imm_gen.io.imm
  val mod_instruction = Module(riscv.cpu.instruction)
    mod_instruction.io.pc := pc
    instruction := mod_instruction.io.instruction
  val mod_select = Module(riscv.cpu.select)
    mod_select.io.select_ctrl := select_ctrl
    mod_select.io.imm := imm
    mod_select.io.pc := pc
    mod_select.io.instruction := instruction
    mod_select.io.data_read := data_read
    mod_select.io.alu_out := alu_out
    mod_select.io.reg_read_data_1 := reg_read_data_1
    mod_select.io.reg_read_data_2 := reg_read_data_2
    data_addr := mod_select.io.data_addr
    data_write := mod_select.io.data_write
    reg_read_addr_1 := mod_select.io.reg_read_addr_1
    reg_read_addr_2 := mod_select.io.reg_read_addr_2
    reg_write_addr := mod_select.io.reg_write_addr
    reg_write_data := mod_select.io.reg_write_data
    alu_src_1 := mod_select.io.alu_src_1
    alu_src_2 := mod_select.io.alu_src_2
    pc_imm := mod_select.io.pc_imm
  val mod_reg = Module(riscv.cpu.reg)
    mod_reg.io.reg_ctrl := reg_ctrl
    mod_reg.io.reg_read_addr_1 := reg_read_addr_1
    mod_reg.io.reg_read_addr_2 := reg_read_addr_2
    mod_reg.io.reg_write_addr  := reg_write_addr
    mod_reg.io.reg_write_data := reg_write_data
    reg_read_data_1 := mod_reg.io.reg_read_data_1
    reg_read_data_2 := mod_reg.io.reg_read_data_2
 
  io.out := instruction

/*   pc := mod_pc.io.pc */
  // instruction := mod_instruction.io.instruction
  // imm := mod_imm_gen.io.imm
  // data_read := mod_data.io.data_read
  // data_addr := mod_select.io.data_addr
  // data_write := mod_select.io.data_write
  // reg_read_addr_1 := mod_select.io.reg_read_addr_1
  // reg_read_addr_2 := mod_select.io.reg_read_addr_2
  // reg_write_addr := mod_select.io.reg_write_addr
  // reg_write_data := mod_select.io.reg_write_data
  // alu_src_1 := mod_select.io.alu_src_1
  // alu_src_2 := mod_select.io.alu_src_2
  // pc_imm := mod_select.io.pc_imm
  // pc_ctrl := mod_ctrl.io.pc_ctrl
  // imm_ctrl := mod_ctrl.io.imm_ctrl
  // data_ctrl := mod_ctrl.io.data_ctrl
  // select_ctrl := mod_ctrl.io.select_ctrl
  // reg_ctrl := mod_ctrl.io.reg_ctrl
  // alu_ctrl := mod_ctrl.io.alu_ctrl
  // reg_read_data_1 := mod_reg.io.reg_read_data_1
  // reg_read_data_2 := mod_reg.io.reg_read_data_2
  // alu_out := mod_alu.io.alu_out
  //
  //   mod_pc.io.pc_ctrl := pc_ctrl
  //   mod_pc.io.pc_imm  := pc_imm
  //   mod_instruction.io.pc := pc
  //   mod_imm_gen.io.imm_ctrl := imm_ctrl
  //   mod_imm_gen.io.instruction := instruction
  //   mod_data.io.data_ctrl := data_ctrl
  //   mod_data.io.data_addr := data_addr
  //   mod_data.io.data_write := data_write
  //   mod_select.io.select_ctrl := select_ctrl
  //   mod_select.io.imm := imm
  //   mod_select.io.pc := pc
  //   mod_select.io.instruction := instruction
  //   mod_select.io.data_read := data_read
  //   mod_select.io.alu_out := alu_out
  //   mod_select.io.reg_read_data_1 := reg_read_data_1
  //   mod_select.io.reg_read_data_2 := reg_read_data_2
  //   mod_ctrl.io.instruction := instruction
  //   mod_reg.io.reg_ctrl := reg_ctrl
  //   mod_reg.io.reg_read_addr_1 := reg_read_addr_1
  //   mod_reg.io.reg_read_addr_2 := reg_read_addr_2
  //   mod_reg.io.reg_write_addr  := reg_write_addr
  //   mod_reg.io.reg_write_data := reg_write_data
  //   mod_alu.io.alu_ctrl := alu_ctrl
  //   mod_alu.io.alu_src_1 := alu_src_1
  //   mod_alu.io.alu_src_2 := alu_src_2
 //
/*  */
 // this way of connection isn't functional
  /*  this.pc.io <> this.alu.io */
   // this.pc.io <> this.ctrl.io
   // this.pc.io <> this.data.io
   // this.pc.io <> this.imm_gen.io
   // this.pc.io <> this.instruction.io
   // this.pc.io <> this.select.io
   // this.pc.io <> this.reg.io
 //
   // this.alu.io <> this.ctrl.io
   // this.alu.io <> this.data.io
   // this.alu.io <> this.imm_gen.io
   // this.alu.io <> this.instruction.io
   // this.alu.io <> this.select.io
   // this.alu.io <> this.reg.io
 //
   // this.ctrl.io <> this.data.io
   // this.ctrl.io <> this.imm_gen.io
   // this.ctrl.io <> this.instruction.io
   // this.ctrl.io <> this.select.io
   // this.ctrl.io <> this.reg.io
 //
   // this.data.io <> this.imm_gen.io
   // this.data.io <> this.instruction.io
   // this.data.io <> this.select.io
   // this.data.io <> this.reg.io
 //
   // this.imm_gen.io <> this.instruction.io
   // this.imm_gen.io <> this.select.io
   // this.imm_gen.io <> this.reg.io
 //
   // this.instruction.io <> this.select.io
   // this.instruction.io <> this.reg.io
 //
   // this.select.io <> this.reg.io
/*  */
  /* def connect() = { */
    // pc.io.pc_ctrl := ctrl.io.pc_ctrl
    // pc.io.pc_imm  := select.io.pc_imm
    // instruction.io.pc := pc.io.pc
    // imm_gen.io.imm_ctrl := ctrl.io.imm_ctrl
    // imm_gen.io.instruction := instruction.io.instruction
    // data.io.data_ctrl := ctrl.io.data_ctrl
    // data.io.data_addr := select.io.data_addr
    // data.io.data_write := select.io.data_write
    // select.io.select_ctrl := ctrl.io.select_ctrl
    // select.io.imm := imm_gen.io.imm
    // select.io.pc := pc.io.pc
    // select.io.instruction := instruction.io.instruction
    // select.io.data_read := data.io.data_read
    // select.io.alu_out := alu.io.alu_out
    // select.io.reg_read_data_1 := reg.io.reg_read_data_1
    // select.io.reg_read_data_2 := reg.io.reg_read_data_2
    // ctrl.io.instruction := instruction.io.instruction
    // reg.io.reg_ctrl := ctrl.io.reg_ctrl
    // reg.io.reg_read_addr_1 := select.io.reg_read_addr_1
    // reg.io.reg_read_addr_2 := select.io.reg_read_addr_2
    // reg.io.reg_write_addr  := select.io.reg_write_addr
    // reg.io.reg_write_data := select.io.reg_write_data
    // alu.io.alu_ctrl := ctrl.io.alu_ctrl
    // alu.io.alu_src_1 := select.io.alu_src_1
    // alu.io.alu_src_2 := select.io.alu_src_2
  /* } */
}
