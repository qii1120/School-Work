#include "Vcounter.h"
#include <memory>
#include <iostream>

int main(int, char**) {
        std::unique_ptr<Vcounter> dut(new Vcounter);
        dut->rst=1;
        printf("output1: %d\n", dut->q);
        dut->rst=0;
        for(int i=0; i<10; i++) {
                if(i==7)
                {
                    dut->rst=1;
                }
                dut->clk=1;
                dut->eval();
                dut->clk=0;
                dut->eval();
                dut->rst=0;
                printf("output3: %d\n", dut->q);
        }
        return 0;
}
