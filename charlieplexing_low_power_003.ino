int A = 5;
int B = 6;
int C = 7;

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
*
*/


#include "LowPower.h"


void setLED(int ledNum)
{

if(ledNum == 0)
  {
                pinMode(A, INPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, INPUT); 
  
                //digitalWrite(A, LOW); 
                //digitalWrite(B, LOW);            
                //digitalWrite(C, LOW);
  }
  
  if(ledNum == 1)
  {
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, OUTPUT); 
  
                digitalWrite(A, HIGH);             
                digitalWrite(C, LOW);
  }

  if(ledNum == 2)
  {
                pinMode(A, OUTPUT);
                pinMode(B, INPUT); 
                pinMode(C, OUTPUT);
                
                digitalWrite(A, LOW);             
                digitalWrite(C, HIGH);
  }

  if(ledNum == 3)
  { 
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
             
                 digitalWrite(A, HIGH);
                 digitalWrite(B, LOW);        
  }

  if(ledNum == 4)
  {
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                
                digitalWrite(A, LOW);
                digitalWrite(B,HIGH);
  }

  if(ledNum == 5)
  {

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);               

                digitalWrite(B, HIGH);
                digitalWrite(C, LOW);
  }

  if(ledNum == 6)
  {

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);  

                digitalWrite(B, LOW);
                digitalWrite(C, HIGH);
  }
}

void loop()
{


    
  for(;;)
  {
    setLED(1);
    //delay(65);
      // ATmega328P, ATmega168
  LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(2);
    //delay(85);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(3);
    //delay(95);
     LowPower.idle(SLEEP_120MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(4);
    //delay(85);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    
    setLED(5);
    //delay(65);
    LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
 
    
    setLED(6);
    //delay(45);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    

    setLED(5);
    //delay(35);
    LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(6);
    //delay(45);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_15MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(5);
    //delay(65);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(4);
    //delay(85);
     LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
    
    setLED(3);
    //delay(95); 
      LowPower.idle(SLEEP_60MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
     LowPower.idle(SLEEP_30MS, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
       
    setLED(2);
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
