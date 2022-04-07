#include <Arduino.h>

void setup() {
  Serial.begin(115200); // setbaudrate 115200
}

void loop() {
  Serial.println("Hello World"); // menampilkan string ke serial monitor
  delay(1000); // jeda 1000 ms
}