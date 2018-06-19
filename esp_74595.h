#ifndef esp_74595_H
#define esp_74595_H

#include <Arduino.h>

class esp_74595
{
public:
   esp_74595 (int numberOfShiftRegisters, int dataPin, int clockPin, int latchPin);
   void set (int pin, int value);

private:
   int _numberOfShiftRegisters;
   int _clockPin;
   int _dataPin;
   int _latchPin;
};

#endif
