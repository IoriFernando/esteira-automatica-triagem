#include "display.h"

DisplayController::DisplayController() :
    display(128, 64, &Wire) {}

void DisplayController::begin() {
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
}

void DisplayController::mostrarInfo(float altura, int a, int b, int c, String destino) {
    display.clearDisplay();

    // Linha 1: altura medida
    display.setCursor(0, 0);
    display.print("Altura: ");
    display.print(altura, 1);
    display.println(" cm");

    // Linha 2-4: contadores
    display.println("Contadores:");
    display.print("A: "); display.println(a);
    display.print("B: "); display.println(b);
    display.print("C: "); display.println(c);

    // Última linha: destino escolhido
    display.print("Destino: ");
    display.println(destino);

    display.display();
}
