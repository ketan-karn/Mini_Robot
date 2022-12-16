#include <Servo.h>

Servo myServo;  // create a servo object to control the servo motor

void setup() {
  myServo.attach(9);  // attach the servo to pin 9
}

void loop() {
  for (int i = 0; i <= 180; i++) {  // loop from 0 to 180 degrees
    myServo.write(i);              // set the servo to the specified angle
    delay(15);                     // wait for the servo to reach the specified angle
  }
  for (int i = 180; i >= 0; i--) {  // loop from 180 to 0 degrees
    myServo.write(i);              // set the servo to the specified angle
    delay(15);                     // wait for the servo to reach the specified angle
  }
}
