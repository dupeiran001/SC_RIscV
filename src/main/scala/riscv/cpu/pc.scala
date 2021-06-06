package riscv.cpu

import chisel3._

import riscv.define._

class pc extends Module{
  val io = IO(new Bundle {
    val pc_ctrl = Input(UInt(8.W))
    val pc_imm = Input(UInt(32.W))
    val pc = Output(UInt(32.W))
  })
}
