#include <Arduino.h>
void setup()
{
  Serial.begin(115200);
  delay(250); // 250ms = 0.25s
  Serial.println("ESP32 Touch Test!");
  pinMode(13, OUTPUT);   // PIN GIOP13 connect to Led
  digitalWrite(13, LOW); // PIN GIOP13 off
}

void loop()
{
  if (touchRead(T6) < 45)
  {
    Serial.print("Touch:");
    Serial.println(touchRead(T6)); // get value using T6
    digitalWrite(13, HIGH);        // PIN GIOP13 on
  }
  else
  {
    Serial.print("Touch:");
    Serial.println(touchRead(T6)); // get value using T6
    digitalWrite(13, LOW);         // PIN GIOP13 off
  }
  delay(250); // 250 ms = 0.25 second
}