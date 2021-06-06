package riscv.define

import chisel3._

object imm_def{
  val imm_12 = "b00000000".U
  val branch = "b00000001".U
  val imm_5  = "b00000010".U
  val jalr   = "b00000011".U
  val load   = "b00000100".U
  val jal    = "b00000101".U
  val reg    = "b00000110".U
  val save   = "b00000111".U
  val alupc  = "b00001000".U
  val lui    = "b00001001".U
}
