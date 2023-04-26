#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "VALU_1.h"
#include "verilated_vcd_c.h"
vluint64_t main_time = 0; 

double sc_time_stamp(int len)
 {
     return (main_time%len);
 }

int main(int argc,char **argv)
{
     Verilated::commandArgs(argc,argv);
     Verilated::traceEverOn(true); 

     VerilatedVcdC* tfp = new VerilatedVcdC(); 

     VALU_1 *top = new VALU_1("top");
     top->trace(tfp, 0);
     tfp->open("wave.vcd"); 

    int pos=0;
    top->c_in = 0;
     while(sc_time_stamp(6) < 5 && !Verilated::gotFinish())
     {  
        top->a = 0;
        top->b = 1;
        top->sel = rand() % 0x3;
        top->eval();
        printf("sel: %d cin: %d cout: %d result: %d\n", top->sel, top->c_in, top->c_out, top->result);
        tfp->dump(main_time); //dump wave
        main_time += 1; 
        if(top->c_in==0) top->c_in = 1;
     }
     top->final();
     tfp->close();
     delete top;
     return 0;
}
