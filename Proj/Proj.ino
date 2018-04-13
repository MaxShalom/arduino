
  // Initialize
  int rowOne = 13;            // the number of the LED pin
  int rowTwo =  12;
  int rowThree =  11;
  int rowFour =  10;
  
  int buttonOne =  1;         // the number of the Button pin
  int buttonTwo =  2;
  int buttonThree =  3;
  int buttonFour =  4;
  
  int buttonStateOne = 0;     // Buttons
  int buttonStateTwo = 0;  
  int buttonStateThree = 0;  
  int buttonStateFour = 0;

  int row;


void setup() {
  // put your setup code here, to run once:
  pinMode(rowOne, OUTPUT);
  pinMode(rowTwo, OUTPUT);
  pinMode(rowThree, OUTPUT);
  pinMode(rowFour, OUTPUT);
  
  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
  pinMode(buttonThree, INPUT);
  pinMode(buttonFour, INPUT);
}

void loop() {
  row = random(10, 14);   //Chooses random light to light up
  
  buttonStateOne = digitalRead(buttonOne);
  buttonStateTwo = digitalRead(buttonTwo);
  buttonStateThree = digitalRead(buttonThree);
  buttonStateFour = digitalRead(buttonFour);
  
  digitalWrite(row, HIGH);
  delay(2000);
  
  if (rowOne == HIGH) {
    if (buttonStateOne == HIGH) {
      // turn LED off:
      digitalWrite(rowOne, LOW);
    }
  }

  if (rowTwo == HIGH) {
    if (buttonStateTwo == HIGH) {
      // turn LED off:
      digitalWrite(rowTwo, LOW);
    }
  }

  if (rowThree == HIGH) {
    if (buttonStateThree == HIGH) {
      // turn LED off:
      digitalWrite(rowThree, LOW);
    }
  }

  if (rowFour ==  HIGH) {
    if (buttonStateFour == HIGH) {
      // turn LED off:
      digitalWrite(rowFour, LOW);
    }
  }
}
