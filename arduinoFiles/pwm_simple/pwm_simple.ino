/*
  PWM Simple
*/

int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(led, 255);

  delay(250);

  analogWrite(led, 127);

  delay(250);

  analogWrite(led, 0);

  delay(250);
}
