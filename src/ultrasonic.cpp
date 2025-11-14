#include "ultrasonic.h"
#include <Arduino.h>

Ultrasonic::Ultrasonic(int trig, int echo) {
    triggerPin = trig;
    echoPin = echo;
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

char Ultrasonic::medirDistanciaCM() {
    // Pulso no trigger
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);

    long duracao = pulseIn(echoPin, HIGH);

    // Converte tempo de eco para distância em cm
    float distancia = duracao * 0.034 / 2;

    // --- Classificação da altura medida ---
    if (distancia < 2.0) {
        return 'A';   // Muito baixo (objeto mais alto)
    }
    else if (distancia >= 2.0 && distancia <= 4.0) {
        return 'B';   // Altura média
    }
    else {
        return 'C';   // Objeto baixo (distância maior)
    }
}