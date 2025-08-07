const int buttonPin = 2;  
const int ledPin =  7;   

bool lastButtonState = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  bool currentButtonState = digitalRead(buttonPin);
  
  if (currentButtonState != lastButtonState) {
    delay(50); //

    lastButtonState = currentButtonState; //toggle

    if (lastButtonState == LOW) {
      digitalWrite(ledPin, HIGH); // Turn the LED on  
      Serial.println("pressed");
      } else {
      digitalWrite(ledPin, LOW); // Turn the LED off
      Serial.println("not pressed");
      }
    }
}
