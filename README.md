# Temperature-Controlled LED Indicator System

This project uses an Arduino UNO and a TMP36 analog sensor to measure ambient temperature and display the temperature range using three different LEDs. It's useful for learning basic analog sensor reading and embedded systems programming.

## Features

- Real-time temperature monitoring using TMP36
- Temperature displayed on the serial monitor
- LED indicators for three temperature zones:
  - Green: Normal (10°C–50°C)
  - Blue: Warm (51°C–69°C)
  - Red: Extreme (<10°C or >70°C)

## Components Used

- Arduino UNO
- TMP36 Temperature Sensor
- Red, Green, and Blue LEDs
- 220-ohm resistors × 3
- Breadboard
- Jumper wires

## Circuit Connections

| Component      | Arduino Pin | Description                  |
|----------------|--------------|------------------------------|
| TMP36 VCC      | 5V           | Power supply                 |
| TMP36 GND      | GND          | Ground                       |
| TMP36 OUT      | A0           | Analog input                 |
| Green LED      | Pin 6        | Normal range indicator       |
| Blue LED       | Pin 7        | Warm range indicator         |
| Red LED        | Pin 8        | Extreme temp indicator       |

*Each LED is connected through a 220Ω resistor to GND.*

## Simulation Demo

This project has been tested and simulated on Tinkercad Circuits:- https://www.tinkercad.com/things/lxoXyGlAajX-temperature-led

> Adjust the TMP36 sensor's simulated temperature and observe LED behavior for different ranges.
