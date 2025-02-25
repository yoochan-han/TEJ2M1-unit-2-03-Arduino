/*
  blink program with breadboard

  created on Feb 2025
  by yoochan Han
*/

int blinkTime = 1000; //set variable to 1000
int Pin5 = 5;

void setup()
{
  pinMode(Pin5, OUTPUT);
}

void loop()
{
  digitalWrite(Pin5, HIGH);
  delay(1000); // Wait for blinkTime
  digitalWrite(Pin5, LOW);
  delay(1000); // Wait for a second
}
