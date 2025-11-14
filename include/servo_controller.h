#pragma once  //Proteção contra Inclusão Dupla

#include <Servo.h>

class ServoController {
public:
    Servo servoA;
    Servo servoB;
    Servo servoC;

    void begin(int pinA, int pinB, int pinC);
    void desviarParaA();
    void desviarParaB();
    void desviarParaC();
    void resetServos();
};