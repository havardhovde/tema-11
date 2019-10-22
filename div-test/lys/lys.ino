void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop() {
    int r = analogRead(A0);
    
    digitalWrite(13, HIGH);
    delay(r);
    digitalWrite(13, LOW);
    delay(r);
}