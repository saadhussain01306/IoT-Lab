const int laserPin = 8; // Digital pin connected to laser module

void setup() {
  pinMode(laserPin, OUTPUT);
}

void loop() {
  // Turn on the laser for 1 second
  digitalWrite(laserPin, HIGH);
  delay(1000);
  
  // Turn off the laser for 1 second
  digitalWrite(laserPin, LOW);
  delay(1000);
}
