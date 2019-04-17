//We always have to include the library
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to LOAD 
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(11,13,12,1);


/* we always wait a bit between updates of the display */
unsigned long delaytime=1000;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}
/*
 This method will display the characters for the
 word "Arduino" one after the other on digit 0. 
 */
void writeArduinoOn7Segment() {
  
  lc.setRow(0,0,0b01000000);
  delay(delaytime);
  lc.setRow(0,0,0b00100000);
  delay(delaytime);
  lc.setRow(0,0,0b00010000);
  delay(delaytime);
  lc.setRow(0,0,0b00001000);
  delay(delaytime);
  lc.setRow(0,0,0b00000100);
  delay(delaytime);
  lc.setRow(0,0,0b00000010);
  delay(delaytime);
  lc.setRow(0,0,0b00000001);
  delay(delaytime);
  lc.setRow(0,0,0b10000000);
  delay(delaytime);

} 
void loop() { 
  writeArduinoOn7Segment();
}
