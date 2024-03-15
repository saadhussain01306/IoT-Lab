int sensorPin = 7;  // line detection sensor interface
int val;            // variable to store sensor reading

void setup() {
  pinMode(sensorPin,INPUT);  // define sensor as input  
  Serial.begin(9600);     // initialize serial communication with PC
}

void loop() {
  val = digitalRead(sensorPin); // read value from sensor
  
  if (val == HIGH) { 
    Serial.println("Line detected"); 
  } else { 
    Serial.println("Line NOT detected"); 
  }

  delay(500);
}
