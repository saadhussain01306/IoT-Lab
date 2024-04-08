const int joyXPin = A0; // Analog pin connected to joystick X axis
const int joyYPin = A1; // Analog pin connected to joystick Y axis

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  int joyXValue = analogRead(joyXPin); // Read X axis value
  int joyYValue = analogRead(joyYPin); // Read Y axis value

  // Print the X and Y axis values to the serial monitor
  Serial.print("X: ");
  Serial.print(joyXValue);
  Serial.print(", Y: ");
  Serial.println(joyYValue);

  delay(500); // Adjust the delay as needed
}
