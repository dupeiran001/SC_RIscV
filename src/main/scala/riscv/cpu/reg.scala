package riscv.cpu

import chisel3._

import riscv.define._

class reg extends Module{
  val io = IO(new Bundle{
    val reg_ctrl = Input(UInt(8.W))
    val reg_read_addr_1 = Input(UInt(5.W)) 
    val reg_read_addr_2 = Input(UInt(5.W)) 
    val reg_write_data = Input(UInt(32.W))
    val reg_write_addr  = Input(UInt(5.W))
    val reg_read_data_1 = Output(UInt(32.W))
    val reg_read_data_2 = Output(UInt(32.W))
  })
}
