const int laserPin = 8; // Digital pin connected to laser module

void setup() {
  pinMode(laserPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Turn on the laser for 1 second
  digitalWrite(laserPin, HIGH);
  Serial.println("HIGH");
  delay(1000);
  
  
  // Turn off the laser for 1 second
  digitalWrite(laserPin, LOW);
  Serial.println("low");
  delay(1000);
}
