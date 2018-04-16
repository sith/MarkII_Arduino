//
// Created by Oleksandra Baukh on 4/14/18.
//

#include <HardwareSerial.h>
#include "Motor8520.h"

void Motor8520::throttle(uint8 value) {
    Serial.print("Got new throttle value ");
    Serial.println(value);
}
