#include "util.h"
#include "soc_reg.h"
#include "kprintf.h"

int main(int argc, char **argv) 
{
    int c=18;
    char *s = "Hello";
    kprintf("%d\n", c);
    c = 0x31;
    kprintf("DCLab 系統晶片%s %c, %d, %x, %p\n",s,c,c,c,s);
    sim_halt();
    return 0;
}
