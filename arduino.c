/*
  created on Feb 2025
  by yoochan Han
  
  blink program with breadboard
*/

const int PIN_5 = 5;
int blinkTime = 1000; //set variable to 1000

void setup()
{
  pinMode(PIN_5, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_5, HIGH);
  delay(blinkTime); // Wait for blinkTime
  digitalWrite(PIN_5, LOW);
  delay(blinkTime); // Wait for a second
} 
