#include <Arduino.h>

void setup() {
 pinMode(D0,OUTPUT);//atur pin-pin digital sebagai output 
 Serial.println("----------------------");
 Serial.println("Anggota Kelompok");
 Serial.println("1. Darman Saragih");
 Serial.println("2. Mutiara Rahmanda");
 Serial.println("3. Qorina Anindhita");
  Serial.println("----------------------");
 Serial.println("Instalasi dan Konfigurasi Mikrokontroller");
}

void loop() {
  digitalWrite(D0, HIGH);
  delay(1000);
  digitalWrite(D0, LOW);
  delay(1000);
}