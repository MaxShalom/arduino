long randNumbers;
int firstLed = 2;
int secondLed = 4;
int buttonPin = 3;
int buttonState;

void setup() {

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
 
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonPin == HIGH) {
    // turn LED on:
    digitalWrite(buttonPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(buttonPin, LOW);
    
    pinMode(buttonPin, INPUT);
  }
}

void loop() {
   randNumbers = random(2);
   delay(50);
   digitalWrite(firstLed, LOW);
   digitalWrite(secondLed, LOW);
   if (randNumbers == 0) {
     digitalWrite(firstLed, HIGH);
   }
   if (randNumbers == 1) {
     digitalWrite(secondLed, HIGH);
   }
   


}


