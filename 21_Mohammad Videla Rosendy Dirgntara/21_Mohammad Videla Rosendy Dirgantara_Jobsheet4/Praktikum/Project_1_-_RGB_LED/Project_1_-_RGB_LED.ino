#include <Arduino.h>
#define RED_LED D5 // LED warna Merah
#define GREEN_LED D6 // LED warna Hijau
#define BLUE_LED D7 // LED warnah Biru

void setup() {
Serial.begin(115200);
pinMode(RED_LED,OUTPUT); // atur pin-pin digital sebagai output untuk LED warna Merah
pinMode(GREEN_LED,OUTPUT); // atur pin-pin digital sebagai output untuk LED warna Hijau
pinMode(BLUE_LED,OUTPUT); // atur pin-pin digital sebagai output untuk LED warna Biru
Serial.println("Contoh Program LED RGB");
}

void rgbLED(){
digitalWrite(RED_LED, HIGH); // LED warna Merah menyala
digitalWrite(GREEN_LED, LOW); 
digitalWrite(BLUE_LED, LOW);
Serial.println("LED Merah nyala");
delay(1000); // Dengan waktu delay 1000ms / 1 detik
digitalWrite(RED_LED, LOW);
digitalWrite(GREEN_LED, HIGH); // LED warna Hijau menyala
digitalWrite(BLUE_LED, LOW);
Serial.println("LED Hijau nyala");
delay(1000); // Dengan waktu delay 1000ms / 1 detik
digitalWrite(RED_LED, LOW);
digitalWrite(GREEN_LED, LOW);
digitalWrite(BLUE_LED, HIGH); // LED warna Biru menyala
Serial.println("LED Biru nyala");
delay(1000); // Dengan waktu delay 1000ms / 1 detik
}

void loop() {
rgbLED(); // Pemanggilan method rgbLED
}
