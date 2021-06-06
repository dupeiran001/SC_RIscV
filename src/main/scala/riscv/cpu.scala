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
  
  this.pc.io <> this.alu.io
  this.pc.io <> this.ctrl.io
  this.pc.io <> this.data.io
  this.pc.io <> this.imm_gen.io
  this.pc.io <> this.instruction.io
  this.pc.io <> this.select.io
  this.pc.io <> this.reg.io

  this.alu.io <> this.ctrl.io
  this.alu.io <> this.data.io
  this.alu.io <> this.imm_gen.io
  this.alu.io <> this.instruction.io
  this.alu.io <> this.select.io
  this.alu.io <> this.reg.io

  this.ctrl.io <> this.data.io
  this.ctrl.io <> this.imm_gen.io
  this.ctrl.io <> this.instruction.io
  this.ctrl.io <> this.select.io
  this.ctrl.io <> this.reg.io

  this.data.io <> this.imm_gen.io
  this.data.io <> this.instruction.io
  this.data.io <> this.select.io
  this.data.io <> this.reg.io

  this.imm_gen.io <> this.instruction.io
  this.imm_gen.io <> this.select.io
  this.imm_gen.io <> this.reg.io

  this.instruction.io <> this.select.io
  this.instruction.io <> this.reg.io

  this.select.io <> this.reg.io
}
