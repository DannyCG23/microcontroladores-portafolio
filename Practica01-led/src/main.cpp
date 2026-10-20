// Práctica 01 - LED parpadeante con ESP32
// Autor: Danny Coello Guamán
// El LED externo está conectado al GPIO 2 a través de una resistencia de 220 ohmios.

#include <Arduino.h>  // En PlatformIO se debe incluir la librería de Arduino

const int LED = 2;    // Pin GPIO donde está conectado el LED

void setup()
{
  pinMode(LED, OUTPUT);   // Configura el GPIO 2 como salida digital
}

void loop()
{
  digitalWrite(LED, HIGH);  // Enciende el LED (3.3 V en el pin)
  delay(500);               // Espera 500 ms
  digitalWrite(LED, LOW);   // Apaga el LED (0 V en el pin)
  delay(500);               // Espera 500 ms
}