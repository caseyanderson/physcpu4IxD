/*
analog read threshold
*/

int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

int threshold = 200;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);

  if(sensorValue > threshold){
    Serial.println("ON");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("OFF");
    digitalWrite(ledPin, LOW);
  }

  Serial.print("sensor val: ");
  Serial.println(sensorValue);
  
  delay(50);
}
