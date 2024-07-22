/*
analog read threshold 2x LEDs
*/

int sensorPin = A0;
int led1Pin = 13;
int led2Pin = 12;
int sensorValue = 0;

int threshold = 200;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);

  if(sensorValue > threshold){
    Serial.println("Above");
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, LOW);
  } else {
    Serial.println("Below");
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, HIGH);
  }

  Serial.print("sensor val: ");
  Serial.println(sensorValue);
  
  delay(50);
}
