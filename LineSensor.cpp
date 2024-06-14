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

void ZumoLineSensor::printReadings() {
    Serial.print("Left Sensor: ");
    Serial.println(sensorValues[0]);
    Serial.print("Middle Sensor: ");
    Serial.println(sensorValues[1]);
    Serial.print("Right Sensor: ");
    Serial.println(sensorValues[2]);
}
