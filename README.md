# Radar_project

This project is a radar system using an ultrasonic sensor and a servo motor, controlled by an Arduino, to detect objects and measure distances. The data is then visualized in real-time using Processing, creating a radar interface.

## Project Overview

The radar scans the environment and detects objects within a range of 40 cm, displaying their distance and angle on a radar-like interface. The Arduino code controls the servo motor and reads distance data from the ultrasonic sensor, while the Processing code visualizes this data on your screen.

### Features:
- **Object Detection:** Detects objects up to 40 cm away.
- **Real-time Visualization:** Displays the position of detected objects on a radar-like interface.

## Project Structure

The project is organized into four main components:
- `Radar_project.ino` - Contains the Arduino sketch that controls the radar system.
- `Radar_visualization.pde` - Contains the Processing sketch that visualizes the radar data.
- `Circuit_diagram.png` - Contains the circuit diagram for connecting the ultrasonic sensor, servo motor, and Arduino.
- `Setup_picture.png` - Picture of the actual radar setup.

## Hardware Requirements

- Arduino Uno (or any compatible Arduino board)
- Ultrasonic Sensor (e.g., HC-SR04)
- Servo Motor (e.g., SG90)
- Jumper Wires
- Breadboard
- USB Cable (for connecting Arduino to the computer)

## Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software) (for uploading the Arduino code)
- [Processing IDE](https://processing.org/download/) (for running the visualization)
- A serial communication library (already included in Processing)

## Setup Instructions

1. **Hardware Setup:**
   - Follow the circuit diagram to connect the ultrasonic sensor, servo motor, and Arduino.
   - Refer to the setup picture for additional guidance on the physical arrangement.

2. **Arduino Code:**
   - Open the `RadarProject.ino` file in the Arduino IDE.
   - Select the appropriate board and port.
   - Upload the code to your Arduino.

3. **Processing Code:**
   - Open the `RadarVisualization.pde` file in the Processing IDE.
   - Ensure that the correct serial port is specified in the Processing code.
   - Run the Processing sketch to visualize the radar interface.

4. **Run the System:**
   - Once both the Arduino and Processing sketches are running, the radar will start scanning, and you will see real-time visualizations of detected objects.

## Future Improvements

- Extend the range detection beyond 40 cm.
- Add more sensors for better accuracy and coverage.
- Improve the visualization interface with additional features like object tracking or heat maps.

## Author

Adapted from the Indian LifeHacker YouTube channel.
Edited by **Helina Semu**.

