int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int light = analogRead(A0);

  Serial.println(light);
  if (light < 150) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
