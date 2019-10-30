void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int r = digitalRead(2);
  Serial.println(r); 

  digitalWrite(13, r);
}
