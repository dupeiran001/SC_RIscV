
TARGET        := CPU.v
DEST          := sim_main.cpp
VERILATOR     := /bin/verilator 
VERILATE_FLAG := -Wall --cc ${TARGET} --exe --build ${DEST} 

.PHONY: verilate 

verilate:
	${VERILATOR} VERILATE_FLAG
