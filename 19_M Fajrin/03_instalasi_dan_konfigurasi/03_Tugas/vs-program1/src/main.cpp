#include <Arduino.h>

void setup() {
  pinMode(D0,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(D0, HIGH);
  delay(1000);
  digitalWrite(D0, LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
}