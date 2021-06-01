#ifndef display_h
#define display_h

enum displayID_t {
    displayTens,
    displayOnes,
    displayDecimals,
    numberOfDisplay
};

int num_array[10][7] = {  { 0,0,0,0,0,0,1 },    // 0
                          { 1,0,0,1,1,1,1 },    // 1
                          { 0,0,1,0,0,1,0 },    // 2
                          { 0,0,0,0,1,1,0 },    // 3
                          { 1,0,0,1,1,0,0 },    // 4
                          { 0,1,0,0,1,0,0 },    // 5
                          { 0,1,0,0,0,0,0 },    // 6
                          { 0,0,0,1,1,1,1 },    // 7
                          { 0,0,0,0,0,0,0 },    // 8
                          { 0,0,0,1,1,0,0 }};   // 9

class display
{
public:
    display();
    void SETUP();
    void display7Seg(int number, displayID_t ID);
    void displayOff(void);
};

#endif display_h