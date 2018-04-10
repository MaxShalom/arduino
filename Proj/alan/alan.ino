int ledPin = 11;
const int buttonPin = 2; 
int buttonState = 0;

#define COMMON_ANODE

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  
  int colorOne = random(0, 255);
  int colorTwo = random(0, 255);
  int colorThree = random(0, 255);
  
  setColor(colorOne, colorTwo, colorThree);
  delay(1000);

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);
  }
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
}
