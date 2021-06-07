package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object alu extends Module{
  val io = IO(new Bundle{
    val alu_ctrl = Input(UInt(8.W))
    val alu_src_1 = Input(UInt(32.W))
    val alu_src_2 = Input(UInt(32.W))
    val alu_out = Output(UInt(32.W))
  })
  
  io.alu_out := 0.U

  switch(io.alu_ctrl){
    is(alu_def.addi){
      io.alu_out := io.alu_src_1 + io.alu_src_2
    }
    is(alu_def.andi){
      io.alu_out := io.alu_src_1 & io.alu_src_2
    }
    is(alu_def.subi){
      io.alu_out := io.alu_src_1 - io.alu_src_2
    }
    is(alu_def.ori){
      io.alu_out := io.alu_src_1 | io.alu_src_2
    }
    is(alu_def.slli){
      io.alu_out := io.alu_src_1 << io.alu_src_2(5,0)
    }
    is(alu_def.srli){
      io.alu_out := io.alu_src_1 >> io.alu_src_2(5,0)
    }
    is(alu_def.srai){
      io.alu_out := (io.alu_src_1.asSInt() >> io.alu_src_2(5,0) ).asUInt()
    }
    is(alu_def.xori){
      io.alu_out := io.alu_src_1 ^ io.alu_src_2
    }
    is(alu_def.slti){
      when(io.alu_src_1.asSInt() < io.alu_src_2.asSInt()){
        io.alu_out := 1.U
      }
      when(io.alu_src_1 > io.alu_src_2){
        io.alu_out := 0.U
      }
    }
    is(alu_def.sltiu){
      when(io.alu_src_1 < io.alu_src_2){
        io.alu_out := 1.U
      }
      when(io.alu_src_1 > io.alu_src_2){
        io.alu_out := 0.U
      }
     }

    is(alu_def.eq){
      when(io.alu_src_1 === io.alu_src_2){
        io.alu_out := 1.U
      }.otherwise{
        io.alu_out := 0.U
      }
    }
    is(alu_def.ne){
      when(io.alu_src_1 =/= io.alu_src_2){
        io.alu_out := 1.U
      }.otherwise{
        io.alu_out := 0.U
      }
    }
    is(alu_def.lt){
      when(io.alu_src_1.asSInt() < io.alu_src_2.asSInt()){
        io.alu_out := 1.U
      }.otherwise{
        io.alu_out := 0.U
      }
    }
    is(alu_def.ge){
      when(io.alu_src_1.asSInt() >= io.alu_src_2.asSInt()){
        io.alu_out := 1.U
      }.otherwise{
        io.alu_out := 0.U
      }
    }
    is(alu_def.ltu){
      when(io.alu_src_1 < io.alu_src_2){
        io.alu_out := 1.U
      }.otherwise{
        io.alu_out := 0.U
      }
    }
    is(alu_def.geu){
      when(io.alu_src_1 >= io.alu_src_2){
        io.alu_out := 1.U
      }.otherwise{
        io.alu_out := 0.U
      }
    }
  }
}
