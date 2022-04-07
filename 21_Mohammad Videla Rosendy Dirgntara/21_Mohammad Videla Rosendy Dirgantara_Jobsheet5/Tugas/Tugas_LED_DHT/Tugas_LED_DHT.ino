#include <Arduino.h>
#include <SimpleDHT.h>

#define pinDHT 7 // SD3 pin signal sensor DHT
#define RED_LED D2 //led warna merah
#define GREEN_LED D3 //led warna hijau
#define BLUE_LED D4 //led Build In biru

byte temperature = 0; //
byte humidity = 0; //

SimpleDHT11 dht11(D1); //instan sensor dht11

void KelembabanSuhu()
{
  int err = SimpleDHTErrSuccess;

  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess)
  {
    Serial.print("Pembacaan DHT11 gagal, err=");
    Serial.println(err);
    delay(1000);
    return;
  }

  Serial.print("Sample OK: ");
  Serial.print((int)temperature);
  Serial.print(" *C, ");

  Serial.print((int)humidity);
  Serial.println(" H");
  delay(1500);

  if (temperature <= 29 ) {
    digitalWrite(GREEN_LED, HIGH); // LED mati
    digitalWrite(RED_LED,LOW ); // LED mati
    digitalWrite(BLUE_LED, HIGH); // LED hidup
  }

  else if (temperature >= 31) {
    digitalWrite(GREEN_LED, LOW); // LED hidup
    digitalWrite(RED_LED, HIGH); // LED mati
    digitalWrite(BLUE_LED, HIGH); // LED hidup
  }
  
  else {
    digitalWrite(RED_LED, LOW); // LED mati
    digitalWrite(BLUE_LED, LOW); // LED hidup
    digitalWrite(GREEN_LED, LOW); // LED mati
  }
}

void setup()
{
  pinMode(RED_LED, OUTPUT); //atur pin-pin digital sebagai output
  pinMode(GREEN_LED, OUTPUT); //atur pin-pin digital sebagai output
  pinMode(BLUE_LED, OUTPUT); //atur pin-pin digital sebagai output
  Serial.begin(115200);
  Serial.println("Simple DHT");
  delay(1000);
}

void loop()
{
  KelembabanSuhu();
}
