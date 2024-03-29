const int analogInPin = A0;
const int analogOutPin1 = 11;

int sensorValue = 0;
int outputValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);

  outputValue = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(analogOutPin1, outputValue);

  Serial.println(outputValue);

  delay(2);
}
