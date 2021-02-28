#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin, int times);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      Led(myLED2,3);
      Led(myLED,2);
      ThisThread::sleep_for(1s);
   }
}