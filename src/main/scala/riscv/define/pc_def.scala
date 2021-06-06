package riscv.define

import chisel3._

object pc_def{
  val add4   = "b00000000".U
  val branch = "b00000001".U
  val jalr   = "b00000010".U
  val auipc  = "b00000011".U
}
