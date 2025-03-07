#include <Arduino.h> // Include the Arduino library functions

// put function declarations here:
#define LED 12 // Pin number of the LED

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);             // Start the Serial Monitor with the specified baud rate (monitor_speed)
  Serial.println("Setup complete"); // Troubleshooting message to indicate that the setup is complete
  pinMode(LED, OUTPUT);             // Set the LED pin as an output
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);   // Turn the LED on by setting the pin voltage output to HIGH
  Serial.println("LED on");  // Troubleshooting message to indicate that the LED should be on
  delay(1000);               // Wait for 1 second (1000 milliseconds)
  digitalWrite(LED, LOW);    // Turn the LED off by setting the pin voltage output to LOW
  Serial.println("LED off"); // Troubleshooting message to indicate that the LED should be off
  delay(1000);               // Wait for 1 second (1000 milliseconds)
}