package riscv.cpu

import chisel3._
import chisel3.util._

import riscv.define._

object ctrl extends Module{
  val io = IO(new Bundle{
    val instruction = Input(UInt(32.W))
    val pc_ctrl = Output(UInt(8.W))
    val imm_ctrl = Output(UInt(8.W))
    val data_ctrl = Output(UInt(8.W))
    val select_ctrl = Output(UInt(8.W))
    val reg_ctrl = Output(UInt(8.W))
    val alu_ctrl = Output(UInt(8.W))
  })

  io.pc_ctrl := 0.U
  io.imm_ctrl := 0.U
  io.data_ctrl := 0.U
  io.select_ctrl := 0.U
  io.reg_ctrl := 0.U
  io.alu_ctrl := 0.U

  switch(io.instruction(6,0)){

    is(ctrl_def.b_type){
      io.data_ctrl   := data_def.branch
      io.imm_ctrl    := imm_def.branch
      io.pc_ctrl     := pc_def.branch
      io.reg_ctrl    := reg_def.branch
      io.select_ctrl := select_def.branch
      switch(io.instruction(14,12)){
        is(ctrl_def.beq){
          io.alu_ctrl := alu_def.eq
        }
        is(ctrl_def.bge){
          io.alu_ctrl := alu_def.ge
        }
        is(ctrl_def.bgeu){
          io.alu_ctrl := alu_def.geu
        }
        is(ctrl_def.blt){
          io.alu_ctrl := alu_def.lt
        }
        is(ctrl_def.bltu){
          io.alu_ctrl := alu_def.ltu
        }
        is(ctrl_def.bne){
          io.alu_ctrl := alu_def.ne
        }
      }
    }

    is(ctrl_def.i_type_imm){
      io.data_ctrl   := data_def.imm
      io.pc_ctrl     := pc_def.add4
      io.reg_ctrl    := reg_def.imm
      io.select_ctrl := select_def.imm
      switch(io.instruction(14,12)){
        is(ctrl_def.addi){
          io.alu_ctrl := alu_def.addi
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.slti){
          io.alu_ctrl := alu_def.slti
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.sltiu){
          io.alu_ctrl := alu_def.sltiu
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.xori){
          io.alu_ctrl := alu_def.xori
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.ori){
          io.alu_ctrl := alu_def.ori
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.andi){
          io.alu_ctrl := alu_def.andi
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.slli){
          io.alu_ctrl := alu_def.slli
          io.imm_ctrl := imm_def.imm_12
        }
        is(ctrl_def.srali){
          io.imm_ctrl := imm_def.imm_5
          when(io.instruction(30)===1.U)
          {
            io.alu_ctrl := alu_def.srai
          }
          .otherwise{
            io.alu_ctrl := alu_def.srli
          }
        }
      }
    }

    is(ctrl_def.i_type_jalr){
      io.alu_ctrl := alu_def.addi
      io.data_ctrl := data_def.jalr
      io.imm_ctrl := imm_def.jalr
      io.pc_ctrl := pc_def.jalr
      io.reg_ctrl := reg_def.jalr
      io.select_ctrl := select_def.jalr
    }
    is(ctrl_def.i_type_load){
      io.alu_ctrl := alu_def.addi
      io.imm_ctrl := imm_def.load
      io.pc_ctrl := pc_def.add4
      io.reg_ctrl := reg_def.load
      io.select_ctrl := select_def.load
      switch(io.instruction(14,12)){
        is(ctrl_def.lb){
          io.data_ctrl := data_def.lb
        }
        is(ctrl_def.lbu){
          io.data_ctrl := data_def.lbu
        }
        is(ctrl_def.lh){
          io.data_ctrl := data_def.lh
        }
        is(ctrl_def.lhu){
          io.data_ctrl := data_def.lhu
        }
        is(ctrl_def.lw){
          io.data_ctrl := data_def.lw
        }
      }
    }
    is(ctrl_def.j_type_jal){
      io.alu_ctrl := alu_def.addi
      io.data_ctrl := data_def.jal
      io.imm_ctrl := imm_def.jal
      io.pc_ctrl := pc_def.jal
      io.reg_ctrl := reg_def.jal
      io.select_ctrl := select_def.jal
    }
    is(ctrl_def.r_type){
      io.data_ctrl := data_def.reg
      io.imm_ctrl := imm_def.reg
      io.pc_ctrl := pc_def.add4
      io.reg_ctrl := reg_def.reg
      io.select_ctrl := select_def.reg
      switch(io.instruction(14,12)){
        is(ctrl_def.addsub){
          when(io.instruction(30) === 1.U){
            io.alu_ctrl := alu_def.subi
          }
          .otherwise{
            io.alu_ctrl := alu_def.addi
          }
        }
        is(ctrl_def.sll){
          io.alu_ctrl := alu_def.slli
        }
        is(ctrl_def.slt){
          io.alu_ctrl := alu_def.slti 
        }
        is(ctrl_def.sltu){
          io.alu_ctrl := alu_def.sltiu
        }
        is(ctrl_def.xor){
          io.alu_ctrl := alu_def.xori
        }
        is(ctrl_def.srlsra){
          when(io.instruction(30) === 1.U){
            io.alu_ctrl := alu_def.srai
          }
          .otherwise{
            io.alu_ctrl := alu_def.srli
          }
        }
        is(ctrl_def.or){
          io.alu_ctrl := alu_def.ori
        }
        is(ctrl_def.and){
          io.alu_ctrl := alu_def.andi
        }
      }
    }
    is(ctrl_def.s_type){
      io.alu_ctrl := alu_def.addi
      io.imm_ctrl := imm_def.save
      io.pc_ctrl := pc_def.add4
      io.reg_ctrl := reg_def.save
      io.select_ctrl := select_def.save
      switch(io.instruction(14,12)){
        is(ctrl_def.sb){
          io.data_ctrl := data_def.sb
        }
        is(ctrl_def.sh){
          io.data_ctrl := data_def.sh
        }
        is(ctrl_def.sw){
          io.data_ctrl := data_def.sw
        }
      }
    }
    is(ctrl_def.u_type_auipc){
      io.alu_ctrl := alu_def.addi
      io.data_ctrl := data_def.auipc
      io.imm_ctrl := imm_def.alupc
      io.pc_ctrl := pc_def.auipc
      io.reg_ctrl := reg_def.auipc
      io.select_ctrl := select_def.auipc
    }
    is(ctrl_def.u_type_lui){
      io.alu_ctrl := alu_def.addi
      io.data_ctrl := data_def.lui
      io.imm_ctrl := imm_def.lui
      io.pc_ctrl := pc_def.add4
      io.reg_ctrl := reg_def.lui
      io.select_ctrl := select_def.lui
    }
  }

}
