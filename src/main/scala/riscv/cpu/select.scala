package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object select extends Module{
  val io = IO(new Bundle{
    val select_ctrl = Input(UInt(8.W))
    val pc = Input(UInt(32.W))
    val imm = Input(UInt(32.W))
    val instruction = Input(UInt(32.W))
    val data_read = Input(UInt(32.W))
    val alu_out = Input(UInt(32.W))
    val reg_read_data_1 = Input(UInt(32.W))
    val reg_read_data_2 = Input(UInt(32.W))
    val data_addr = Output(UInt(32.W))
    val data_write = Output(UInt(32.W))
    val reg_read_addr_1 = Output(UInt(5.W))
    val reg_read_addr_2 = Output(UInt(5.W))
    val reg_write_addr = Output(UInt(5.W))
    val reg_write_data = Output(UInt(32.W))
    val alu_src_1 = Output(UInt(32.W))
    val alu_src_2 = Output(UInt(32.W))
    val pc_imm = Output(UInt(32.W))
  })

  io.data_addr  := io.instruction(11,7)
  io.data_write := io.alu_out
  io.reg_read_addr_1 := io.instruction(19,15)
  io.reg_read_addr_2 := io.instruction(24,20)
  io.reg_write_addr := io.instruction(11,7)
  io.reg_write_data := io.alu_out
  io.alu_src_1 := io.reg_read_data_1 
  io.alu_src_2 := io.reg_read_data_2
  io.pc_imm := io.alu_out

  switch(io.select_ctrl){
    is(select_def.auipc){
      io.reg_write_data := io.alu_out
      io.pc_imm := io.alu_out
      io.alu_src_1 := io.pc
      io.alu_src_2 := io.imm
    }
    is(select_def.branch){
      io.alu_src_1 := io.reg_read_data_1 
      io.alu_src_2 := io.reg_read_data_2
      when(io.alu_out === 1.U){
        io.pc_imm := io.pc + io.imm
      }
      .otherwise{
        io.pc_imm := io.pc + 4.U
      }
    }
    is(select_def.imm){
      io.alu_src_1 := io.reg_read_data_1
      io.alu_src_2 := io.imm
      io.data_write := io.alu_out
    }
    is(select_def.jal){
      io.alu_src_1 := io.pc
      io.alu_src_2 := io.imm
      io.pc_imm := io.alu_out 
      io.reg_write_data := io.pc + 4.U
    }
    is(select_def.jalr){
      io.alu_src_1 := io.reg_read_data_1
      io.alu_src_2 := io.imm
      io.pc_imm := io.alu_out
      io.reg_write_data := io.pc + 4.U
    }
    is(select_def.load){
      io.alu_src_1 := io.reg_read_data_1
      io.alu_src_2 := io.imm
      io.data_addr := io.alu_out
      io.reg_write_data := io.data_read
    }
    is(select_def.lui){
      io.reg_write_data := io.imm 
    }
    is(select_def.reg){
      io.alu_src_1 := io.reg_read_data_1
      io.alu_src_2 := io.reg_read_data_2
      io.reg_write_data := io.alu_out
    }
    is(select_def.save){
      io.alu_src_1 := io.reg_read_data_1 
      io.alu_src_2 := io.imm
      io.data_addr := io.alu_out
      io.data_write := io.reg_read_data_2
    }
  }
}
