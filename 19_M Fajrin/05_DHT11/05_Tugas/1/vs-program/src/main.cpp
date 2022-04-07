#include <Arduino.h>
#include <DHT.h>
#define DHTTYPE DHT11

DHT dht(D7, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("Menggunakan DHT11");
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  float r = dht.readTemperature(true)*0.8;
  float k = dht.readTemperature(true)+273.15;

  
  if (isnan(h) || isnan(t) || isnan(f)){
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

    float hif = dht.computeHeatIndex(f, h);
    float hic = dht.computeHeatIndex(t, h, false);
    
    Serial.print(F("Humidity: "));
    Serial.print(h);
    Serial.print(F("%  Temperature: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(f);
    Serial.print(F("°F "));
    Serial.print(r);
    Serial.print(F("°R "));
    Serial.print(k);
    Serial.print(F("°K Heat index: "));
    Serial.print(hic);
    Serial.print(F("°C "));
    Serial.print(hif);
    Serial.println(F("°F"));
}
