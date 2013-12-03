#include <RGBLed.h>

RGBLed led(9,10,11);

void setup()
{
}

void loop()
{
  led.fadeTo(255,255,255, 2000);
  led.fadeTo(0,0,0, 2000);  
}
