package riscv.cpu

import chisel3._

class imm_gen extends Module{
  val io = IO(new Bundle{
    val imm_ctrl = Input(UInt(8.W))
    val instruction = Input(UInt(32.W))
    val imm = Output(UInt(32.W))
  })
}


