#include <Arduino.h>
#include "servo_controller.h"

void ServoController::begin(int pinA, int pinB, int pinC) {
    servoA.attach(pinA);
    servoB.attach(pinB);
    servoC.attach(pinC);
    resetServos();
}

void ServoController::desviarParaA() {
    servoA.write(90);
    delay(300);
    servoA.write(0);
}

void ServoController::desviarParaB() {
    servoB.write(90);
    delay(300);
    servoB.write(0);
}

void ServoController::desviarParaC() {
    servoC.write(90);
    delay(300);
    servoC.write(0);
}

void ServoController::resetServos() {
    servoA.write(0);
    servoB.write(0);
    servoC.write(0);
}
