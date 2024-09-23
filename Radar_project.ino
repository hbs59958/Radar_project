// Project: Arduino Radar System
// Author: Helina Semu
// Description: This code controls a servo motor to sweep an ultrasonic sensor from 15 to 165 degrees,
// capturing distance measurements and sending them to the Serial Monitor for real-time visualization.

#include <Servo.h> // Includes the Servo library for controlling the servo motor

// Defines Trigger and Echo pins of the Ultrasonic Sensor
const int trigPin = 2;
const int echoPin = 3;

// Variables to hold the duration of the pulse and the calculated distance
long duration;
int distance;

Servo myServo; // Creates a Servo object to control the servo motor

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output to send ultrasonic waves
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input to receive reflected waves
  Serial.begin(9600); // Initializes serial communication at 9600 baud rate
  myServo.attach(4);  // Attaches the servo motor to pin 4
}

void loop() {
  // Rotates the servo motor from 15 to 165 degrees and measures distance
  for (int i = 15; i <= 165; i++) {  
    myServo.write(i); // Rotates the servo to the current angle
    delay(30); // Small delay to allow the servo to reach the position
    distance = calculateDistance(); // Calls the function to calculate the distance
    
    // Sends the angle and distance data to the Serial Monitor
    Serial.print(i);       // Sends the current angle
    Serial.print(",");      // Adds a comma for data separation
    Serial.print(distance); // Sends the measured distance
    Serial.print(".");      // Adds a period to mark the end of the data point
  }

  // Rotates the servo motor from 165 back to 15 degrees and measures distance
  for (int i = 165; i > 15; i--) {  
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

// Function to calculate the distance using the ultrasonic sensor
int calculateDistance() { 
  digitalWrite(trigPin, LOW); // Ensures trigPin is low
  delayMicroseconds(2);
  
  // Sends a 10 microsecond HIGH pulse to trigger the sensor
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measures the time taken for the pulse to return
  duration = pulseIn(echoPin, HIGH); 
  
  // Calculates the distance in centimeters using the speed of sound
  distance = duration * 0.034 / 2; 
  return distance; // Returns the calculated distance
}
