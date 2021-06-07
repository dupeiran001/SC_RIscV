package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object imm_gen extends Module{
  val io = IO(new Bundle{
    val imm_ctrl = Input(UInt(8.W))
    val instruction = Input(UInt(32.W))
    val imm = Output(UInt(32.W))
  })

  io.imm := 0.U

  switch(io.imm_ctrl){
    is(imm_def.alupc){
      io.imm := io.instruction(31,12) << 12.U
    }
    is(imm_def.branch){
      when(io.instruction(31) === 0.U){
        io.imm := io.instruction(7)<<11.U + io.instruction(30,25)<<5.U + io.instruction(11,8)<<1.U
      }
      .otherwise{
        io.imm := io.instruction(7)<<11.U + io.instruction(30,25)<<5.U + io.instruction(11,8)<<1.U //+ "xFFFFFFFF".U<<12.U
      }
    }
    is(imm_def.imm_5){
      io.imm := io.instruction(24,20)
    }
    is(imm_def.imm_12){
      io.imm := io.instruction(31,20)
    }
    is(imm_def.jal){
      when(io.instruction(31) === 0.U){
        io.imm := io.instruction(19,12)<<12.U + io.instruction(20)<<11.U + io.instruction(30,21)<<1.U
      }.otherwise{
        io.imm := io.instruction(19,12)<<12.U + io.instruction(20)<<11.U + io.instruction(30,21)<<1.U //+ "xFFFFFFFF".U<<12.U
      }
    }
    is(imm_def.jalr){
      when(io.instruction(31) === 0.U){
        io.imm := io.instruction(31,20)
      }
      .otherwise{
        io.imm := io.instruction(31,20) + "xFFFFFFFF".U<<11.U
      }
    }
    is(imm_def.load){
      when(io.instruction(31) === 0.U){
        io.imm := io.instruction(31,20)
      }
      .otherwise{
        io.imm := io.instruction(31,20) + "xFFFFFFFF".U<<11.U
      }
    }
    is(imm_def.lui){
      io.imm := io.instruction(31,12) << 12.U
    }
    is(imm_def.reg){
      io.imm := 0.U
    }
    is(imm_def.save){
      io.imm := io.instruction(31,25)<<5.U + io.instruction(11,7)
    }
  }
}


