#include <Arduino.h>

unsigned int counter = 0;

void setup()
{
    SerialUSB.begin();    
}

void loop()
{
    SerialUSB.println(counter);
    delay(1000);
    counter++;
}