package test

import chisel3._
import org.scalatest._
import chiseltest._

import riscv.cpu._
import riscv.define._

class imm_tester extends FlatSpec with ChiselScalatestTester 
  with Matchers{
    "imm test" should "pass" in{
      test(imm_gen) { imm=>
        imm.io.instruction.poke("x1234516f".U)
        imm.io.imm_ctrl.poke(imm_def.jal)
        imm.io.imm.expect("b00000000000001000101100100100010".U)
      }
    }
  }
