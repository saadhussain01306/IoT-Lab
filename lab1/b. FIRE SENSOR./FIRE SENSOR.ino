
const int fireSensorPin = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(fireSensorPin, INPUT);
}

void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  delay(500);
}

/*
const int buzzerPin = 9;
const int fireSensorPin = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
}
void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  if(fireValue == 0)
  {
    digitalWrite(buzzerPin, HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}

*/
