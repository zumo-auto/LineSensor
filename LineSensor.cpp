#include "Zumo32U4LineSensor.h"
#include <Zumo32U4.h>
#include <Arduino.h>

#define SENSOR_LEDON 11

ZumoLineSensor::ZumoLineSensor() {
}

void ZumoLineSensor::initSensors() {
    lineSensors.initThreeSensors();
}


//lees de waardes
void ZumoLineSensor::readvalSensors() {
    lineSensors.read(sensorValues);
}

//For loop is bedoeld om  constant naar de waardes van de sensoren te kijken
void ZumoLineSensor::calibrateSensors() {
    Serial.println("Calibrating...");
    for (int i = 0; i < 100; i++) {
        lineSensors.calibrate();
        delay(20);
    }
    Serial.println("Einde Calibration");
}

//Print de sensor waardes.
void ZumoLineSensor::printReadings() {
    xbee.print("Left Sensor: ");
    xbee.println(sensorValues[0]);
    xbee.print("Middle Sensor: ");
    xbee.println(sensorValues[1]);
    xbee.print("Right Sensor: ");
    xbee.println(sensorValues[2]);
}
