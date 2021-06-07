package main

import chisel3._
import chisel3.util._
import chisel3.tester._
import chisel3.tester.RawTester.test
import chisel3.stage.ChiselStage
import chiseltest._
import org.scalatest._

import riscv._
import riscv.cpu._

object main extends App{
     Driver.execute(args ,()=> CPU) 
  // Driver.execute(args , ()=> pc)
  // Driver.execute(args , ()=> alu)
  // Driver.execute(args , ()=> ctrl)
  // Driver.execute(args , ()=> instruction)
  // Driver.execute(args , ()=> select )
  // Driver.execute(args , ()=> data )
  // Driver.execute(args , ()=> reg )
  // Driver.execute(args , ()=> imm_gen) 
}
