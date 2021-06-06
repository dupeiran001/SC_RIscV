package riscv

import chisel3._
import chisel3.util._

import riscv.cpu._

class CPU extends Module {
  val io = IO(new Bundle{
  })
  
  val pc = Module(new pc())
  val alu = Module(new alu())
  val ctrl = Module(new ctrl())
  val data = Module(new data())
  val imm_gen = Module(new imm_gen())
  val instruction = Module(new instruction())
  val select = Module(new select())
  val reg = Module(new reg())
   
  // this way of connection isn't functional
  // this.pc.io <> this.alu.io
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

  def connect() = {
    this.pc.io.pc_ctrl := this.ctrl.io.pc_ctrl
    this.pc.io.pc_imm  := this.select.io.pc_imm
    this.instruction.io.pc := this.pc.io.pc
    this.imm_gen.io.imm_ctrl := this.ctrl.io.imm_ctrl
    this.imm_gen.io.instruction := this.instruction.io.instruction
    this.data.io.data_ctrl := this.ctrl.io.data_ctrl
    this.data.io.data_addr := this.select.io.data_addr
    this.data.io.dataa_write := this.select.io.data_write
    this.select.io.select_ctrl := this.ctrl.io.select_ctrl
    this.select.io.imm := this.imm_gen.io.imm
    this.select.io.pc := this.pc.io.pc
    this.select.io.instruction := this.instruction.io.instruction
    this.select.io.data_read := this.data.io.data_read
    this.select.io.alu_out := this.alu.io.alu_out
    this.select.io.reg_read_data_1 := this.reg.io.reg_read_data_1
    this.select.io.reg_read_data_2 := this.reg.io.reg_read_data_2
    this.ctrl.io.instruction := this.instruction.io.instruction
    this.reg.io.reg_ctrl := this.ctrl.io.reg_ctrl
    this.reg.io.reg_read_addr_1 := this.select.io.reg_read_addr_1
    this.reg.io.reg_read_addr_2 := this.select.io.reg_read_addr_2
    this.reg.io.reg_write_addr  := this.select.io.reg_write_addr
    this.reg.io.reg_write_data := this.select.io.reg_write_data
    this.alu.io.alu_ctrl := this.ctrl.io.alu_ctrl
    this.alu.io.alu_src_1 := this.select.io.alu_src_1
    this.alu.io.alu_src_2 := this.select.io.alu_src_2
  }
}
