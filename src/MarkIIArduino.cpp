//
// Created by Oleksandra Baukh on 4/14/18.
//

#include "MarkIIArduino.h"


mark_os::cycle::Cycle &MarkIIArduino::getCycle() {
    return cycle;
}

mark2::Controller &MarkIIArduino::getController() {
    return controller;
}

mark2::MotorManager<Motor8520> &MarkIIArduino::getMotorManager() {
    return motorManager;
}
