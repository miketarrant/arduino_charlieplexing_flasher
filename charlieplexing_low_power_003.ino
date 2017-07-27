/**
  
  Name: charlieplexing_flasher
  Purpose: Burning Man 2017 Flasher Gift Project

  @author Mike Tarrant
  @version  1.1   Add comments and some code cleanup
            1.0   Initial release
            
*/

#include "LowPower.h"   // RocketScream library so so we can use low-sleep for timing delays


int A = 5;  // output pin A is D5
int B = 6;  // output pin B is D6
int C = 7;  // output pin C is D7


void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT); 
  pinMode(C, OUTPUT);  
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
                pinMode(A, INPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, INPUT); 
  
                //digitalWrite(A, LOW); 
                //digitalWrite(B, LOW);            
                //digitalWrite(C, LOW);
  }
  
  if(ledNum == 1)   // first_green_LED
  {
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, OUTPUT); 
  
                digitalWrite(A, HIGH);             
                digitalWrite(C, LOW);
  }

  if(ledNum == 2)   // second_green_LED
  {
                pinMode(A, OUTPUT);
                pinMode(B, INPUT); 
                pinMode(C, OUTPUT);
                
                digitalWrite(A, LOW);             
                digitalWrite(C, HIGH);
  }

  if(ledNum == 3)   // first_red_LED
  { 
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
             
                 digitalWrite(A, HIGH);
                 digitalWrite(B, LOW);        
  }

  if(ledNum == 4)   // second_red_LED
  {
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                
                digitalWrite(A, LOW);
                digitalWrite(B,HIGH);
  }

  if(ledNum == 5)   // first_blue_LED
  {

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);               

                digitalWrite(B, HIGH);
                digitalWrite(C, LOW);
  }

  if(ledNum == 6)   // second_blue_LED
  {

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);  

                digitalWrite(B, LOW);
                digitalWrite(C, HIGH);
  }
}

void loop()   // Let's do this thing
{
    
  for(;;)
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
    
    setLED(1);
    //delay(65); 
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(2);
    //delay(50); 
    LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);

    
    setLED(1);  
    //delay(35); 
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(2);
    //delay(20); 
       LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(1);  
    //delay(35);
    LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF); 

    setLED(2);
    //delay(50); 
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);


    setLED(0); // Turn everything off

  // ATmega328P, ATmega168
  LowPower.idle(SLEEP_1S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
              
  }


}
