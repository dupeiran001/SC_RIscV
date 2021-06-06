package riscv.cpu

import chisel3._

import riscv.define._

class select extends Module{
  val io = IO(new Bundle{
    val select_ctrl = Input(UInt(8.W))
    val pc = Input(UInt(32.W))
    val imm = Input(UInt(32.W))
    val instruction = Input(UInt(32.W))
    val data_read = Input(UInt(32.W))
    val alu_out = Input(UInt(32.W))
    val reg_read_data_1 = Input(UInt(32.W))
    val reg_read_data_2 = Input(UInt(32.W))
    val data_addr = Output(UInt(5.W))
    val data_write = Output(UInt(32.W))
    val reg_read_addr_1 = Output(UInt(5.W))
    val reg_read_addr_2 = Output(UInt(5.W))
    val reg_write_addr = Output(UInt(5.W))
    val reg_write_data = Output(UInt(32.W))
    val alu_src_1 = Output(UInt(32.W))
    val alu_src_2 = Output(UInt(32.W))
    val pc_imm = Output(UInt(32.W))
  })
}
