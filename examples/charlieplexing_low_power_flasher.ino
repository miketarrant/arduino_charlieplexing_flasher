/**
  
  Name: charlieplexing_low_power_flasher
  Purpose: Burning Man 2017 Flasher Gift Project

  @author Mike Tarrant
  @version  1.1   Add comments and some code cleanup
            1.0   Initial release
            
*/

#include "LowPower.h"   // RocketScream library so so we can use low-power sleep for timing delays

/** Using constants because they are memory frugal */
const int PIN_A = 5;  // output pin A is D5
const int PIN_B = 6;  // output pin B is D6
const int PIN_C = 7;  // output pin C is D7

void setup()
{
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT); 
  pinMode(PIN_C, OUTPUT);  
}


/*
* Turn on the given LED
*
* @paramledNum LED to turn on (1..6)
* @paramledNum turn all LEDs off (0)
*
*/

void setLED(int ledNum)
{

if(ledNum == 0)   // turn all LEDs off
  {
                pinMode(PIN_A, INPUT);
                pinMode(PIN_B, INPUT);  // changed to input to trigger tri state.
                pinMode(PIN_C, INPUT); 
  }
  
  if(ledNum == 1)   // first_green_LED
  {
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, INPUT);  // changed to input to trigger tri state.
                pinMode(PIN_C, OUTPUT); 
  
                digitalWrite(PIN_A, HIGH);             
                digitalWrite(PIN_C, LOW);
  }

  if(ledNum == 2)   // second_green_LED
  {
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, INPUT); 
                pinMode(PIN_C, OUTPUT);
                
                digitalWrite(PIN_A, LOW);             
                digitalWrite(PIN_C, HIGH);
  }

  if(ledNum == 3)   // first_red_LED
  { 
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, INPUT);
             
                 digitalWrite(PIN_A, HIGH);
                 digitalWrite(PIN_B, LOW);        
  }

  if(ledNum == 4)   // second_red_LED
  {
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, INPUT);
                
                digitalWrite(PIN_A, LOW);
                digitalWrite(PIN_B,HIGH);
  }

  if(ledNum == 5)   // first_blue_LED
  {

                pinMode(PIN_A, INPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, OUTPUT);               

                digitalWrite(PIN_B, HIGH);
                digitalWrite(PIN_C, LOW);
  }

  if(ledNum == 6)   // second_blue_LED
  {

                pinMode(PIN_A, INPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, OUTPUT);  

                digitalWrite(PIN_B, LOW);
                digitalWrite(PIN_C, HIGH);
  }
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
