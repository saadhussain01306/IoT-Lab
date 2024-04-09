const int shockSensorPin = 7; // Digital pin connected to the Shock Sensor module
const int alertPin = 13;       // Digital pin connected to the Buzzer or LED

void setup() {
  pinMode(shockSensorPin, INPUT);   // Set the Shock Sensor pin as INPUT
  pinMode(alertPin, OUTPUT);        // Set the Buzzer or LED pin as OUTPUT
  digitalWrite(alertPin, LOW);      // Turn off the Buzzer or LED initially
  Serial.begin(9600);               // Initialize serial communication for debugging 
}

void loop() {
  int shockValue = digitalRead(shockSensorPin); // Read the digital value from the Shock Sensor
  
  // Check if shock is detected
  if (shockValue == HIGH) {
    Serial.println("Shock detected!"); // Display a message when a shock is detected
    digitalWrite(alertPin, HIGH);      // Turn on the Buzzer or LED
  } else {
    // No shock detected, turn off the Buzzer or LED
    digitalWrite(alertPin, LOW); // Turn off the Buzzer or LED
  }

  delay(100); // Add a small delay to avoid rapid repeated detections
}
