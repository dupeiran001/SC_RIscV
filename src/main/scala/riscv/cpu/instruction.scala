
package riscv.cpu

import chisel3._

import riscv.define._

object instruction extends Module {
  val io = IO(new Bundle{
    val pc = Input(UInt(32.W))
    val instruction = Output(UInt(32.W))
  })


  val ins_mem = Reg(Vec(127,UInt(32.W)))
  var i = 0
  //init instruction memory from file
  when(reset.toBool()){
  io.instruction := 0.U
    //scala.io.Source.fromFile("/home/dpr/Develop/chisel/SC_RiscV/sim/code/main.elf").getLines().foreach{
    //  line=>
    //   ins_mem(i) := //("\"x"+line+"\"").U
    /////////////// fill script start ////////////////
///////// auto fill start , will be auto filled by make //////////
ins_mem{0}:="x00106213".U
ins_mem{1}:="x00206293".U
ins_mem{2}:="x00106093".U
ins_mem{3}:="x00206093".U
ins_mem{4}:="x00306093".U
ins_mem{5}:="x00406093".U
ins_mem{6}:="x00506093".U
ins_mem{7}:="x00606093".U
ins_mem{8}:="x00706093".U
ins_mem{9}:="x00806093".U
ins_mem{10}:="x00906093".U
ins_mem{11}:="x01006093".U
ins_mem{12}:="x01206093".U
ins_mem{13}:="x01306093".U
ins_mem{14}:="x01406093".U
ins_mem{15}:="x01506093".U
ins_mem{16}:="x01606093".U
ins_mem{17}:="x01706093".U
ins_mem{18}:="x01806093".U
ins_mem{19}:="x01906093".U
ins_mem{20}:="x02006093".U
ins_mem{21}:="x02106093".U
ins_mem{22}:="x02206093".U
ins_mem{23}:="x02306093".U
ins_mem{24}:="x02406093".U
ins_mem{25}:="x02506093".U
ins_mem{26}:="x02606093".U
ins_mem{27}:="x02706093".U
ins_mem{28}:="x02806093".U
ins_mem{29}:="x02906093".U
ins_mem{30}:="x03006093".U
ins_mem{31}:="x00521463".U
ins_mem{32}:="x0000006f".U
ins_mem{33}:="x03106093".U
ins_mem{34}:="x03206093".U
ins_mem{35}:="x03306093".U
ins_mem{36}:="x03406093".U
ins_mem{37}:="x03506093".U
ins_mem{38}:="x03606093".U
ins_mem{39}:="x03706093".U
ins_mem{40}:="x03806093".U
ins_mem{41}:="x03906093".U
ins_mem{42}:="x04006093".U
ins_mem{43}:="x04106093".U
ins_mem{44}:="x04206093".U
ins_mem{45}:="x04306093".U
ins_mem{46}:="x04406093".U
ins_mem{47}:="x04506093".U
ins_mem{48}:="x04606093".U
ins_mem{49}:="x04706093".U
ins_mem{50}:="x04806093".U
ins_mem{51}:="x04906093".U
    /////////////// fill script end ////////////////
  }.otherwise{
   io.instruction := ins_mem(io.pc / 4.U)
  }
}
