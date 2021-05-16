#include "display.h"

void display::SETUP()
{
  // define pin modes
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
}

void display::display7Seg(int number, int speed)
{
    int pin= 2;
    for (int j=0; j < 7; j++)
    {   
        digitalWrite(pin, num_array[number][j]);
        pin++;
    }
    delay(speed);
}

void display::displayOff(void)
{
    for (int i = 2; i < 9; i++)
    {    
        digitalWrite(i, HIGH);
    }
}

