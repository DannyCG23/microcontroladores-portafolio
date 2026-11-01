#include <Arduino.h>

const int LED1 = 2;  // LED rojo en G2
const int LED2 = 4;  // LED amarillo en G4
QueueHandle_t cola;

void tareaLed1(void *pv) {
  pinMode(LED1, OUTPUT);
  bool estado = false;
  Serial.printf("Led1 en el nucleo %d\n", xPortGetCoreID());

  for (;;) {
    estado = !estado;
    digitalWrite(LED1, estado);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

void tareaLed2(void *pv) {
  pinMode(LED2, OUTPUT);
  bool estado = false;
  Serial.printf("Led2 en el nucleo %d\n", xPortGetCoreID());

  for (;;) {
    estado = !estado;
    digitalWrite(LED2, estado);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
void productor(void *pv) {
  int contador = 0;

  for (;;) {
    xQueueSend(cola, &contador, portMAX_DELAY);
    contador++;
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void consumidor(void *pv) {
  int dato;

  for (;;) {
    if (xQueueReceive(cola, &dato, portMAX_DELAY)) {
      Serial.printf("Recibido: %d\n", dato);
    }
  }
}

void setup() {
  Serial.begin(115200);

  // Crear la cola antes de iniciar las tareas.
  cola = xQueueCreate(5, sizeof(int));

  xTaskCreatePinnedToCore(tareaLed1, "Led1", 2048, NULL, 1, NULL, 0);
  xTaskCreatePinnedToCore(tareaLed2, "Led2", 2048, NULL, 1, NULL, 1);

  xTaskCreate(productor, "Prod", 2048, NULL, 1, NULL);
  xTaskCreate(consumidor, "Cons", 256, NULL, 1, NULL);
}

void loop() {
}