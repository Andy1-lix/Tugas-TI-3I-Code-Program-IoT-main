#include <Arduino.h>
#include <SimpleDHT.h>

#define pinDHT 7 // SD3 pin signal sensor DHT

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

  Serial.print((float)(temperature * 4 / 5));
  Serial.print(" *R, ");

  Serial.print((float)(temperature + 273.15));
  Serial.print(" *K, ");

  
  Serial.print((int)humidity);
  Serial.println(" H");

  delay(1500);
}

void setup()
{
  Serial.begin(115200);
  Serial.println("Simple DHT");
  delay(1000);
}

void loop()
{
  KelembabanSuhu();
}
