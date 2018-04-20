//
// Created by Oleksandra Baukh on 4/14/18.
//

#ifndef MARKII_ARDUINO_MARKIIARDUINO_H
#define MARKII_ARDUINO_MARKIIARDUINO_H


#include <MarkIIEnvironment.h>
#include <TR433.h>
#include <TR433.cpp>
#include <SequenceAwareReceiver.h>
#include "Motor8520.h"

class MarkIIArduino : public mark2::MarkIIEnvironment<Motor8520> {
    mark_os::cycle::Cycle cycle;
    TR433<mark_os::controller::ControllerState> tr433;
    mark_os::communication::SequenceAwareReceiver<mark_os::controller::ControllerState, 4> receiver{tr433};
    mark_os::controller::ControllerStateReceiver controllerStateReceiver{receiver};
    mark2::Controller controller{controllerStateReceiver};
    Motor8520 motor1;
    Motor8520 motor2;
    Motor8520 motor3;
    Motor8520 motor4;

    mark2::GenericMotor<Motor8520> genericMotor1{motor1};
    mark2::GenericMotor<Motor8520> genericMotor2{motor2};
    mark2::GenericMotor<Motor8520> genericMotor3{motor3};
    mark2::GenericMotor<Motor8520> genericMotor4{motor4};

    mark2::MotorManager<Motor8520> motorManager{genericMotor1, genericMotor2, genericMotor3, genericMotor4};

public:
    mark_os::cycle::Cycle &getCycle() override;

    mark2::Controller &getController() override;

    mark2::MotorManager<Motor8520> &getMotorManager() override;
};


#endif //MARKII_ARDUINO_MARKIIARDUINO_H
