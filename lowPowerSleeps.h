/**
  
  Name: lowPowerSleeps.h
  Purpose: Make it easier to call out (and change) low-power sleep "nap" values 
           Implemented in setLowPwrSleep():
             SLEEP_15MS
             SLEEP_30MS
             45MS = SLEEP_30MS + SLEEP_15MS
             SLEEP_60MS
             75MS = SLEEP_60MS + SLEEP_15MS
             90MS = SLEEP_60MS + SLEEP_30MS
             SLEEP_120MS
             SLEEP_1S
             SLEEP_8S
           
           Not implemented (yet):
             SLEEP_250MS
             SLEEP_500MS
             SLEEP_2S,
             SLEEP_4S,
             SLEEP_FOREVER

  @author Mike Tarrant
  @version  1.1   Add comments and some code cleanup
            1.0   Initial release
            
*/

#ifndef lowPowerSleeps_h
#define lowPowerSleeps_h

#include "LowPower.h"   // RocketScream library so so we can use their low-power sleep code for the timing delays

int sleepLength;        // How long to nap


void setLowPwrSleep(int sleepLength)	// function to easily call those sleep times
{

	if(sleepLength == 0)   // no sleep? doh!
	  {
		//  This must be a placeholder for a timing change, code creation typo, or an error.
	  }
  
  
	if(sleepLength == 15)   // sleep 15 milliseconds
	  {
		  LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);  // this is a RocketScream library function
	  }
    
    
	if(sleepLength == 30)   // sleep 30 milliseconds
	  {
		  LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
  
  
	if(sleepLength == 45)   // sleep 45 milliseconds (30mS + 15mS)
	  {
		  LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
		  LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
    
    
	  if(sleepLength == 60)   // sleep 60 milliseconds
	  {
		  LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
  
   
	if(sleepLength == 75)   // sleep 75 milliseconds (60mS + 15mS)
	  {
		  LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
		  LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
     
    
	if(sleepLength == 90)   // sleep 90 milliseconds (60mS + 30mS)
	  {
		  LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
		  LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
  

	if(sleepLength == 120)   // sleep 120 milliseconds
	  {
		  LowPower.idle(SLEEP_120MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
	
	
	if(sleepLength == 1000)   // sleep 1000 milliseconds (1 second)
	  {
		  LowPower.idle(SLEEP_1S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
	
  	
	if(sleepLength == 8000)   // sleep 8000 milliseconds (8 seconds)
	  {
		  LowPower.idle(SLEEP_8S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
	  }
	
	// Maybe put some future code here to catch sleepLength values that aren't one of the above?
	
}  //end of setLowPwrSleep() function

#endif  // end of lowPowerSleeps.h
