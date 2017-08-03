/**
  
  Name: charlieplexing_low_power_flasher
  Purpose: Burning Man 2017 Flasher Gift Project

  @author Mike Tarrant
  @version  1.1   Add comments and some code cleanup
            1.0   Initial release
            
*/

#include "LowPower.h"   // RocketScream library so so we can use low-power sleep for timing delays
#include "charlieplexing.h"  //Charlieplexing library for a six LED display


void setup()
{
  pinMode(PIN_A, OUTPUT);  //  set initial state of charlieplexed display
  pinMode(PIN_B, OUTPUT); 
  pinMode(PIN_C, OUTPUT);  
}



void loop()   // Let's do this thing
{
    
  for(;;)   // this might be redundant with the void loop() above -- test later when I'm not waiting at the airport...
  {
    setLED(1);    // turn LED 1 on; low-pwr sleep for 60mS
    //delay(65);
    LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(2);    // turn LED 2 on; low-pwr sleep for 90mS (total)
    //delay(85);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(3);    // turn LED 3 on; low-pwr sleep for 120mS
    //delay(95);
     LowPower.idle(SLEEP_120MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(4);    // turn LED 4 on; low-pwr sleep for 90mS (total)
    //delay(85);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    
    setLED(5);    // turn LED 5 on; low-pwr sleep for 60mS
    //delay(65);
    LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
 
    
    setLED(6);    // turn LED 6 on; low-pwr sleep for 45mS (total)
    //delay(45);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    

    setLED(5);    // turn LED 5 on; low-pwr sleep for 30mS
    //delay(35);
    LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(6);    // turn LED 6 on; low-pwr sleep for 45mS (total)
    //delay(45);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(5);    // turn LED 5 on; low-pwr sleep for 60mS
    //delay(65);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(4);    // turn LED 4 on; low-pwr sleep for 90mS (total)
    //delay(85);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(3);    // turn LED 3 on; low-pwr sleep for 90mS (total)
    //delay(95); 
      LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
       
    setLED(2);    // turn LED 2 on; low-pwr sleep for 90mS (total)
    //delay(85); 
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    
    setLED(1);    // turn LED 1 on; low-pwr sleep for 60mS
    //delay(65); 
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(2);    // turn LED 2 on; low-pwr sleep for 60mS
    //delay(50); 
    LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);

    
    setLED(1);    // turn LED 1 on; low-pwr sleep for 30mS
    //delay(35); 
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(2);    // turn LED 2 on; low-pwr sleep for 15mS
    //delay(20); 
       LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(1);    // turn LED 1 on; low-pwr sleep for 30mS
    //delay(35);
    LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF); 

    setLED(2);    // turn LED 2 on; low-pwr sleep for 60mS
    //delay(50); 
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(0); // turn everything off, low-power sleep for 1 second, end of flash cycle
    LowPower.idle(SLEEP_1S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
              
  }   // let's do another flash cycle because the for(;;) loop runs forever


}   // end of the void loop()
