#include "display.h"

#define A_SEGMENT_PIN_D1 38
#define B_SEGMENT_PIN_D1 44
#define C_SEGMENT_PIN_D1 40
#define D_SEGMENT_PIN_D1 43
#define E_SEGMENT_PIN_D1 45
#define F_SEGMENT_PIN_D1 36
#define G_SEGMENT_PIN_D1 42

void display::SETUP()
{
    // define pin modes
    pinMode(A_SEGMENT_PIN_D1, OUTPUT);
    pinMode(B_SEGMENT_PIN_D1, OUTPUT);
    pinMode(C_SEGMENT_PIN_D1, OUTPUT);
    pinMode(D_SEGMENT_PIN_D1, OUTPUT);
    pinMode(E_SEGMENT_PIN_D1, OUTPUT);
    pinMode(F_SEGMENT_PIN_D1, OUTPUT);
    pinMode(G_SEGMENT_PIN_D1, OUTPUT);
}

void display::display7Seg(int number, displayID_t ID)
{
    int pin= 2;
    for (int j=0; j < 7; j++)
    {   
        digitalWrite(pin, num_array[number][j]);
        pin++;
    }
    delay(100);
}

void display::displayOff(void)
{
    for (int i = 2; i < 9; i++)
    {    
        digitalWrite(i, HIGH);
    }
}

