#define BUTTON_PIN 4 
struct touch { 
	 byte wasPressed = LOW; 
	 byte isPressed = LOW; 
}; 
touch touch; 
void setup() 
{ 
	 pinMode(BUTTON_PIN, INPUT); 
	 Serial.begin(115200); 
} 
void loop() 
{ 
	 touch.isPressed = isTouchPressed(BUTTON_PIN); 
	 if (touch.wasPressed != touch.isPressed) { 
	   Serial.println("Touch pressed"); 
	 } 
	 touch.wasPressed = touch.isPressed; 
} 
bool isTouchPressed(int pin) 
{ 
	 return digitalRead(pin) == HIGH; 
} 
