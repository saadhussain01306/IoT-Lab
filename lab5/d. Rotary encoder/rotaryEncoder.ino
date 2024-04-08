// Variables to store previous and current state of rotary encoder pins
int clkState;
int clkLastState;

void setup() {
  pinMode(clkPin, INPUT);
  pinMode(dtPin, INPUT);
  
  // Attach interrupt for the CLK pin
  attachInterrupt(digitalPinToInterrupt(clkPin), handleEncoder, CHANGE);
}

void loop() {
  // Your code to handle rotary encoder input goes here
}

// Function to handle rotary encoder interrupt
void handleEncoder() {
  clkState = digitalRead(clkPin);
  
  if (clkState != clkLastState) {
    // Check direction of rotation
    if (digitalRead(dtPin) != clkState) {
      // Clockwise rotation
    } else {
      // Counter-clockwise rotation
    }
  }
  
  clkLastState = clkState;
}
