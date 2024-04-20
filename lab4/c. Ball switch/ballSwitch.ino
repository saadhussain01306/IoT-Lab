const int ballSwitchPin = 2; // Digital pin connected to ball switch
const int ledPin = 13;       // Digital pin connected to LED (it is an in-built LED in UNO)

void setup() {
  pinMode(ballSwitchPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int ballState = digitalRead(ballSwitchPin);
  
  if (ballState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("High"); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Low");  // Turn off LED
  }
  delay(1000);
}
