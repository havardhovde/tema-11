const int analogInPin = A0;
//int outPins[] = { 11, 10, 9, 6, 5, 3 };
//int leds = 3;
//int ledOn = HIGH;
int ledOff = LOW;

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

  if (outputValue = 1) {
    analogWrite(analogOutPin1, outputValue);
    analogWrite(analogOutPin2, ledOff);
    analogWrite(analogOutPin3, ledOff);
  }
  if (outputValue = 2) {
    analogWrite(analogOutPin1, outputValue);
    analogWrite(analogOutPin2, outputValue);
    analogWrite(analogOutPin3, ledOff);
  }
  if (outputValue  = 3) {
    analogWrite(analogOutPin1, outputValue);
    analogWrite(analogOutPin2, outputValue);
    analogWrite(analogOutPin3, outputValue);
  }

  Serial.println(outputValue);

  delay(2);
}
