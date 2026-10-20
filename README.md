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

Fuente: Datasheet oficial de Espressif, *ESP32 Series Datasheet* (Versión 5.3).

1. **Núcleo:** Xtensa LX6 de 32 bits, doble núcleo (la variante ESP32-S0WD es de un solo núcleo).
2. **Frecuencia:** hasta 240 MHz.
3. **Memoria SRAM:** 520 KB (más 16 KB de SRAM en el RTC).
4. **Memoria FLASH:** el chip usa flash externa por QSPI (hasta 16 MB). El módulo ESP32-WROOM-32 trae 4 MB.
5. **Memoria ROM:** 448 KB.
6. **WiFi:** 802.11 b/g/n en 2.4 GHz, hasta 150 Mbps.
7. **Bluetooth:** v4.2 BR/EDR y Bluetooth LE (baja energía).
8. **Voltaje:** 3.3 V típico (rango de 2.3 V a 3.6 V; mínimo 3.0 V si el chip trae flash o PSRAM interna).
9. **Temperatura:** de –40 °C a 125 °C (temperatura de operación).
10. **Dimensiones:** encapsulado QFN48 de 5 × 5 mm (algunas variantes 6 × 6 mm).

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
