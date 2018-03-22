
#include <Servo.h>

Servo myservo;

int pos = random(181);

void setup() {
  myservo.attach(9);
}

void loop() {
  myservo.write(pos);              
  delay(1000);
}
