#include <Arduino.h>
#define RED_LED D0 //led build in 1
#define GREEN_LED D6 //led build in 2
#define BLUE_LED D4 //led warna hijau

void setup()
{
Serial.begin(115200);
pinMode(RED_LED, OUTPUT); //atur pin-pin digital sebagai output
pinMode(GREEN_LED, OUTPUT); //atur pin-pin digital sebagai output
pinMode(BLUE_LED, OUTPUT); //atur pin-pin digital sebagai output
Serial.println("Contoh Program LED SOS");
}

void redLED() //looping LED built in 1
{
// 3 dits (3 titik atau huruf S)
for (int x = 0; x < 3; x++)
{
digitalWrite(RED_LED, HIGH); // LED nyala
delay(150); // delay selama 150ms
digitalWrite(RED_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
delay(100);
// 3 dahs (3 garis atau huruf O)
for (int x = 0; x < 3; x++)
{
digitalWrite(RED_LED, HIGH); // LED nyala
delay(400); // delay selama 400ms
digitalWrite(RED_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
// 100ms delay to cause slight gap between letters
delay(100);
// 3 dits again (3 titik atau huruf S)
for (int x = 0; x < 3; x++)
{
digitalWrite(RED_LED, HIGH); // LED nyala
delay(150); // delay selama 150ms
digitalWrite(RED_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
// wait 5 seconds before repeating the SOS signal
delay(5000);
digitalWrite(RED_LED, LOW); // LED mati
}

void blueLED() //looping SOS built in 2
{
// 3 dits (3 titik atau huruf S)
for (int x = 0; x < 3; x++)
{
digitalWrite(BLUE_LED, HIGH); // LED nyala
delay(150); // delay selama 150ms
digitalWrite(BLUE_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
delay(100);
// 3 dahs (3 garis atau huruf O)
for (int x = 0; x < 3; x++)
{
digitalWrite(BLUE_LED, HIGH); // LED nyala
delay(400); // delay selama 400ms
digitalWrite(BLUE_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
// 100ms delay to cause slight gap between letters
delay(100);
// 3 dits again (3 titik atau huruf S)
for (int x = 0; x < 3; x++)
{
digitalWrite(BLUE_LED, HIGH); // LED nyala
delay(150); // delay selama 150ms
digitalWrite(BLUE_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
// wait 5 seconds before repeating the SOS signal
delay(5000);
digitalWrite(BLUE_LED, LOW); // LED mati
}

void greenLED() // looping SOS led hijau
{
// 3 dits (3 titik atau huruf S)
for (int x = 0; x < 3; x++)
{
digitalWrite(GREEN_LED, HIGH); // LED nyala
delay(150); // delay selama 150ms
digitalWrite(GREEN_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
delay(100);
// 3 dahs (3 garis atau huruf O)
for (int x = 0; x < 3; x++)
{
digitalWrite(GREEN_LED, HIGH); // LED nyala
delay(400); // delay selama 400ms
digitalWrite(GREEN_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
// 100ms delay to cause slight gap between letters
delay(100);
// 3 dits again (3 titik atau huruf S)
for (int x = 0; x < 3; x++)
{
digitalWrite(GREEN_LED, HIGH); // LED nyala
delay(150); // delay selama 150ms
digitalWrite(GREEN_LED, LOW); // LED mati
delay(100); // delay selama 100ms
}
// wait 5 seconds before repeating the SOS signal
delay(5000);
digitalWrite(GREEN_LED, LOW); // LED mati
}

void matiLED() { // looping mematikan semua LED
  digitalWrite(RED_LED, HIGH); // LED mati
  digitalWrite(BLUE_LED, HIGH); // LED mati
  digitalWrite(GREEN_LED, HIGH); // LED mati
}

void loop() { // pemanggilan semua method diatas
redLED(); // Pemanggilan method build in LED 1
matiLED();
blueLED(); // Pemanggilan method build in LED 2
matiLED();
greenLED(); // Pemanggilan method LED warna hijau
matiLED();
// wait 5 seconds before repeating the SOS signal
delay(5000);
}
