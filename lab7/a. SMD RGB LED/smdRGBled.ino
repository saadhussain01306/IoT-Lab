const int redPin = 9;   // Digital pin connected to the red lead of SMD RGB LED
const int greenPin = 10; // Digital pin connected to the green lead of SMD RGB LED
const int bluePin = 11;  // Digital pin connected to the blue lead of SMD RGB LED

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Change color to red
  setColor(255, 0, 0);
  delay(1000); // Adjust the delay as needed

  // Change color to green
  setColor(0, 255, 0);
  delay(1000); // Adjust the delay as needed

  // Change color to blue
  setColor(0, 0, 255);
  delay(1000); // Adjust the delay as needed
}

// Function to set the color of the SMD RGB LED
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);     // Set intensity of red LED
  analogWrite(greenPin, greenValue); // Set intensity of green LED
  analogWrite(bluePin, blueValue);   // Set intensity of blue LED
}
