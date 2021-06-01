#include "encoder.h"
#include "display.h"
#include "tempSensor.h"

display tens;
display ones;
display decimals;

void setup(void)
{
  tens.SETUP();
}

void loop(void)
{
  tens.display7Seg(8, displayTens);
}