#include <Arduino.h>
#include <ESP32Servo.h>

Servo myServo; //create a Servo object for easy control
const int SERVO_PIN = 12; // set according to which pin servo's data line is connected to

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200); // setup serial monitor with rate of 115200 bits per second

  myServo.setPeriodHertz(50); // set PWM period, gotten from datasheet
  myServo.attach(SERVO_PIN, 1000, 2000); // set servo to a pin and then specify min and max pulse width, both can be found in the datasheet

  Serial.println("Setup complete"); // debug message to show that setup completed successfully
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int pos = 0; pos <= 180; pos++){
    myServo.write(pos); // set the servo to an angle between 0 and 180
    delay(50); // wait 50 ms for the servo to be able to move

    Serial.print("Moved to "); // print out a debug message saying where the servo moves to
    Serial.println(pos); 
  }
}
