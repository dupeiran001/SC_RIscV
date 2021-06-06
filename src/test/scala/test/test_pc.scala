package test

import chisel3._
import chiseltest._
import org.scalatest._

import riscv.cpu._

class pc_tester  extends FlatSpec 
with ChiselScalatestTester with Matchers {
  "pc test" should "pass" in {
    test(new pc()){ pc=>
      pc.io.pc_ctrl.poke(2.U)
      pc.io.pc_imm.poke(3.U)
      pc.io.pc.expect(5.U)
      pc.io.pc_ctrl.poke(3.U)
      pc.io.pc.expect(6.U)
    }
  }
}


