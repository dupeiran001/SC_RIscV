package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object data extends Module{
  val io = IO(new Bundle{
    val data_ctrl = Input(UInt(8.W))
    val data_addr = Input(UInt(32.W))
    val data_write = Input(UInt(32.W))
    val data_read = Output(UInt(32.W))
  })
  
  io.data_read := 0.U

  val mem = Reg(Vec(128,UInt(32.W)))
  
  when(reset.asBool())
  {
    for(i <- 0 to 127){
      mem(i) := "x00000000".U
    }
  }.otherwise{
  
  switch(io.data_ctrl){
    is(data_def.auipc){
      io.data_read := 0.U
    }
    is(data_def.branch){
      io.data_read := 0.U
    }
    is(data_def.imm){
      io.data_read := 0.U
    }
    is(data_def.jal){
      io.data_read := 0.U
    }
    is(data_def.jalr){
      io.data_read := 0.U
    }
    is(data_def.lb){
      when(mem(io.data_addr)(7) === 1.U){
        io.data_read := mem(io.data_addr)(7,0) + "xFFFFFF00".U
      }
      .otherwise{
        io.data_read := mem(io.data_addr)(7,0)
      }
    }
    is(data_def.lbu){
      io.data_read := mem(io.data_addr)(7,0)
    }
    is(data_def.lh){
      when(mem(io.data_addr)(15) === 1.U){
        io.data_read := mem(io.data_addr)(15,0) + "xFFFF0000".U
      }
      .otherwise{
        io.data_read := mem(io.data_addr)(15,0)
      }
    }
    is(data_def.lhu){
      io.data_read := mem(io.data_addr)(15,0)
    }
    is(data_def.lui){
      io.data_read := mem(io.data_addr)(31,12) << 12
    }
    is(data_def.lw){
      io.data_read := mem(io.data_addr)
    }
    is(data_def.reg){
      io.data_read := 0.U
    }
    is(data_def.sb){
      io.data_read := 0.U
      mem(io.data_addr) := io.data_write(7,0)
    }
    is(data_def.sh){
      io.data_read := 0.U
      mem(io.data_addr) := io.data_write(15,0)
    }
    is(data_def.sw){
      io.data_read := 0.U
      mem(io.data_addr) := io.data_write
    }
  }
  }
}


