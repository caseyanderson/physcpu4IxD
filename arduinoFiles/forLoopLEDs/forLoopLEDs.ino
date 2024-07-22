/*
for loop LEDs
CTA 2024
*/

int ledPins[] = {
  3,5,6,9
};
int pinCount = 4;
int interval = 100;

void setup() {
  for(int counter = 0; counter < pinCount; counter++){
    pinMode(ledPins[counter], OUTPUT);
  }
  Serial.begin(9600);
  Serial.println("Outputs initialized");
}

void loop() {
  for (int counter; counter < pinCount; counter++){
    digitalWrite(ledPins[counter], HIGH);
    delay(interval);
    digitalWrite(ledPins[counter], LOW);
  }
}
