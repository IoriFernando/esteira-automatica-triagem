# Sistema de esteira automática 

Sistema de triagem automática utilizando Raspberry Pi Pico, 3 servos motores, sensor ultrassônico e display OLED.
Um objeto percorre a esteira e, com base na distância medida pelo ultrassom ou uma regra definida, o sistema direciona o objeto para uma das três saídas (Bin A, B ou C).

## 🚀 Funcionalidades

- Detecção de objetos via sensor ultrassônico HC-SR04

- Triagem para 3 destinos usando servos SG90

- Contagem total de peças

- Estatísticas por saída (A, B, C)

- Exibição de informações em display OLED SSD1306

- Regras configuráveis (por tamanho, alternância, aleatório)

# 🧩 Componentes Utilizados

- Raspberry Pi Pico

- 3× Servos SG90

- 1× Sensor ultrassônico HC-SR04

- Display OLED 128×64 (SSD1306 – I2C)

- Fonte externa 5V para os servos

- Jumpers e protoboard

## 🔧 Organização do Código
``` bash
/src
  ├── main.cpp
  ├── servo_controller.cpp
  ├── ultrasonic.cpp
  ├── display.cpp
/include
  ├── servo_controller.h
  ├── ultrasonic.h
  ├── display.h
/docs
  └── esquema_ligacao.png
```

## 📦 Como Funciona

- Sensor ultrassônico detecta a chegada do objeto.

- Pico calcula a distância e aplica a regra de triagem.

- No momento certo, aciona o servo correspondente.

- Atualiza o display com estatísticas.

- Repete o processo para o próximo objeto.