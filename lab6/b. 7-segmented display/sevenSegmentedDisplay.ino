// Define the pin mappings for the segments of the 7-segment display
const int segments[] = {2, 3, 4, 5, 6, 7, 8}; // Example pin numbers for segments A to G

// Define the patterns for each digit (0 to 9)
const byte digitPatterns[10] = {
  B11111100, // 0
  B01100000, // 1
  B11011010, // 2
  B11110010, // 3
  B01100110, // 4
  B10110110, // 5
  B10111110, // 6
  B11100000, // 7
  B11111110, // 8
  B11110110  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

void loop() {
  // Display digits 0 to 9 in sequence
  for (int i = 0; i < 10; i++) {
    displayDigit(i);
    delay(1000); // Adjust the delay as needed
  }
}

// Function to display a digit on the 7-segment display
void displayDigit(int digit) {
  byte pattern = digitPatterns[digit];
  for (int i = 0; i < 7; i++) {
    digitalWrite(segments[i], bitRead(pattern, i));
  }
}
