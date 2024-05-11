const int flashLightPin = 8; // Digital pin connected to flashLight module

void setup() {
  pinMode(flashLightPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Turn on the laser for 1 second
  digitalWrite(flashLightPin, HIGH);
  Serial.println("High");
  delay(1000);
  
  
  // Turn off the laser for 1 second
  digitalWrite(flashLightPin, LOW);
  Serial.println("Low");
  delay(1000);
}
