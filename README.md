Single Cycle RiscV CPU
=======================

You can follow the building process on my blog [My Blog](https://dupeiran.tech/index.php/2021/06/01/risc-v-cpu-%e7%bc%96%e5%86%99-0x00/)

## Chisel3 is used, requireing sbt and java 8 installed

### Dependencies

#### JDK 8 or newer

We recommend LTS releases Java 8 and Java 11. You can install the JDK as recommended by your operating system, or use the prebuilt binaries from [AdoptOpenJDK](https://adoptopenjdk.net/).

#### SBT

SBT is the most common built tool in the Scala community. You can download it [here](https://www.scala-sbt.org/download.html).  

### How to get started

#### Clone the project

This repository is a template CPU with a simulator scripts. You can use it to run your codes generated with riscv toolchain.

### Prepare your RISC-V toolcahin

RISC-V toolchain is available [here](https://github.com/riscv/riscv-gnu-toolchain)

also,riscv-tests is needed [here](https://github.com/riscv/riscv-tests)

and verilator is needed [here](https://github.com/verilator/verilator)

these are all included in the git submodule, you can use

```git
  git submodule update
```

to get these tools, these will all needed in the simulating process

ofcource you can prepare your own tools, but should be sure the command is available

### How to use the cpu?

you can use

```shell
make
```

to compile riscv asm to hex format

and the script will fill it in the instruction.scala

so don't edit initial code in the instruction.scala

edit it in the ./sim/code/main.asm

this requires your command "riscv32-unknown-elf-xxx"

series tool can work, just install  it on the riscv official github respositoty

there are some other options for makefile:

```shell
make full # show sbt full stack trace
make test # run test modules 
```

the generated cpu will be the generated/riscv/CPU.v

which include all modules you define

you should add a top testbench which gives cpu module clock , reset and out signal

remember, the reset is positive enable(rst_p).


#### About tests 

test file should be put in the src/test/scala folder

the main.scala file is the entrance for generating the whole cpu module

just leave it alone, unless change the sbt build command in the makefile

there is a sample test file for imm_gen module, named imm_test.scala

this is a common chisel test example, you can use poke, expect to test module input and output

