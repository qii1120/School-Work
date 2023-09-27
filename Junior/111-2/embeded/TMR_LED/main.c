//
// TMR_LED : change LED on/off by Timer1 interrupt
//
#include <stdio.h>
#include "NUC100Series.h"
#include "MCU_init.h"
#include "SYS_init.h"
#include "Seven_Segment.h"
#include "Scankey.h"

volatile uint8_t ledState =0;
int key=0,i,check,check2;
void Display_7seg(uint16_t value)
{
  uint8_t digit;
	digit = value / 1000;
	CloseSevenSegment();
	ShowSevenSegment(3,digit);
	CLK_SysTickDelay(5000);
			
	value = value - digit * 1000;
	digit = value / 100;
	CloseSevenSegment();
	ShowSevenSegment(2,digit);
	CLK_SysTickDelay(5000);

	value = value - digit * 100;
	digit = value / 10;
	CloseSevenSegment();
	ShowSevenSegment(1,digit);
	CLK_SysTickDelay(5000);

	value = value - digit * 10;
	digit = value;
	CloseSevenSegment();
	ShowSevenSegment(0,digit);
	CLK_SysTickDelay(5000);
}

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

void TMR1_IRQHandler(void)
{	
	ledState = ~ ledState;  // changing ON/OFF state
  if(ledState) PC12=0;
  else         PC12=1;
  TIMER_ClearIntFlag(TIMER1); // Clear Timer1 time-out interrupt flag
}

void Init_Timer1(void)
{
  TIMER_Open(TIMER1, TMR1_OPERATING_MODE, TMR1_OPERATING_FREQ);
  TIMER_EnableInt(TIMER1);
  NVIC_EnableIRQ(TMR1_IRQn);
  TIMER_Start(TIMER1);
}

int main(void)
{
  SYS_Init();   // Intialize System/Peripheral clocks & multi-function I/Os

  GPIO_SetMode(PC, BIT12, GPIO_MODE_OUTPUT); // set LED GPIO pin
	GPIO_SetMode(PB, BIT11, GPIO_MODE_OUTPUT);
 OpenSevenSegment();
	//while(1)
	//{
		while(key==0)
		{
			key = ScanKey();
			//check=key;
			//check2=key;
		}
		Init_Timer1();
		while(key!=-1)
		{
			//check2= ScanKey();
			for(i=0;i<50;i++)
				Display_7seg(key);
			/*if(check2!=check)
				break;*/
			key=key-1;
		}
		/*if(check2!=check)
		{
			key=0;
			continue;
		}*/
		Buzz(2);
		//break;
  //}
	while(1);
}

