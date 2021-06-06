package riscv.cpu

import chisel3._

class instruction extends Module {
  val io = IO(new Bundle{
    val pc = Input(UInt(32.W))
    val Instruction = Output(UInt(32.W))
  })
}


