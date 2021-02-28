#include "mbed.h"

void Led(DigitalOut &ledpin, int times)
{
   for (int i = 0; i < times; ++i)
   {
      ledpin = 0;
      ThisThread::sleep_for(200ms);
      ledpin = 1;
      ThisThread::sleep_for(200ms);
   }
}