const int tiltSwitchPin = 2; // Digital pin connected to tilt switch
const int ledPin = 13;       // Digital pin connected to LED (it is an in-built LED in UNO)

void setup() {
  pinMode(tiltSwitchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int tiltState = digitalRead(tiltSwitchPin);
  
  if (tiltState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
}
