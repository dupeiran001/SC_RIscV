package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object pc extends Module{
  val io = IO(new Bundle {
    val pc_ctrl = Input(UInt(8.W))
    val pc_imm = Input(UInt(32.W))
    val pc = Output(UInt(32.W))
  })

  io.pc := 0.U

  val pc_reg = Reg(UInt(32.W))
  val tmp = Reg(Bool())
  
  io.pc := pc_reg
  when(reset.toBool){
    pc_reg := 0.U
    tmp := 0.B
  }.elsewhen(tmp === 0.B){
    tmp := 1.B
  }.otherwise{
  switch(io.pc_ctrl){
    is(pc_def.add4){
      pc_reg := pc_reg + 4.U
    }
    is(pc_def.auipc){
      pc_reg := io.pc_imm
    }
    is(pc_def.branch){
      pc_reg := io.pc_imm
    }
    is(pc_def.jalr){
      pc_reg := io.pc_imm 
    }
    is(pc_def.jal){
      pc_reg := io.pc_imm
    }
  }
  }
}
