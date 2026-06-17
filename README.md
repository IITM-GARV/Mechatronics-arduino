# Mechatronics-arduino
Arduino & embedded systems projects built on the Induino-R3 platform — covering real-time sensor integration, PWM control, servo actuation, and color-based object sorting using LDR and RGB LED.

# Overview
This repository contains all Arduino (C) programs written during the ED5080 Mechatronics System Lab at IIT Madras. The exercises progress from basic digital I/O to a fully functional serial robotic arm that uses an LDR and Tri-Color LED to detect object color and sort it to the correct color-coded bin on the platform.

# Hardware Platform

| Component | Details |
|---|---|
| Microcontroller | Induino-R3 (ATmega328, 16 MHz) |
| Shield | Project Shield PCB Board |
| Actuators | 2× Servo Motors, Electromagnetic Actuator |
| Sensors | IR Proximity Sensor, LDR (Color Sensing) |
| Display | 16×2 LCD |
| Indicators | RGB LED, Tri-Color LED |
| Input | Push Buttons, Potentiometer |

# Repository Structure
## Exercise Summary
### Exercise 1 — Arduino Basics
| Program | Description |
|---|---|
| EX 1.1 | Blink single LED on pin 13 |
| EX 1.2 | Blink 3 LEDs alternatively |
| EX 1.3 | Button-controlled LED |
| EX 1.4 | 3 buttons control 3 LEDs independently |
| EX 1.5 | PWM fade RGB LEDs sequentially |
| EX 1.6 | Combine RGB intensities to produce different colors |
| EX 1.7 | Print button state to Serial Monitor |
| EX 1.8 | Read potentiometer on A2, display in Serial Monitor |
| EX 1.9 | Potentiometer controls RGB LED brightness |
| EX 1.10 | Display text on 16×2 LCD |
| EX 1.11 | Read LDR on A3, display voltage on LCD and Serial Monitor |
| EX 1.12 | LDR threshold — turn LED on/off with LCD status display |
| EX 1.13 | Servo sweep between min and max positions |
| EX 1.14 | Identify the working range of the servo |
| EX 1.15 | Potentiometer controls servo position |
| EX 1.16 | 3-bit binary counter using 3 LEDs |
| EX 1.17 | Count button presses, display on LCD |
| EX 1.18 | Count LDR crossings in 5 seconds, display on LCD |
| EX 1.19 | Parse serial string `"a***b***c"`, extract and display values on LCD |
| EX 1.20 | Duplex communication between two Induinos — master and slave exchange LDR and POT values in `"aLDRbPOTc"` string format, each displaying the other's values on LCD |

### Exercise 2 — Sensor & Actuator Integration
| Program | Description |
|---|---|
| EX 2.1 | Button-controlled servo — CW/CCW by 1° per press |
| EX 2.2 | Test and read IR proximity sensor |
| EX 2.3 | IR sensor triggers LED |
| EX 2.4 | IR sensor stops/resumes servo sweep |
| EX 2.5 | Serial command start/stop servo sweep |

### Exercise 3 — Project Level
| Program | Description |
|---|---|
| EX 3.1 | Test electromagnet |
| EX 3.2 | IR sensor controls electromagnet |
| EX 3.3 | Manual color sensor calibration using Tri-Color LED and LDR |
| EX 3.4 | Auto color sensor calibration using PWM intensity adjustment |
| EX 3.5 | Base servo sweep with live color sensing displayed on LCD |

### Final Project — Color-Based Object Sorting
Full autonomous demonstration flow:
1. Start the program
2. Prompt user — auto calibration, manual calibration, or skip (if already calibrated)
3. Finish calibration, prompt user for pick-up and drop color location
4. Search for pick-up color location using the color sensor via the base motor, stop once reached
5. Start the arm motor from the initial position until IR sensor senses the object
6. Energize the electromagnet, wait for 5 seconds
7. Retract the arm back to the initial position, search for the destination color location
8. Once the destination is reached, bring the arm down, drop the object, retract the arm, and go to step 2

# How to Upload

1. Download and install **Arduino IDE** from [arduino.cc](https://www.arduino.cc/en/software)
2. Open the `.ino` file you want to upload
3. Go to **Tools → Board** → select `Arduino Uno`
4. Connect the Induino-R3 to your PC via USB cable
5. Go to **Tools → Port** → select the COM port that appears after connecting
6. Click the **Upload** button (→ arrow icon) or press `Ctrl + U`
7. Wait for the **"Done uploading"** message in the status bar

> Each `.ino` file must be inside a folder with the **exact same name** — this is an Arduino IDE requirement. For example, `EX_1_1_blink_single_led.ino` must be inside a folder named `EX_1_1_blink_single_led`.
> If the COM port is not visible, install the **CH340 USB driver** for Induino-R3.

# Course Info

**Course:** ED5080 — Mechatronics System Lab  
**Department:** Engineering Design  
**Institute:** Indian Institute of Technology Madras (IIT Madras)  
**Faculty:** Prof. Nilesh J. Vasa  
**Staff:** Dhananchezhiyan P, Ashok Kumar B, Sudhakar K

# License

This repository is for academic and learning purposes.
