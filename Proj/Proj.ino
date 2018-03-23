  
  // Initialize 
  const int rowOne = 13;       // the number of the LED pin
  const int rowTwo =  12;      // the number of the LED pin
  const int rowThree =  11;      // the number of the LED pin
  const int rowFour =  10;      // the number of the LED pin
  const int buttonOne =  13;      // the number of the Button pin
  const int buttonTwo =  12;      // the number of the Button pin
  const int buttonThree =  11;      // the number of the Button pin
  const int buttonFour =  10;      // the number of the Button pin
  const int row = random(10, 14);
  const int buttonState = 0;  

void setup() {
  // put your setup code here, to run once:
  pinMode(rowOne, OUTPUT);
  pinMode(rowTwo, OUTPUT);
  pinMode(rowThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
  pinMode(buttonThree, INPUT);
  pinMode(buttonFour, INPUT);
}

void loop() {
  buttonStateOne = digitalRead(buttonOne);
  buttonStateTwo = digitalRead(buttonTwo);
  buttonStateThree = digitalRead(buttonThree);
  buttonStateFour = digitalRead(buttonFour);
  
  digitalWrite(row, HIGH);
  delay(2000);
  
  if (buttonStateOne == HIGH) {
    // turn LED on:
    digitalWrite(buttonOne, Low);
  }

  if (buttonStateTwo == HIGH) {
    // turn LED on:
    digitalWrite(buttonTwo, Low);
  }

  if (buttonStateThree == HIGH) {
    // turn LED on:
    digitalWrite(buttonThree, Low);
  }

  if (buttonStateFour == HIGH) {
    // turn LED on:
    digitalWrite(buttonFour, Low);
  }
}
