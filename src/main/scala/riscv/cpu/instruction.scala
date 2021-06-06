package riscv.cpu

import chisel3._

import riscv.define._

class instruction extends Module {
  val io = IO(new Bundle{
    val pc = Input(UInt(32.W))
    val instruction = Output(UInt(32.W))
  })
}


