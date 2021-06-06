CC      := /bin/gcc
CXX     := /bin/g++
CXXFLAG := -j16 
OUTPUT  := sim/exec/sim_all

.PHONY: all test sim

all:
	sbt "test:runMain main.main --target-dir generated/riscv"
	cp generated/riscv/CPU.v sim/verilog/CPU.v

test:
	sbt test

sim: all verilate
	${CXX} ${CXXFLAG} ${DEST} -o ${OUTPUT}

include sim/Makefile
