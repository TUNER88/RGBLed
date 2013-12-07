#include "Arduino.h"

class RGBLed
{
    public:
        RGBLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);
        bool isOn();
        void fadeTo(uint8_t red, uint8_t green, uint8_t blue, unsigned int time);
    private:
        uint8_t rPin;
        uint8_t gPin;
        uint8_t bPin;
    
        float rVal;
        float gVal;
        float bVal;
};