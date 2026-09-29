# Prácticas de Arduino

Colección de prácticas realizadas durante el aprendizaje de programación y electrónica utilizando Arduino.

## Descripción

Este repositorio reúne diferentes ejercicios y experimentos relacionados con el uso de sensores, comunicación serial, reconocimiento de voz y control de LEDs.

## Proyectos incluidos

### Control de LEDs por voz

Proyecto que utiliza un módulo de reconocimiento de voz para controlar tres LEDs.

El sistema permite activar:
- LED verde
- LED rojo
- LED amarillo
- Apagar todos los LEDs

Las instrucciones de voz son reconocidas por el módulo y Arduino modifica el estado de los LEDs según el comando recibido.

### Sensor de giro

Práctica que utiliza un sensor conectado a Arduino para detectar cambios y controlar el estado de un LED.

El programa utiliza una interrupción para detectar la señal del sensor y alternar entre el LED encendido y apagado.

### Sensor de voz y comunicación serial

Práctica para probar la comunicación entre un módulo conectado mediante `SoftwareSerial` y el puerto serial de Arduino.

Los datos recibidos por el módulo se envían al monitor serial y los datos ingresados desde el monitor pueden enviarse nuevamente al módulo.

## Tecnologías y componentes

- Arduino
- C/C++
- LEDs
- Sensores
- Módulo de reconocimiento de voz
- Comunicación serial
- `SoftwareSerial`
- Interrupciones

## Contexto académico

Prácticas realizadas durante la formación escolar como parte del aprendizaje de programación, electrónica y sistemas embebidos.
