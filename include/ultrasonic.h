#pragma once  //Proteção contra Inclusão Dupla

class Ultrasonic {
private:
    int triggerPin;
    int echoPin;

public:
    Ultrasonic(int trig, int echo);
    char medirDistanciaCM();
};