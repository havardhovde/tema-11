const int analogInPin = A0;
const int analogOutPin1 = 11;
const int analogOutPin2 = 10;
const int analogOutPin3 = 9;

int sensorValue = 0;
int outputValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);

  outputValue = map(sensorValue, 0, 1023, 0, 255);

  if (outputValue < 85) {
    analogWrite(analogOutPin1, outputValue);
    analogWrite(analogOutPin2, LOW);
    analogWrite(analogOutPin3, LOW);
  }
  if (outputValue > 85) {
    analogWrite(analogOutPin1, outputValue);
    analogWrite(analogOutPin2, outputValue);
    analogWrite(analogOutPin3, LOW);
  }
  if (outputValue > 170) {
    analogWrite(analogOutPin1, outputValue);
    analogWrite(analogOutPin2, outputValue);
    analogWrite(analogOutPin3, outputValue);
  }

  Serial.println(outputValue);

  delay(2);
}
