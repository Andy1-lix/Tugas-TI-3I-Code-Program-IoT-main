#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //set baudrate
  pinMode(BUILTIN_LED,OUTPUT); //set GPIO2 atau D4 nyala
  // pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // TES 1 LED BUILT IN
  Serial.println("Matikan LED"); //tampilkan di serial monitor
  digitalWrite(BUILTIN_LED,HIGH); //matikan LED
  delay(1000); //jedal 1000 ms
  Serial.println("Nyalakan LED"); //tampilkan di serial monitor
  digitalWrite(BUILTIN_LED,LOW); //nyalakan LED
  delay(1000); //jedal 1000 ms

  // TES 2 LED BUILT IN & RED LED

  // digitalWrite(5,HIGH); // LED RED nyala
  // digitalWrite(BUILTIN_LED,HIGH); // LED BLUE mati
  // delay(1000);
  // digitalWrite(5,LOW);
  // digitalWrite(BUILTIN_LED,LOW);
  // delay(1000);
}