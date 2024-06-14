#ifndef ZUMOLINESENSOR_H
#define ZUMOLINESENSOR_H

#include <Zumo32U4.h>

class ZumoLineSensor {
public:
    ZumoLineSensor();
    void initSensors();
    void readvalSensors();
    void calibrateSensors();
    void printReadings();

private:
    Zumo32U4LineSensors lineSensors;
    uint16_t sensorValues[3];
};

#endif
