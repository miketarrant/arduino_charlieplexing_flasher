/**

  Name: charlieplexing_low_power_flasher
  Purpose: Burning Man 2017 Flasher Gift Project

  @author Mike Tarrant
  @version  1.1   Add LDR code, comments, and code cleanup
            1.0   Initial release

*/

#include "charlieplexing.h"       // Charlieplexing code for a six LED display
#include "lowPowerSleeps.h"       // Specify sleep durations and use the RocketScream low power library

const int lightThreshold = 50;    // LDR values above the lightThreshold indicate it's not dark out anymore
const int analogPinLDR = 0;       // analog input pin for the light-dependent resistor (LDR)
const int digitalPinLDR = 8;      // digital output pin to power the LDR circuit when we need to check the light levels

//int howMuchLight = 300;

void setup()
{
  pinMode(PIN_A, OUTPUT);         //  set initial state of charlieplexed display
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
}


void loop()   // Let's do this thing. Flash if it's dark out; low-power waiting if it's light out
{

  while (measureLight() < lightThreshold) // if the light value is < lightThreshold, it's night so we flash the LEDs
  {    
    setLED(1);              // turn LED 1 on
    setLowPwrSleep(60);     // low-pwr sleep for 60mS

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(90);     // low-pwr sleep for 90mS

    setLED(3);              // turn LED 3 on
    setLowPwrSleep(120);    // low-pwr sleep for 120mS

    setLED(4);              // turn LED 4 on;
    setLowPwrSleep(90);     // low-pwr sleep for 90mS

    setLED(5);              // turn LED 5 on
    setLowPwrSleep(60);     // low-pwr sleep for 60mS

    setLED(6);              // turn LED 6 on
    setLowPwrSleep(45);     // low-pwr sleep for 45mS

    setLED(5);              // turn LED 5 on
    setLowPwrSleep(30);     // low-pwr sleep for 30mS

    setLED(6);              // turn LED 6 on
    setLowPwrSleep(45);     //low-pwr sleep for 45mS

    setLED(5);              // turn LED 5 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS

    setLED(4);              // turn LED 4 on
    setLowPwrSleep(90);     // low-pwr sleep for 90mS

    setLED(3);              // turn LED 3 on
    setLowPwrSleep(90);     // low-pwr sleep for 90mS

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(90);     // low-pwr sleep for 90mS

    setLED(1);              // turn LED 1 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(60);     //low-pwr sleep for 60mS

    setLED(1);              // turn LED 1 on
    setLowPwrSleep(30);     // low-pwr sleep for 30mS

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(15);     // low-pwr sleep for 15mS

    setLED(1);              // turn LED 1 on
    setLowPwrSleep(30);     // low-pwr sleep for 30mS

    setLED(2);              // turn LED 2 on
    setLowPwrSleep(60);     // low-pwr sleep for 60mS

    setLED(0);              // turn all the LEDs off
    setLowPwrSleep(1000);   // low-power sleep for 1000 mS, end of flash cycle

  }   // end of while(), do another flash cycle if the LDR says it's still dark out...

  //digitalWrite(13, HIGH);              // turn the onboard LED ON for troubleshooting
  setLowPwrSleep(8000);     // ...if the LDR says it's light out now, nap 8000 mS, then check it again
  //digitalWrite(13, LOW);              // turn the onboard LED OFF for troubleshooting


}     // end of the void loop(), go back and do it again.


int measureLight()
  {
    digitalWrite(digitalPinLDR, HIGH);              // turn on the LDR curcuit
    int howMuchLight = analogRead(analogPinLDR);    // read the light value from the LDR circuit
    digitalWrite(digitalPinLDR, LOW);               // turn off the LDR circuit      
    return howMuchLight;
  }

