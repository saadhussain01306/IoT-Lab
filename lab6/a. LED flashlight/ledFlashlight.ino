const int ledPin = 13; // Digital pin connected to LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn on LED
  delay(500); // Adjust the delay for desired flashing frequency
  digitalWrite(ledPin, LOW); // Turn off LED
  delay(500); // Adjust the delay for desired flashing frequency
}
