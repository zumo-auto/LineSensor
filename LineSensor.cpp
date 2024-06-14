#include "Zumo32U4LineSensor.h"
#include <Zumo32U4.h>
#include <Arduino.h>

#define SENSOR_LEDON 11

ZumoLineSensor::ZumoLineSensor() {
}

void ZumoLineSensor::initSensors() {
    lineSensors.initThreeSensors();
}

void ZumoLineSensor::readvalSensors() {
    lineSensors.read(sensorValues);
}

void ZumoLineSensor::calibrateSensors() {
    Serial.println("Calibrating sensors...");
    for (int i = 0; i < 100; i++) {
        lineSensors.calibrate();
        delay(20);
    }
    Serial.println("Finished Calibration");
}
