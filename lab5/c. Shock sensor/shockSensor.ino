const int shockSensorPin = 2; // Digital pin connected to shock sensor
const int ledPin = 13;         // Digital pin connected to LED

void setup() {
  pinMode(shockSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int shockState = digitalRead(shockSensorPin);
  
  if (shockState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
}
