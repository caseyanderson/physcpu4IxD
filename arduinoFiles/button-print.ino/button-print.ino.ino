/*
button-print-led
CTA, 2024
*/

const int buttonPin = 2;
const int ledPin = 13;    // the number of the LED pin


int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    Serial.println("On!");
    digitalWrite(ledPin, HIGH);
    } else {
      Serial.println("Off!");
      digitalWrite(ledPin, LOW);
    }
}
