// Define the digital pin connected to the IR LED
const int irLedPin = 8;

void setup() {
  // Configure the IR LED pin as an output
  pinMode(irLedPin, OUTPUT);
}

void loop() {
  // Turn on the IR LED to emit IR signals
  digitalWrite(irLedPin, HIGH); // Set the pin voltage to HIGH
  delay(100); // Wait for 100 milliseconds (adjust as needed)
  
  // Turn off the IR LED
  digitalWrite(irLedPin, LOW); // Set the pin voltage to LOW
  delay(100); // Wait for 100 milliseconds (adjust as needed)
}
