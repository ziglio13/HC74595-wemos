#include "Arduino.h"
#include "esp_74595.h"

esp_74595::esp_74595(int numberOfShiftRegisters, int dataPin, int clockPin, int latchPin)
{
	_numberOfShiftRegisters = numberOfShiftRegisters;

	_clockPin = clockPin;
	_dataPin = dataPin;
	_latchPin = latchPin;

	pinMode (clockPin, OUTPUT);
	pinMode (dataPin, OUTPUT);
	pinMode (latchPin, OUTPUT);

	digitalWrite(clockPin, LOW);
	digitalWrite(dataPin, LOW);
	digitalWrite(latchPin, LOW);
}


void esp_74595::set(int pin, int value)
{

	byte bitSpecified = 0;
	
	bitWrite (bitSpecified, pin, value);
	digitalWrite(_latchPin, LOW);
	
	shiftOut (_dataPin, _clockPin, MSBFIRST, bitSpecified);
	digitalWrite(_latchPin, HIGH);
}
   
