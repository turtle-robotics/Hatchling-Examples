#include <Arduino.h>
#include <HCSR04.h>

const int TRIGGER_PIN = 12;
const int ECHO_PIN = 13;

UltraSonicDistanceSensor hc(TRIGGER_PIN, ECHO_PIN); // creating a sensor class called hc


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200); // setup serial monitor with rate of 115200 bits per second
  Serial.println("Setup Complete"); // debug message to show that setup completed successfully
}

void loop() {
  // put your main code here, to run repeatedly:

  float dist = hc.measureDistanceCm(); // saves the measured centimeter value as a decimal value
  Serial.println(dist); // prints the distance

  delay(60); // waits 50 ms before reading the next data point
}
