


#include <Arduino.h>
#include "MarkIIArduino.h"

#include <MarkIIEnvironment.h>
#include <MarkIIEnvironment.cpp>

MarkIIArduino *markIIArduino;

void setup() {
    Serial.begin(9600);
    Serial.println("Initializing...");
    markIIArduino = new MarkIIArduino;
    markIIArduino->init();

    Serial.println("Started");
}

void loop() {
    markIIArduino->loop();
}

