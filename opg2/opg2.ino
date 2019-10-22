void setup() {
  pinMode(13, OUTPUT);
}

void dot() {
  analogWrite(13, HIGH);
  delay(300);
  analogWrite(13, LOW);
  delay(300);
}

void dash() {
  analogWrite(13, HIGH);
  delay(1000);
  analogWrite(13, LOW);
  delay(300);
}

void loop() {
  //H
  for (int i = 0; i < 4; i++) {
    dot();
  }
  delay(1000);
  //E
  dot();
  delay(1000);
  //L x 2
  for (int i = 0; i < 2; i++) {
    //.
    dot();
    //-
    dash();
    //. x 2
    for (int o = 0; o < 2; o++) {
      dot();
    }
    delay(1000);
  }
  delay(1000);
  //O
  for (int i = 0; i < 3; i++) {
    dash();
  }
  delay(1000);
}
