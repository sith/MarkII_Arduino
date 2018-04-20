


#include <Arduino.h>
#include "MarkIIArduino.h"
#include "AngleMeasure.h"

#include <MarkIIEnvironment.h>
#include <MarkIIEnvironment.cpp>

MarkIIArduino *markIIArduino;
AngleMeasure *angleMeasure;

void setup() {
    Serial.begin(9600);
    Serial.println("Initializing...");
    markIIArduino = new MarkIIArduino;
    markIIArduino->init();

    Serial.println("Started");
    angleMeasure = new AngleMeasure;

}

void loop() {
    markIIArduino->loop();
}

