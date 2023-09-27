//
// GPIO_LED : GPIO output to control an on-board red LED
// 
// EVB : Nu-LB-NUC140
// MCU : NUC140VE3CN

// low-active output control by GPC12

#include <stdio.h>
#include "NUC100Series.h"
#include "MCU_init.h"
#include "SYS_init.h"

void Buzz(int number)
{
	int i;
	for (i=0; i<number; i++) {
      PB11=0; // PB11 = 0 to turn on Buzzer
	  CLK_SysTickDelay(100000);	 // Delay 
	  PB11=1; // PB11 = 1 to turn off Buzzer	
	  CLK_SysTickDelay(100000);	 // Delay 
	}
}
int main(void)
{
    SYS_Init(); 
    GPIO_SetMode(PC, BIT12, GPIO_MODE_OUTPUT);
		GPIO_SetMode(PB, BIT11, GPIO_MODE_OUTPUT);
	
    while(1) {
			PC12 =0; // turn on LED
			Buzz(1);
			CLK_SysTickDelay(100000);	 // Delay 
			PC12 =1; // turn off LED
			CLK_SysTickDelay(100000);
			PC13 =0;			// Delay 
			Buzz(1);			
			CLK_SysTickDelay(100000);
			PC13 =1;			
			CLK_SysTickDelay(100000);
			PC14 =0; // turn on LED
			Buzz(1);
			CLK_SysTickDelay(100000);	 // Delay 
			PC14 =1; // turn off LED
			CLK_SysTickDelay(100000);
			PC15 =0;			// Delay 		
			Buzz(1);
			CLK_SysTickDelay(100000);
			PC15 =1;			
			CLK_SysTickDelay(100000);
			PC14 =0; // turn on LED
			Buzz(1);
			CLK_SysTickDelay(100000);	 // Delay 
			PC14 =1; // turn off LED
			CLK_SysTickDelay(100000);
			PC13 =0;			// Delay 
			Buzz(1);			
			CLK_SysTickDelay(100000);
			PC13 =1;			
			CLK_SysTickDelay(100000);
		}
}
