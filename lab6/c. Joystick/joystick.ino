// Define the analog pin connected to joystick X axis
const int joyXPin = A0;
// Define the analog pin connected to joystick Y axis
const int joyYPin = A1;
// Define the digital pin connected to joystick switch
const int joySwitchPin = 2;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set joystick X axis pin as input
  pinMode(joyXPin, INPUT);
  // Set joystick Y axis pin as input
  pinMode(joyYPin, INPUT);

  // Set joystick switch pin as input with internal pull-up resistor
  pinMode(joySwitchPin, INPUT_PULLUP);
  // Set initial state of the switch pin to HIGH
  digitalWrite(joySwitchPin, HIGH);
}


void loop() {
  // Read X axis value from joystick
  int joyXValue = analogRead(joyXPin);
  // Read Y axis value from joystick
  int joyYValue = analogRead(joyYPin);
  // Read switch state from joystick
  int switchState = digitalRead(joySwitchPin);

  // Print the X and Y axis values and switch state to the serial monitor
  Serial.print("X: ");
  Serial.print(joyXValue);
  Serial.print(", Y: ");
  Serial.print(joyYValue);
  Serial.print(", Switch: ");
  Serial.println(switchState);

  // Adjust the delay as needed
  delay(500);
}
