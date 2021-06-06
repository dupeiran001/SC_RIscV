package riscv.cpu

import chisel3._

class alu extends Module{
  val io = IO(new Bundle{
    val alu_ctrl = Input(UInt(8.W))
    val alu_src_1 = Input(UInt(32.W))
    val alu_src_2 = Input(UInt(32.W))
    val alu_out = Output(UInt(32.W))
  })
}
