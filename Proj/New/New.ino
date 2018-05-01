int ledDelay; // LED timeout
byte currentLed; // the one that is lit up right now
boolean started; // Are you playing the game?
boolean newLed = true; // we need a new LED

int val2;
int val3;
int val4;
int val5;

int buttonState2;
int buttonState3;
int buttonState4;
int buttonState5;


void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  //
  if (digitalRead(2)==HIGH || digitalRead(3)==HIGH || digitalRead(4)==HIGH || digitalRead(5)==HIGH){
    started=true;
  }
  if (started==true){
    if (newLed ==true){ //we need another LED
      digitalWrite(currentLed, LOW); // turn off the old one
      byte randomLed = random(9,13); // pick a random LED
      while(currentLed == randomLed){ //make sure it's not the same as the last one
        randomLed = random(9,13);
      }
      currentLed = randomLed;
      digitalWrite(currentLed, HIGH); //light up the new LED
      delay(100); //wait a little bit
      newLed = false;
    }

    val2 = digitalRead(2);
    val3 = digitalRead(3);
    val4 = digitalRead(4);
    val5 = digitalRead(5);

    if (val2 != buttonState2 && val2 == HIGH || val3 != buttonState3 && val3 == HIGH || val4 != buttonState4 && val4 == HIGH || val5 != buttonState5 && val5 == HIGH) {          // the button state has changed!
      if (currentLed == 9 && digitalRead(5) == HIGH){
        newLed = true;
        ledDelay = 0;
      }
      else if (currentLed == 10 && digitalRead(4) == HIGH){
        newLed = true;
        ledDelay = 0;
      }
      else if (currentLed == 11 && digitalRead(3) == HIGH){
        newLed = true;
        ledDelay = 0;
      }
      else if (currentLed == 12 && digitalRead(2) == HIGH){
        newLed = true;
        ledDelay = 0;
      }
    }
    else {
      ledDelay++;
      delay(1);
    }

    buttonState2 = val2;
    buttonState3 = val3;
    buttonState4 = val4;
    buttonState5 = val5;
   
    
  }
}

