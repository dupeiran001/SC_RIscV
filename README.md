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

