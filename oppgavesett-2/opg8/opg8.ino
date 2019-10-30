const int MAX_LEVEL = 100;
int sequence[MAX_LEVEL];
int your_sequence[MAX_LEVEL];
int level = 1;

int velocity = 1000;

int ledPins[] = {10, 11, 12, 13};
int ledNum = 4;
int buttonPins[] = {3, 4, 5, 6};
int buttonNum = 4;

void setup() {
  for (int pin = 0; pin < ledNum; pin++) {
    pinMode(ledPins[pin], OUTPUT);
    digitalWrite(ledPins[pin], LOW);
  }
  for (int pin = 0; pin < buttonNum; pin++) {
    pinMode(buttonPins[pin], INPUT);
  }
}

void loop() {
  for (int pin = 0; pin < 4; pin++) {
    if (digitalRead(buttonPins[pin]) == HIGH) {
      digitalWrite(ledPins[pin], HIGH);
    } else {
      digitalWrite(ledPins[pin], LOW);
    }
  }

  if (level == 1) {
    generate_sequence();
  }
  show_sequence();
}

void generate_sequence() {
  randomSeed(millis());

  for (int i = 0; i < MAX_LEVEL; i++) {
    sequence[i] = random(10,14);
  }
}

void show_sequence() {
  
  for (int pin = 0; pin < ledNum; pin++) {
    digitalWrite(ledPins[pin], LOW);
  }
  
  for (int i = 0; i < level; i++) {
    digitalWrite(sequence[i], HIGH);
    delay(velocity);
    digitalWrite(sequence[i], LOW);
    delay(200);
  }
}

void get_sequence() {
  int flag = 0;

  for (int i = 0; i < level; i++) {
    flag = 0;
    while(flag == 0) {
      if digitalRead(3 == LOW) {
        digitalWrite(10, LOW);
      }
      if digitalRead(4 == LOW) {
        digitalWrite(11, LOW);
      }
    }
  }
}
