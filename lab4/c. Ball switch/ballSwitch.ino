const int ballSwitchPin = 2; // Digital pin connected to ball switch
const int ledPin = 13;       // Digital pin connected to LED (it is an in-built LED in UNO)

void setup() {
  pinMode(ballSwitchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ballState = digitalRead(ballSwitchPin);
  
  if (ballState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
}
