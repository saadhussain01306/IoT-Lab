const int flashLightPin = 8; // Digital pin connected to laser module

void setup() {
  pinMode(flashLightPin, OUTPUT);
}

void loop() {
  // Turn on the laser for 1 second
  digitalWrite(flashLightPin, HIGH);
  delay(1000);
  
  // Turn off the laser for 1 second
  digitalWrite(flashLightPin, LOW);
  delay(1000);
}
