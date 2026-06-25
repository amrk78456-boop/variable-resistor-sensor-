# 🎛️ Arduino LED Control via Potentiometer

An embedded systems project designed to interface an analog input component with an **Arduino Uno**. This project demonstrates how to read continuously variable analog voltage using a **Potentiometer (Trimpot)**, process the data on the microcontroller, and use it to control an LED output.

## ⚙️ Project Features & Logic
* **Analog-to-Digital Conversion (ADC):** The Arduino reads the variable voltage from the potentiometer's middle pin through analog pin `A0` (mapping the voltage from 0V-5V into a digital range of 0-1023).
* **Dynamic Control:** The captured analog values can be used to dynamically alter the system behavior, such as adjusting the LED's blinking frequency (delay time) or modulating its brightness level using Pulse Width Modulation (PWM).

## 🛠️ Components Used
* **Microcontroller:** Arduino Uno Board (ATmega328P)
* **Input Device:** 1x 5kΩ Potentiometer (RV1 / Trimpot)
* **Output Device:** 1x Blue LED (D1)
* **Resistors:** 1x Current-limiting resistor (R1) for the LED protection
* **Ground (GND) & Power (5V) Connections**

## 📂 Repository Contents
* `potentiometer_control.ino`: The Arduino C++ source code handling the ADC reading (`analogRead`).
* `New Project.pdsprj`: The Proteus schematic illustrating the physical wiring of the potentiometer and LED.
* `potentiometer_control.ino.hex`: The compiled binary file required by Proteus to simulate the live hardware action.

## 💻 Circuit Topology & Pin Mapping
* **Potentiometer (RV1) Connections:**
  * Top Terminal: Connected to the Arduino **5V** power rail.
  * Bottom Terminal: Connected to the Arduino **GND** rail.
  * Wiper (Middle Pin): Connected to Arduino **Analog Input pin `A0`** to deliver the shifting voltage.
* **LED (D1) Connection:**
  * Anode (Positive leg): Connected to Arduino digital pin `12` through a current-limiting resistor.
  * Cathode (Negative leg): Connected to the common **GND**.
