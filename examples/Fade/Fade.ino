#include <RGBLed.h>

RGBLed led(9,10,11);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  led.fadeTo(255,255,255, 2000);
  led.fadeTo(0,0,0, 2000);  
}
