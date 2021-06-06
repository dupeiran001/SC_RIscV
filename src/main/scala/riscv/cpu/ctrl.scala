package riscv.cpu

import chisel3._

class ctrl extends Module{
  val io = IO(new Bundle{
    val instruction = Input(UInt(32.W))
    val pc_ctrl = Output(UInt(8.W))
    val imm_ctrl = Output(UInt(8.W))
    val data_ctrl = Output(UInt(8.W))
    val select_ctrl = Output(UInt(8.W))
    val reg_ctrl = Output(UInt(8.W))
    val alu_ctrl = Output(UInt(8.W))
  })
}
