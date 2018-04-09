  // Import
  #include <LiquidCrystal.h>

  
  // Initialize
  const int rowOne = 13;            // the number of the LED pin
  const int rowTwo =  12;
  const int rowThree =  11;
  const int rowFour =  10;
  
  const int buttonOne =  13;        // the number of the Button pin
  const int buttonTwo =  12;
  const int buttonThree =  11;
  const int buttonFour =  10;
  
  const int row = random(10, 14);   //Chooses random light to light up

  const int score;
  
  const int buttonStateOne = 0;     // Buttons
  const int buttonStateTwo = 0;  
  const int buttonStateThree = 0;  
  const int buttonStateFour = 0;

  const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


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

  // set up the LCD's number of columns and rows:
  lcd.begin(3, 1);
  // Print a message to the LCD.
  lcd.print(score);
}

void loop() {
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
      score++;
      lcd.display();
    }
  }

  if (rowTwo == HIGH) {
    if (buttonStateTwo == HIGH) {
      // turn LED off:
      digitalWrite(rowTwo, LOW);
      score++;
      lcd.display();
    }
  }

  if (rowThree == HIGH) {
    if (buttonStateThree == HIGH) {
      // turn LED off:
      digitalWrite(rowThree, LOW);
      score++;
      lcd.display();
    }
  }

  if (rowFour ==  HIGH) {
    if (buttonStateFour == HIGH) {
      // turn LED off:
      digitalWrite(rowFour, LOW);
      score++;
      lcd.display();
    }
  }
}
