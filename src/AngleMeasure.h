//
// Created by Oleksandra Baukh on 4/15/18.
//

#ifndef MARKII_ARDUINO_ANGLEMEASURE_H
#define MARKII_ARDUINO_ANGLEMEASURE_H

#include <types.h>
#include <MPU6050.h>

struct SomeState {
    int16 ax;
    int16 ay;
    int16 az;
    int16 gx;
    int16 gy;
    int16 gz;
};

class AngleMeasure {
    MPU6050 accelgyro;

public:

    AngleMeasure();

    SomeState getSomeState();


};


#endif //MARKII_ARDUINO_ANGLEMEASURE_H
