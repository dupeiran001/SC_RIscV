package test

import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest._

import riscv.cpu._
import riscv.define._

class alu_tester  extends FlatSpec 
with ChiselScalatestTester with Matchers {
  "alu addi test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.addi)
      for(i <- 0x00000000 to 0xFFFFFFFF){
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U+j.U)
        }
      }
    }
  }

 "alu andi test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.andi)
      for(i <- 0x00000000 to 0xFFFFFFFF){
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U&j.U)
        }
      }
    }
  }

"alu subi test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.subi)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U-j.U)
        }
    }
  }

"alu ori test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.ori)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U|j.U)
        }
    }
  }

"alu slli test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.slli)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U<<j.U)
        }
    }
  }

"alu srli test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.srli)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U>>j.U)
        }
    }
  }

"alu srai test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.srai)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect((i>>>j).U)
        }
    }
  }

"alu xori test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.xori)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          alu.io.alu_out.expect(i.U ^ j.U)
        }
    }
  }

"alu slti test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.slti)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          when(i.S < j.S){
            alu.io.alu_out.expect(1.U)
          }.otherwise{
            alu.io.alu_out.expect(0.U)
          }
        }
    }
  }

"alu sltiu test" should "pass" in {
    test(new alu()){ alu=>
      alu.io.alu_ctrl.poke(alu_def.sltiu)
      for(i <- 0x00000000 to 0xFFFFFFFF)
        for(j <- 0x00000000 to 0xFFFFFFFF){
          alu.io.alu_src_1.poke(i.U)
          alu.io.alu_src_2.poke(j.U)
          when(i.U < j.U){
            alu.io.alu_out.expect(1.U)
          }.otherwise{
            alu.io.alu_out.expect(0.U)
          }
        }
    }
  }

}


