const int buttonPin = 2;
const int ledPin = 13;
const int clickDelay = 600;

int buttonPushes = 0;
int buttonState = 0;
int lastButtonState = 0;

unsigned long time1;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushes++;
      Serial.println(buttonPushes);
    }
    delay(50);
  }
  lastButtonState = buttonState;

  if (buttonPushes == 1) {
    time1 = millis();
    delay(50);
  }
    
  if (buttonPushes == 2) {
    if (millis() - time1 < 600) {
      digitalWrite(ledPin, HIGH);
      buttonPushes = 0;
    } else {
      buttonPushes = 0;
    }
  }
}


//const int buttonPin = 2;
//const int ledPin = 13;
//
//int buttonPushCounter = 0;
//int buttonState = 0;
//int lastButtonState = 0;
//
//unsigned long time1;
//
//void setup() {
//  pinMode(buttonPin, INPUT);
//  pinMode(ledPin, OUTPUT);
//  Serial.begin(9600);
//}
//
//void loop() {
//  buttonState = digitalRead(buttonPin);
//
//  if (buttonState != lastButtonState) {
//    if (buttonState == HIGH) {
//      buttonPushCounter++;
//      Serial.println("on");
//      Serial.print("number of button pushes: ");
//      Serial.println(buttonPushCounter);
//    } else {
//      Serial.println("off");
//    }
//    delay(50);
//  }
//  
//  lastButtonState = buttonState;
//
//  if (buttonPushCounter == 1) {
//    time1 = millis();
//  }
//  
// if (millis() - time1 <= 600) {
//  digitalWrite(ledPin, HIGH);
//  Serial.println("test");
//  buttonPushCounter = 0;
// } else {
//  digitalWrite(ledPin, LOW);
//  buttonPushCounter = 0;
// }
//}
