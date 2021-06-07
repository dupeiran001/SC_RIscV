package riscv.cpu

import chisel3._

import riscv.define._

object instruction extends Module {
  val io = IO(new Bundle{
    val pc = Input(UInt(32.W))
    val instruction = Output(UInt(32.W))
  })

  io.instruction := 0.U

  val ins_mem = Reg(Vec(127,UInt(32.W)))
  var i = 0
  //init instruction memory from file
  when(reset.toBool()){
    //scala.io.Source.fromFile("/home/dpr/Develop/chisel/SC_RiscV/sim/code/main.elf").getLines().foreach{
    //  line=>
    //   ins_mem(i) := //("\"x"+line+"\"").U
          ///////////fill script start////////////
ins_mem{0}:="x0ff06093".U
ins_mem{1}:="xfffff137".U
  }.otherwise{
    io.instruction := ins_mem(io.pc / 4.U)
  }
}
