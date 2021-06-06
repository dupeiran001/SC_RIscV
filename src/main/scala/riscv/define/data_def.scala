package riscv.define

import chisel3._

object data_def{
  val imm    = "b00000000".U
  val branch = "b00000001".U
  val jalr   = "b00000010".U
  val lb     = "b00000011".U
  val lh     = "b00000100".U
  val lw     = "b00000101".U
  val lbu    = "b00000110".U
  val lhu    = "b00000111".U
  val jal    = "b00001000".U
  val reg    = "b00001001".U
  val sb     = "b00001010".U
  val sh     = "b00001011".U
  val sw     = "b00001100".U
  val auipc  = "b00001101".U
  val lui    = "b00001110".U
}
