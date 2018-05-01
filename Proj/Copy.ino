
// Initialize
int rowZero = 13;            // the number of the LED pin
int rowFive =  12;

int buttonOne =  1;         // the number of the Button pin
int buttonStateOne = 0;     // Buttons
int row;


void setup() {
  // put your setup code here, to run once:
  pinMode(rowZero, OUTPUT);
  pinMode(rowFive, OUTPUT);

  pinMode(buttonOne, INPUT);
}

void loop() {

  row = random(12, 14);

  buttonStateOne = digitalRead(buttonOne);

  digitalWrite(row, HIGH);
  delay(2000);

  if (rowZero == HIGH) {
    if (buttonStateOne == HIGH) {
      // turn LED off:
      digitalWrite(rowZero, LOW);
    }
  }

  if (rowFive == HIGH) {
    if (buttonStateTwo == HIGH) {
      // turn LED off:
      digitalWrite(rowFive, LOW);
    }
  }
}
