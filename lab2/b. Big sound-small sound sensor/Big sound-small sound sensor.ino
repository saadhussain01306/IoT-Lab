const int soundSensorPin = A0; // Analog pin connected to the Big Sound Sensor Module
const int ledPin = 2; // Digital pin connected to the LED (optional)

void setup() {
  pinMode(soundSensorPin, INPUT); // Set the Sound Sensor pin as INPUT
  pinMode(ledPin, OUTPUT); // Set the LED pin as OUTPUT (optional)
  Serial.begin(9600); // Initialize serial communication for debugging (optional)
}

void loop() {
  int soundValue = analogRead(soundSensorPin); // Read the analog value from the Sound Sensor
  
  // Display the sound sensor value on the Serial Monitor
  Serial.print("Sound Level: ");
  Serial.println(soundValue);

  // Adjust the threshold value according to your environment
  int threshold = 400;

  if (soundValue > threshold) {
    // Sound detected! Add your desired action here.
    // For example, turn on the LED as a visual indication of sound detection.
    digitalWrite(ledPin, HIGH);
  } else {
    // No sound detected, turn off the LED (optional)
    digitalWrite(ledPin, LOW);
  }

  delay(100); // Add a small delay to avoid rapid repeated detections
}
