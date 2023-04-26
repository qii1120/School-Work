#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vcounter.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VerilatedVcdC *tfp = new VerilatedVcdC();

    Vcounter *top = new Vcounter("top");
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    while (sc_time_stamp() < 8 && !Verilated::gotFinish())
    {
        top->clk = 1;
        top->rst = 0;
        top->eval();
        top->clk = 0;
        top->rst = 0;
        top->eval();
        printf("time=%ld\n", main_time);
        tfp->dump(main_time); // dump wave
        main_time++;
    }
    top->final();
    tfp->close();
    delete top;
    return 0;
}
