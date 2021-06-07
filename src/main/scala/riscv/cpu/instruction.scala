
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
    /////////////// fill script start ////////////////
///////// auto fill start , will be auto filled by make //////////
ins_mem{0}:="x18F06A13".U
ins_mem{1}:="x3FB95AB7".U
ins_mem{2}:="x015A6A33".U
ins_mem{3}:="x98765AB7".U
ins_mem{4}:="x345A8A93".U
ins_mem{5}:="xC00A0B13".U
ins_mem{6}:="x7BCA4B93".U
ins_mem{7}:="x034A3B13".U
ins_mem{8}:="xFFFA3B93".U
ins_mem{9}:="x765A7B13".U
ins_mem{10}:="xFFFA2B93".U
ins_mem{11}:="x414A8B33".U
ins_mem{12}:="x016A4BB3".U
ins_mem{13}:="x014A8B33".U
ins_mem{14}:="x414B0B33".U
ins_mem{15}:="x016BEBB3".U
ins_mem{16}:="x016BFBB3".U
ins_mem{17}:="x015A2B33".U
ins_mem{18}:="x015A3BB3".U
ins_mem{19}:="x00418193".U
ins_mem{20}:="x003A1B33".U
ins_mem{21}:="x003ADB33".U
ins_mem{22}:="x403ADB33".U
ins_mem{23}:="x010A9B93".U
ins_mem{24}:="x008ADB93".U
ins_mem{25}:="x408ADB93".U
ins_mem{26}:="x00000193".U
ins_mem{27}:="x0F500293".U
ins_mem{28}:="x0141A023".U
ins_mem{29}:="x0151A223".U
ins_mem{30}:="x0171A423".U
ins_mem{31}:="x01619223".U
ins_mem{32}:="x01419523".U
ins_mem{33}:="x005183A3".U
ins_mem{34}:="x005184A3".U
ins_mem{35}:="x00518423".U
ins_mem{36}:="x0001AB03".U
ins_mem{37}:="x0161A623".U
ins_mem{38}:="x00819B83".U
ins_mem{39}:="x0171A823".U
ins_mem{40}:="x0081DB83".U
ins_mem{41}:="x0141AA23".U
ins_mem{42}:="x00718B03".U
ins_mem{43}:="x0151AC23".U
ins_mem{44}:="x0071CB83".U
ins_mem{45}:="x0171AE23".U
ins_mem{46}:="x0181CB83".U
ins_mem{47}:="x0371A023".U
ins_mem{48}:="x0001A223".U
ins_mem{49}:="x009074B3".U
ins_mem{50}:="x015A1463".U
ins_mem{51}:="x00148493".U
ins_mem{52}:="x015A5463".U
ins_mem{53}:="x00148493".U
ins_mem{54}:="x015A7463".U
ins_mem{55}:="x00248493".U
ins_mem{56}:="x015A4463".U
ins_mem{57}:="x00348493".U
ins_mem{58}:="x015A6463".U
ins_mem{59}:="x00448493".U
ins_mem{60}:="x0181AC83".U
ins_mem{61}:="x019A8463".U
ins_mem{62}:="x00548493".U
ins_mem{63}:="x0091A223".U
ins_mem{64}:="x0041A503".U
ins_mem{65}:="x00C000EF".U
ins_mem{66}:="x00850513".U
ins_mem{67}:="x00A1A223".U
ins_mem{68}:="x45C56513".U
ins_mem{69}:="x00A1A223".U
ins_mem{70}:="x00008067".U
    /////////////// fill script end ////////////////
  }.otherwise{
   io.instruction := ins_mem(io.pc / 4.U)
  }
}
