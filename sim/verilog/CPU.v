module CPU(
  input         clock,
  input         reset,
  output [31:0] io_out
);
  assign io_out = 32'h0; // @[cpu.scala 14:25 cpu.scala 65:17]
endmodule
