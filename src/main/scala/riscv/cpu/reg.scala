package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object reg extends Module{
  val io = IO(new Bundle{
    val reg_ctrl = Input(UInt(8.W))
    val reg_read_addr_1 = Input(UInt(5.W)) 
    val reg_read_addr_2 = Input(UInt(5.W)) 
    val reg_write_data = Input(UInt(32.W))
    val reg_write_addr  = Input(UInt(5.W))
    val reg_read_data_1 = Output(UInt(32.W))
    val reg_read_data_2 = Output(UInt(32.W))
  })

  io.reg_read_data_1 := 0.U
  io.reg_read_data_2 := 0.U

  val reg = Reg(Vec(32,UInt(32.W)))

  io.reg_read_data_1 := reg(io.reg_read_addr_1 )
  io.reg_read_data_2 := reg(io.reg_read_addr_2 )
  reg(0) := 0.U

  switch(io.reg_ctrl){
    is(reg_def.auipc){
      reg(io.reg_write_addr) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.branch){
      reg(0) := 0.U
      // no op
    }
    is(reg_def.imm){
      reg(io.reg_write_addr) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.jal){
      reg(io.reg_write_addr) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.jalr){
      reg(io.reg_write_addr) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.load){
      reg(io.reg_write_addr) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.lui){
      reg(io.reg_write_addr) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.reg){
      reg(io.reg_write_addr ) := io.reg_write_data
      reg(0) := 0.U
    }
    is(reg_def.save){
      //no op
      reg(0) := 0.U
    }
  }
  when(io.reg_read_addr_1 === 0.U){
    io.reg_read_data_1 := 0.U
  }
  when(io.reg_read_addr_2 === 0.U){
    io.reg_read_data_2 := 0.U
  }
  reg(0) := 0.U

}
