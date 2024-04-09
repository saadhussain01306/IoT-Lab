int ledPin = 13;
int buttonPin = 7;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);      // sets the digital pin 13 as output
  pinMode(buttonPin, INPUT);      // sets the digital pin 7 as input
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
