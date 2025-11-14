#pragma once  //Proteção contra Inclusão Dupla

#include <Adafruit_SSD1306.h>

class DisplayController {
public:
    Adafruit_SSD1306 display;

    DisplayController();
    void begin();
    void mostrarInfo(float distancia, int destinoA, int destinoB, int destinoC, String destino);
};