CC      := /bin/gcc
CXX     := /bin/g++
CXXFLAG := -j16 
OUTPUT  := sim/exec/sim_all

.PHONY: all test sim

all: fill generate
	rm -rf ./generated
	sbt "test:runMain main.main --target-dir generated/riscv"
	./scripts/getVerilog
	cp generated/riscv/CPU.v sim/verilog/CPU.v
	cp generated/riscv/CPU.v ../../FPGA/project_1/project_1.srcs/sources_1/imports/riscv/CPU.v

full: fill generate 
	sbt "test:runMain main.main --target-dir generated/riscv --full-stacktrace"
	./scripts/getVerilog
	cp generated/riscv/CPU.v sim/verilog/CPU.v

test:
	sbt test

fill: generate
	./scripts/fill

sim: all verilate 
	${CXX} ${CXXFLAG} ${DEST} -o ${OUTPUT}

generate:
	./scripts/compile
	./scripts/show
#	cp /home/dpr/Downloads/Test_37_Instr2.dat ./sim/code/main.elf

include sim/Makefile
