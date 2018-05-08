#include <Servo.h>

Servo armServo;
Servo legServo;

int pos = 0;

void setup() {
  armServo.attach(9);
  legServo.attach(10);
}

void loop() {
  shoot();
}

void shoot() {
  for (pos = 0; pos <= 90; pos += 18) {
    armServo.write(pos);
    legServo.write(pos);
  }
  for (pos = 90; pos >= 0; pos -= 18) {
    armServo.write(pos);
    legServo.write(pos);
  }
}
