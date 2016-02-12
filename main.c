// 0.Documentation Section 
// 
// Runs on LM4F120 or TM4C123
// Use the SysTick timer to request interrupts .
// Jonathan Valvano
// November 3, 2013


#include "PLL.h"
#include "tm4c123gh6pm.h"


void DisableInterrupts(void); // Disable interrupts
void EnableInterrupts(void);  // Enable interrupts
void WaitForInterrupt(void);  // low power mode
void Port_Init(void);        // start sound output
void SysInit(void); 				//initialize SysTick timer
void SysLoad(unsigned long period); //Load reload value


int main(void){
  PLL_Init();   
	
	
   
	// initialize output and interrupts
  EnableInterrupts();
  /*Initialize necessary ports and timers here*/
	
	 
  
}
// **************Sound_Init*********************
// Initialize SysTick periodic interrupts
// Input: none
// Output: none
void Port_Init(void){ unsigned long volatile delay;
  /*PORT Initialization*/
}

void SysLoad(unsigned long period){
	NVIC_ST_RELOAD_R = period -1;
	
}

void SysInit(void){
           
	NVIC_ST_CTRL_R = 0;   
   	
  NVIC_ST_CURRENT_R = 0;        // any write to current clears it
  NVIC_SYS_PRI3_R = NVIC_SYS_PRI3_R&0x00FFFFFF; // priority 0                
  NVIC_ST_CTRL_R = 0x00000007;  // enable with core clock and interrupts
	
} 
// Interrupt service routine
// 
void SysTick_Handler(void){
	
	
/*Your code goes here*/
	
			
	}



