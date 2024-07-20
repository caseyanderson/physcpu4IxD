/*
button counter
CTA, 2024
*/

const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;
int lastButtonState = 0;

int counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {

    if (buttonState == HIGH) {

      counter++;
      Serial.println("press");
      Serial.print("number of button presses: ");
      Serial.println(counter);
      } else {
        Serial.println("zzz");
      }
      delay(50);
  }
lastButtonState = buttonState;
}