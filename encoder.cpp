#include "encoder.h"
int temp,val;
int encoderPinA = 52;
int encoderPinB = 50;
int encoderPin0 = 53;
int encoderPinPos = 0;
int encoderPinALast = LOW;
int n = LOW;

void encoder::SETUP(void)
{
    pinMode(encoderPinA,INPUT);
    pinMode(encoderPinB,INPUT);
    pinMode(encoderPin0,INPUT);
}

bool encoder::positivRotation(void) 
{
    n = digitalRead(encoderPinA);
    if ((encoderPinALast == LOW) && (n == HIGH))
    {
        if (digitalRead(encoderPinB) == LOW)
        {
            encoderPinPos--;
        }else
        {
            encoderPinPos++;
        }
    }
    encoderPinALast = n;
    return true;
}

bool encoder::negativRotation(void)
{
    n = digitalRead(encoderPinA);
    if ((encoderPinALast == LOW) && (n == HIGH))
    {
        if (digitalRead(encoderPinB) == LOW)
        {
            encoderPinPos--;
        }else
        {
            encoderPinPos++;
        }
    }
    encoderPinALast = n;
    return true;
} 