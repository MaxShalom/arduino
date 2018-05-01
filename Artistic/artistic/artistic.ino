#include <Servo.h>

Servo armServo;  
Servo legServo;

int pos = 0;
int pos2 = 0;

void setup() {
  armServo.attach(9);
  legServo.attach(10);
}

void loop() {
  moveArm();
  moveLeg();
}

void moveArm() {
  for (pos = 0; pos <= 180; pos += 18) { 
    armServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 18) { // goes from 180 degrees to 0 degrees
    armServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
}

void moveLeg() {
  for (pos2 = 0; pos2 <= 180; pos2 += 18) { 
    legServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 18) { // goes from 180 degrees to 0 degrees
    legServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
}

