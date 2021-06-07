/* verilator lint_off DECLFILENAME */
#include "../obj_dir/VCPU.h"

#include "include/verilated.h"

int main(int argc , char** argv , char** env)
{
  Verilated::commandArgs(argc,argv);
  VCPU *top = new VCPU;
  while(!Verilated::gotFinish()) {top->eval();}
  delete top;
  exit(0);
}
