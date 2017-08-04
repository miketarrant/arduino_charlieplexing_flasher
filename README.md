# charlieplexing_low_power_flasher
An Arduino Nano LED flasher with a Charlieplexing display and low-power features. This will be used in a flasher project for Burning Man 2017.

This project and repository are a work-in-progress. At this point, the code compiles and has the basic features of:
 - Read the value from the light dependent resistor (LDR)
  - While the value is low (night), flash the LEDs in a back-and-forth pattern
  - While the LDR value is high (day), the LEDs stay off and we take a series of short low-power "naps"

### Next steps: ###

- Code to assure that it's really sundown/night and start some rough timing (since we aren't using a RTC and a lot of functionality is turned off during the low power naps). For this project, "rough is good enough"®
- Code to change the flash rates during the night (for even more power savings when we start flashing and much later during the early morning)
- Circuit diagrams showing how the LEDs and LDR are wired

### In case you're curious: ###

- Q. Why all the code, and comments, and everything else for a simple project like this?
- A. So I can learn Arduino, get back into coding, learn Git(Hub), learn Markdown, have fun, inspire someone else...




