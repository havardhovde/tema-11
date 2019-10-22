int inPin = 13;

void setup() {
 pinMode(inPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(inPin, HIGH);
    delay(100);
    digitalWrite(inPin, LOW);
    delay(900);
  }
  
  for (int i = 0 ; i < 2; i++) {
    digitalWrite(inPin, HIGH);
    delay(200);
    digitalWrite(inPin, LOW);
    delay(200);
  }
}
