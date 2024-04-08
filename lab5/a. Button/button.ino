const int buttonPin = 2; // Digital pin connected to button
const int ledPin = 13;   // Digital pin connected to LED

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
}
