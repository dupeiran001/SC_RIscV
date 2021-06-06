package riscv.cpu

import chisel3._

class data extends Module{
  val io = IO(new Bundle{
    val data_ctrl = Input(UInt(8.W))
    val data_addr = Input(UInt(5.W))
    val dataa_wwrite = Input(UInt(32.W))
    val data_read = Output(UInt(32.W))
  })
}

