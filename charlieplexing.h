

/**
  
  Name: charlieplexing.h
  Purpose: Make the charlieplexing code an include file so it's more portable 

           This code controls a six LED display. For wiring details, see:
           https://en.wikipedia.org/wiki/Charlieplexing and other charlieplexing articles.

  @author Mike Tarrant
  @version  1.1   Add comments and some code cleanup
            1.0   Initial release
            
*/


#ifndef charlieplexing_h
#ifndef charlieplexing_h


/** Using constants because they are memory frugal */
const int PIN_A = 5;  // output pin A is D5
const int PIN_B = 6;  // output pin B is D6
const int PIN_C = 7;  // output pin C is D7

/*
* Turn on the given LED
*
* @paramledNum LED to turn on (1..6)
* @paramledNum Turn all LEDs off (0)
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
  
  if(ledNum == 1)   // turn first LED on
  {
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, INPUT);  // changed to input to trigger tri state.
                pinMode(PIN_C, OUTPUT); 
  
                digitalWrite(PIN_A, HIGH);             
                digitalWrite(PIN_C, LOW);
  }

  if(ledNum == 2)   // turn second LED on
  {
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, INPUT); 
                pinMode(PIN_C, OUTPUT);
                
                digitalWrite(PIN_A, LOW);             
                digitalWrite(PIN_C, HIGH);
  }

  if(ledNum == 3)   // turn third LED on
  { 
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, INPUT);
             
                digitalWrite(PIN_A, HIGH);
                digitalWrite(PIN_B, LOW);        
  }

  if(ledNum == 4)   // turn fourth LED on
  {
                pinMode(PIN_A, OUTPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, INPUT);
                
                digitalWrite(PIN_A, LOW);
                digitalWrite(PIN_B,HIGH);
  }

  if(ledNum == 5)   // turn fifth LED on
  {

                pinMode(PIN_A, INPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, OUTPUT);               

                digitalWrite(PIN_B, HIGH);
                digitalWrite(PIN_C, LOW);
  }

  if(ledNum == 6)   // turn sixth LED on
  {

                pinMode(PIN_A, INPUT);
                pinMode(PIN_B, OUTPUT);
                pinMode(PIN_C, OUTPUT);  

                digitalWrite(PIN_B, LOW);
                digitalWrite(PIN_C, HIGH);
  }

}   //end of setLED()