#include <Arduino.h>
#include "servo_controller.h"
#include "ultrasonic.h"
#include "display.h"

ServoController servos;
Ultrasonic sensor(2, 3);  // TRIG = 2, ECHO = 3
DisplayController tela;

int countA = 0, countB = 0, countC = 0;

void setup() {
    Serial.begin(115200);

    servos.begin(8, 9, 10);  // Servos nas GPIOs 8, 9, 10
    tela.begin();
}

void loop() {
      char destino = sensor.medirDistanciaCM();

      if(destino == 'A'){
          servos.desviarParaA();
      }
      else if(destino == 'B'){
          servos.desviarParaB();
      }
      else if(destino == 'C'){
          servos.desviarParaC();
      }

    delay(500);
}