/*
button counter no block
Casey Anderson
*/

const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;

int counter = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    counter++;
  } else {
    digitalWrite(ledPin, LOW);
  }
  Serial.print("num presses: ");
  Serial.println(counter);
}
