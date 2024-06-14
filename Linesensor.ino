#include <Wire.h>
#include "Zumo32U4LineSensor.h"

ZumoLineSensor zumo;

void setup() {
    Serial.begin(9600);
    zumo.initSensors();
    zumo.calibrateSensors();
}

void loop() {
    zumo.readvalSensors();
    zumo.printReadings();
    delay(100);
}
