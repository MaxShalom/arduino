int ledDelay;
int score = 0;
byte currentLed;
boolean started;
boolean newLed = true;
byte health = 3;
boolean updateScreen=true;
boolean lostHealth=false;


void setup() {
  pinMode(2,INPUT);
  int val2;
  int val3;
  int val4;
  int val5;                        // variable for reading the pin status
  int buttonState2;
  int buttonState3;
  int buttonState4;
  int buttonState5;                // variable\ to hold the last button state


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
    started=true; //start the game if any button is pressed
  }
  if (started==true){
    if (newLed ==true){ //we need another LED
      digitalWrite(currentLed, LOW); // turn off the old one
      int randomLed = random(9,13); // pick a random LED
      while(currentLed == randomLed){ //make sure it's not the same as the last one
        randomLed = random(9,13); 
      } 
      currentLed = randomLed; 
      digitalWrite(currentLed, HIGH); //light up the new LED
      delay(100); //wait a little bit
      newLed = false;
    }

    val2 = digitalRead(2);      // read input value and store it in val
    val3 = digitalRead(3);      // read input value and store it in val
    val4 = digitalRead(4);      // read input value and store it in val
    val5 = digitalRead(5);      // read input value and store it in val

    if (val2 != buttonState2 && val2 == HIGH || val3 != buttonState3 && val3 == HIGH || val4 != buttonState4 && val4 == HIGH || val5 != buttonState5 && val5 == HIGH) {          // the button state has changed!
      if (currentLed == 9 && digitalRead(5) == HIGH){ // did they hit the right button? 
        score++;
        newLed = true;
        ledDelay = 0;
      }
      else if (currentLed == 10 && digitalRead(4) == HIGH){ // did they hit the right button? 
        score++;
        newLed = true;
        ledDelay = 0;
      }
      else if (currentLed == 11 && digitalRead(3) == HIGH){ // did they hit the right button? 
        score++;
        newLed = true;
        ledDelay = 0;
      }
      else if (currentLed == 12 && digitalRead(2) == HIGH){ // did they hit the right button? 
        score++;
        newLed = true;
        ledDelay = 0;
      }
      else if (digitalRead(2)==HIGH || digitalRead(3)==HIGH || digitalRead(4)==HIGH || digitalRead(5)==HIGH) { // did they hit the wrong button? 
        loseHealth();
        lostHealth=true;
      }
    }
    else { // they didnt press anything
      ledDelay++;
      delay(1);
    }

    buttonState2 = val2;                 // save the new state in our variable
    buttonState3 = val3;                 // save the new state in our variable
    buttonState4 = val4;                 // save the new state in our variable
    buttonState5 = val5;                 // save the new state in our variable
    
    // did the LED reach the timeout threshold?
    if (score <= 10){
      if(ledDelay == 1000){
        loseHealth();
        lostHealth=true;
      }
    }
    else if (score <= 15){
      if(ledDelay == 800){
        loseHealth();
        lostHealth=true;
      }
    }
    else if (score <= 20){
      if(ledDelay == 600){
        loseHealth();
        lostHealth=true;
      }
    }
    else if (score <= 25){
      if(ledDelay == 400){
        loseHealth();
        lostHealth=true;
      }
    }
    else if (score <= 30){
      if(ledDelay == 200){
        loseHealth();
        lostHealth=true;
      }
    }
    else if (score > 30){
      if(ledDelay == (220-score)){
        loseHealth();
        lostHealth=true;
      }
    }
  }
  lostHealth=false;
}

// subtract one health
void loseHealth(){
  if(lostHealth==false){
    health--;
    newLed=true;
    ledDelay = 0;
    if(health <= 0){ // did they lose the game?
      started=false;
      updateScreen=true; 
      // blink 3 times
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      delay(200);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      delay(200);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      delay(200);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      delay(200);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      delay(200);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
    }
  }
}
