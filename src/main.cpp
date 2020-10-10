#include <Arduino.h>

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (!Serial) {;} // wait for serial port to connect. Needed for native USB port only
}

void loop() 
{
  Serial.write("Hello world.\r\n");
  delay(1000);
}