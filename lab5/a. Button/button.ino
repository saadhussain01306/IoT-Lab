const int buttonPin = 2; // Digital pin connected to button
const int ledPin = 13;   // Digital pin connected to LED

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("High");
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
    Serial.println("Low");
  }
  delay(1000);
}
