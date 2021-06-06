package main

import chisel3._
import chisel3.util._
import chisel3.tester._
import chisel3.tester.RawTester.test
import chisel3.stage.ChiselStage
import chiseltest._
import org.scalatest._

import riscv._

object main extends App{
  Driver.execute(args , ()=>new CPU())
}
