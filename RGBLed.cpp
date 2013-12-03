#include "RGBLed.h"

RGBLed::RGBLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin){
	this->rPin = redPin;
    this->gPin = greenPin;
    this->bPin = bluePin;
    
    this->rVal = 0;
    this->gVal = 0;
    this->bVal = 0;
    
	pinMode(this->rPin,OUTPUT);
    pinMode(this->gPin,OUTPUT);
    pinMode(this->bPin,OUTPUT);
}

void RGBLed::fadeTo(uint8_t red, uint8_t green, uint8_t blue, unsigned int time){
    uint8_t stepSize = 1;
    
    float rStep = (red - this->rVal) / (float)(255/stepSize);
    float gStep = (green - this->gVal) / (float)(255/stepSize);
    float bStep = (blue - this->bVal) / (float)(255/stepSize);
    
    for (byte i = 0 ; i < 255; i+=stepSize){
        this->rVal += rStep;
        this->gVal += gStep;
        this->bVal += bStep;
        
        analogWrite(rPin, this->rVal);
        analogWrite(gPin, this->gVal);
        analogWrite(bPin, this->bVal);
        
		delay(time / (255 / stepSize));
	}
    
    this->rVal = red;
    this->gVal = green;
    this->bVal = blue;
    
    analogWrite(rPin,red);
    analogWrite(gPin,green);
    analogWrite(bPin,blue);
}