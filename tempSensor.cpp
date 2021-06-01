#include "tempSensor.h"

OneWire oneWire1(FIRST_SENSOR);
DallasTemperature sensor1(&oneWire1);

OneWire oneWire2(SECOND_SENSOR);
DallasTemperature sensor2(&oneWire2);

void tempSensor::SETUP(void)
{
    sensor1.begin();
    sensor2.begin();
}

float tempSensor::readTemp(sensorID_t x)
{ 
    switch (x)
    {
    case firstSensor:

        sensor1.requestTemperatures(); 
        celcius=sensor1.getTempCByIndex(0);
        break;
    case secondSensor:
        sensor2.requestTemperatures(); 
        celcius=sensor2.getTempCByIndex(0);
        break;
    default:
        break;
    }

    if (celcius == DEVICE_DISCONNECTED_C)
    {
        Serial.print("Device is disconnected");
        return DEVICE_DISCONNECTED_C;
    }
    else
    {
        return celcius; 
    }
}