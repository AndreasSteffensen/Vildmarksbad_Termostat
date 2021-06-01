#ifndef tempSensor_h
#define tempSensor_h
#include <OneWire.h>
#include <DallasTemperature.h>

#define FIRST_SENSOR 5
#define SECOND_SENSOR 2

float celcius=0;

enum sensorID_t{
    firstSensor,
    secondSensor,
    numberOfSensor
};

sensorID_t sensorID;

class tempSensor
{
public:
    tempSensor();
    void SETUP();
    float readTemp(sensorID_t);
};

#endif tempSensor_h