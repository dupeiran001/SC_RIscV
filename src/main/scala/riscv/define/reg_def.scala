package riscv.define

import chisel3._

object reg_def{
  val imm    = "b00000000".U
  val branch = "b00000001".U
  val jalr   = "b00000010".U
  val load   = "b00000011".U
  val jal    = "b00000100".U
  val reg    = "b00000101".U
  val save   = "b00000110".U
  val auipc  = "b00000111".U
  val lui    = "b00001000".U
}
