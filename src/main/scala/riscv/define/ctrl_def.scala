package riscv.define

import chisel3._

object ctrl_def{
  val i_type_load = "b0000011".U
  val i_type_imm  = "b0010011".U
  val i_type_jalr = "b1100111".U
  val r_type      = "b0110011".U
  val b_type      = "b1100011".U
  val u_type_lui  = "b0110111".U
  val u_type_auipc= "b0010111".U
  val j_type_jal  = "b1101111".U
  val s_type      = "b0100011".U

  val beq  = "b000".U
  val bne  = "b001".U
  val blt  = "b100".U
  val bge  = "b101".U
  val bltu = "b110".U
  val bgeu = "b111".U

  val addi = "b000".U
  val slti = "b010".U
  val sltiu= "b011".U
  val xori = "b100".U
  val ori  = "b110".U
  val andi = "b111".U
  val slli = "b001".U
  val srali= "b101".U

  val lb   = "b000".U
  val lh   = "b001".U
  val lw   = "b010".U
  val lbu  = "b100".U
  val lhu  = "b101".U

  val addsub= "b000".U
  val sll   = "b001".U
  val slt   = "b010".U
  val sltu  = "b011".U
  val xor   = "b100".U
  val srlsra= "b101".U
  val or    = "b110".U
  val and   = "b111".U

  val sb    = "b000".U
  val sh    = "b001".U
  val sw    = "b010".U
}
