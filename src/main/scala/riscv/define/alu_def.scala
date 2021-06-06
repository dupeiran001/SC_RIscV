package riscv.define

import chisel3._

object alu_def{
  val addi  = "b00000000".U
  val subi  = "b00000001".U
  val slti  = "b00000010".U
  val sltiu = "b00000011".U
  val xori  = "b00000100".U
  val ori   = "b00000101".U
  val andi  = "b00000110".U
  val slli  = "b00000111".U
  val srli  = "b00001000".U
  val srai  = "b00001001".U
  val eq    = "b00001010".U
  val ge    = "b00001011".U
  val ne    = "b00001100".U
  val lt    = "b00001101".U
  val ltu   = "b00001110".U
  val geu   = "b00001111".U
}
