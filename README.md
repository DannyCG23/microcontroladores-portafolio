# microcontroladores-portafolio

Prácticas de la materia de Microcontroladores con ESP32.

## Autor

- **Nombre:** Danny Coello Guamán
- **Materia:** Programación y Manejo de Microcontroladores
- **Semestre:** Décimo
- **Paralelo:** B
- **Carrera:** Computación
- **Universidad:** Universidad Agraria del Ecuador
- **Periodo lectivo:** 2026 - 2027 CII

## Datos clave del ESP32

Fuente: Espressif Systems, *ESP32-WROOM-32E & ESP32-WROOM-32UE Datasheet* (Versión 2.1).

1. **Núcleo:** Xtensa LX6 de 32 bits, doble núcleo.
2. **Frecuencia:** ajustable de 80 MHz a 240 MHz.
3. **Memoria SRAM:** 520 KB (más 16 KB de SRAM en el RTC).
4. **Memoria FLASH:** 4, 8 o 16 MB de SPI flash dentro del módulo, según la versión.
5. **Memoria ROM:** 448 KB.
6. **WiFi:** 802.11 b/g/n en 2.4 GHz (2412 – 2484 MHz), hasta 150 Mbps.
7. **Bluetooth:** v4.2 BR/EDR y Bluetooth LE.
8. **Voltaje:** 3.0 V a 3.6 V (típico 3.3 V); la fuente debe entregar al menos 0.5 A.
9. **Temperatura:** de –40 °C a 85 °C (versión estándar) o hasta 105 °C (versión H).
10. **Dimensiones:** módulo de 18.0 × 25.5 × 3.1 mm, con antena PCB integrada.
11. **Procesador:** ESP32-D0WD-V3 (revisión v3.1), identificado con esptool al cargar el programa; cristal de 40 MHz.
12. **Placa:** ESP32 DevKit de 38 pines con USB-C, convertidor USB-serial CP2102, botones BOOT y RST, y módulo genérico marcado "ESP-32", equivalente al ESP32-WROOM-32E (hasta 26 GPIO, 5 de ellos strapping pins).

Otros datos que me llamaron la atención:

- 34 pines GPIO programables.
- 5 modos de energía: Active, Modem-sleep, Light-sleep, Deep-sleep e Hibernation.

**Chip, módulo y placa:** el *chip* es el ESP32 (el circuito integrado de 5 × 5 mm); el *módulo* (ESP32-WROOM-32) es el chip junto con la memoria flash, el cristal y la antena bajo una cubierta metálica; la *placa* (ESP32 DevKit) es el módulo montado con conector USB, convertidor USB-serial, regulador de 3.3 V, botones BOOT/EN y pines para la protoboard.

## Dudas para la clase

- El GPIO 2 que usamos para el LED aparece en el datasheet como *strapping pin*. ¿Qué pines conviene evitar en los proyectos porque el ESP32 los revisa al arrancar o los usa para la memoria flash?

## Prácticas

### Práctica 01 - LED parpadeante

- Simulación en Wokwi: https://wokwi.com/projects/478056975164517377
- Código: carpeta `Practica01-led`
