#include <Arduino.h>

const int LED1 = 2;  // LED rojo en G2
const int LED2 = 4;  // LED amarillo en G4

void tareaLed1(void *pv) {
  pinMode(LED1, OUTPUT);
  bool estado = false;

  for (;;) {
    estado = !estado;
    digitalWrite(LED1, estado);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

void tareaLed2(void *pv) {
  pinMode(LED2, OUTPUT);
  bool estado = false;

  for (;;) {
    estado = !estado;
    digitalWrite(LED2, estado);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void setup() {
  xTaskCreate(tareaLed1, "Led1", 2048, NULL, 1, NULL);
  xTaskCreate(tareaLed2, "Led2", 2048, NULL, 1, NULL);
}

void loop() {
}