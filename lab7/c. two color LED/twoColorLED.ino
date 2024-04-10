int redpin = 11; // pin for red signal
int greenpin = 10; // pin for green signal
int val;

void setup() {
	pinMode(redpin, OUTPUT);
	pinMode(greenpin, OUTPUT);
}

void loop() {
	for(val = 255; val > 0; val--) { 
		analogWrite(redpin, val); //dim red
		analogWrite(greenpin, 255 - val); // brighten green
		delay(15);
	}
	for(val = 0; val < 255; val++) { 
		analogWrite(redpin, val); //brighten red
		analogWrite(greenpin, 255 - val); //dim green
		delay(15);
	}
}
