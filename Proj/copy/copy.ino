
// Initialize
int rowOne = 13;            // the number of the LED pin
int rowTwo =  12;

int buttonOne =  1;         // the number of the Button pin
int buttonStateOne = 0;     // Buttons
int buttonStateTwo = 0;  
int row;


void setup() {
  // put your setup code here, to run once:
  pinMode(rowOne, OUTPUT);
  pinMode(rowTwo, OUTPUT);

  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
}

void loop() {

  row = random(12, 14);

  buttonStateOne = digitalRead(buttonOne);
  buttonStateTwo = digitalRead(buttonTwo);

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
}
