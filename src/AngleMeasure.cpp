//
// Created by Oleksandra Baukh on 4/15/18.
//

#include <Wire.h>
#include "AngleMeasure.h"

SomeState AngleMeasure::getSomeState() {

    SomeState someState;
    accelgyro.getMotion6(&someState.ax, &someState.ay, &someState.az, &someState.gx, &someState.gy, &someState.gz);

    // these methods (and a few others) are also available
    //accelgyro.getAcceleration(&ax, &ay, &az);
    //accelgyro.getRotation(&gx, &gy, &gz);

    return someState;
}

AngleMeasure::AngleMeasure() {
    Wire.begin();
    Serial.println("Initializing I2C devices...");
    accelgyro.initialize();
    Serial.println("Testing device connections...");
    Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");


}
