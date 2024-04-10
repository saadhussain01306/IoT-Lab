// implemented using SMD RGB LED module

const int redPin = 9;    // Digital pin connected to the red lead of SMD RGB LED
const int greenPin = 10; // Digital pin connected to the green lead of SMD RGB LED
const int bluePin = 11;  // Digital pin connected to the blue lead of SMD RGB LED

// Define colors (R, G, B)
const int colors[7][3] = {
  {255, 0, 0},     // Red
  {0, 255, 0},     // Green
  {0, 0, 255},     // Blue
  {255, 255, 0},   // Yellow
  {0, 255, 255},   // Cyan
  {255, 0, 255},   // Magenta
  {255, 255, 255}  // White
};

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Cycle through colors
  for (int colorIndex = 0; colorIndex < 7; colorIndex++) {
    setColor(colors[colorIndex][0], colors[colorIndex][1], colors[colorIndex][2]);
    delay(1000);
  }
}

// Function to set the color of the SMD RGB LED
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);     // Set intensity of red LED
  analogWrite(greenPin, greenValue); // Set intensity of green LED
  analogWrite(bluePin, blueValue);   // Set intensity of blue LED
}
