/**
  
  Name: charlieplexing_low_power_flasher
  Purpose: Burning Man 2017 Flasher Gift Project

  @author Mike Tarrant
  @version  1.1   Add comments and some code cleanup
            1.0   Initial release
            
*/

#include "LowPower.h"   // RocketScream library so so we can use low-power sleep for timing delays
#include "charlieplexing.h"  //Charlieplexing library for a six LED display

const int lightThreshold = 200;  // LDR values > 200 indicate it's not dark out anymore
const int analogPinLDR = 0;  // make this a constant, so if we have to change it later, it'll be easy

void setup()
{
  pinMode(PIN_A, OUTPUT);  //  set initial state of charlieplexed display
  pinMode(PIN_B, OUTPUT); 
  pinMode(PIN_C, OUTPUT);  
}



void loop()   // Let's do this thing, flash if it's dark out; low-power waiting if it's light out
{
    
  //for(;;)   // this might be redundant with the void loop() above -- test later when I'm not waiting at the airport...
  
  while(analogRead(analogPinLDR) < lightThreshold)  // if the LDR value is < lightThreshold, it's night so we flash the LEDs
  {
    setLED(1);              // turn LED 1 on
    setLowPwrSleep(60);     // low-pwr sleep for 60mS
    //delay(65);
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(2);              // turn LED 2 on 
    setLowPwrSleep(90);     // low-pwr sleep for 90mS
    //delay(85);
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(3);              // turn LED 3 on
    setLowPwrSleep(120);    // low-pwr sleep for 120mS
    //delay(95);
    //LowPower.idle(SLEEP_120MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(4);              // turn LED 4 on; 
    setLowPwrSleep(90);     //low-pwr sleep for 90mS
    //delay(85);
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(5);              // turn LED 5 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS
    //delay(65);
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF); 
    
    setLED(6);              // turn LED 6 on
    setLowPwrSleep(45);     //low-pwr sleep for 45mS
    //delay(45);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);   

    setLED(5);              // turn LED 5 on
    setLowPwrSleep(30);     //low-pwr sleep for 30mS
    //delay(35);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);   
  
    setLED(6);              // turn LED 6 on
    setLowPwrSleep(45);     //low-pwr sleep for 45mS
    //delay(45);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
  
    setLED(5);              // turn LED 5 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS
    //delay(65);
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);    
  
    setLED(4);              // turn LED 4 on
    setLowPwrSleep(90);     //low-pwr sleep for 90mS
    //delay(85);
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(3);              // turn LED 3 on
    setLowPwrSleep(90);     //low-pwr sleep for 90mS
    //delay(95); 
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
       
    setLED(2);              // turn LED 2 on
    setLowPwrSleep(90);     //low-pwr sleep for 90mS
    //delay(85); 
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(1);              // turn LED 1 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS
    //delay(65); 
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS
    //delay(50); 
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
  
    setLED(1);              // turn LED 1 on
    setLowPwrSleep(30);     //low-pwr sleep for 30mS
    //delay(35); 
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(15);     //low-pwr sleep for 15mS
    //delay(20); 
    //LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);

    setLED(1);              // turn LED 1 on
    setLowPwrSleep(30);     //low-pwr sleep for 30mS
    //delay(35);
    //LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF); 

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS
    //delay(50); 
    //LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);

    setLED(0);              // turn all the LEDs off
    setLowPwrSleep(1000);   //low-power sleep for 1000 mS, end of flash cycle
    //LowPower.idle(SLEEP_1S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
              
  }   // end of while(), do another flash cycle if the LDR says it's still dark out... 
      
  setLowPwrSleep(8000);   // ...if the LDR says it's now light out, nap 8 seconds and check it again
  //LowPower.idle(SLEEP_8S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);

}  // end of the void loop(), go back and do it again...
