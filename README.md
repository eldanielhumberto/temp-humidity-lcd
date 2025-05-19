# Arduino Temp & Humidity Monitor

This project uses an Arduino, a DHT11 sensor, and a 16x2 LCD to display real-time temperature and humidity readings.

## Components

- Arduino Uno (or compatible)
- DHT11 Temperature & Humidity Sensor
- 16x2 LCD Display (with I2C or parallel interface)
- Jumper wires
- Breadboard

## Circuit Diagram

```
[DHT11]      [Arduino]
VCC    ----> 5V
GND    ----> GND
DATA   ----> Digital Pin 6

[LCD]        [Arduino]
RS     ----> Digital Pin 12
Enable ----> Digital Pin 11
D4     ----> Digital Pin 5
D5     ----> Digital Pin 4
D6     ----> Digital Pin 3
D7     ----> Digital Pin 2
R/W    ----> GND
VSS    ----> GND
VCC    ----> 5V
LED+   ----> 5V through a 220 ohm resistor
LED-   ----> GND
```

## Libraries Required

- [DHT sensor library](https://github.com/adafruit/DHT-sensor-library)
- [LiquidCrystal_I2C](https://github.com/johnrickman/LiquidCrystal_I2C) (if using I2C LCD)

## Usage

1. Assemble the circuit as shown.
2. Upload the code to your Arduino.
3. View temperature and humidity on the LCD.