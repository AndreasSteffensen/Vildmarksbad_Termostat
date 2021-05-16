int temp,val;
int encoderPinA = 52;
int LEDPinGreen = 51;
int encoderPinB = 50;
int encoderPin0 = 53;
int encoderPinPos = 0;
int encoderPinALast = LOW;
int n = LOW;

void setup()
{
    pinMode(encoderPinA,INPUT);
    pinMode(LEDPinGreen, OUTPUT);
    pinMode(encoderPinB,INPUT);
    pinMode(encoderPin0,INPUT);
    Serial.begin(9600);
}

void loop() 
{
    digitalWrite(LEDPinGreen, HIGH);
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
        Serial.print(encoderPinPos);
        Serial.print("  /  ");
        digitalWrite(LEDPinGreen, HIGH);
    }
    encoderPinALast = n;
}