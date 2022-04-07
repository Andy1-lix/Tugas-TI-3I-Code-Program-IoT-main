#include <Arduino.h>
#include "DHT.h"  //Memasukan Library DHT ke Program 
#define DHTTYPE DHT11 //memilih tipe DHT11, bisa diubah menjadi DHT22, DHT21
#define RED_LED D1
#define GREEN_LED D2 
#define BLUE_LED D3

DHT dht(D7, DHTTYPE);  //setting pin yang dipilih dan tipe DHT

void setup() {
  Serial.begin(115200);  //komunikasi Serial dengan komputer
  pinMode(RED_LED, OUTPUT); 
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  dht.begin(); //menginisialisasi sensor DHT
}

void loop() {
  float h = dht.readHumidity(); //menyimpan nilai Humidity pada variabel H
  float t = dht.readTemperature();  //menyimpan nilai Temperature pada variabel s

  Serial.print(F("Kelembaban: ")); //menampilkan tulisan Kelembaban di Serial Monitor
  Serial.print(h); //menampilkan nilai kelembaban
  Serial.print(F("%  Temperature: ")); //menampilkan tulisan suhu
  Serial.print(t); //menampilkan nilai suhu
  Serial.println(F("°C")); //menampilkan suhu dalam Celcius

  delay(1000); //memberi jeda waktu baca selama 2 detik
  if (t <= 30){                 //Jika suhu <= 30*C, maka
      digitalWrite(RED_LED, HIGH);
      digitalWrite(GREEN_LED, LOW); //LED hijau menyala
      digitalWrite(BLUE_LED, HIGH);
  }
  else if ( t > 30 && t <= 35 ){            //Jika rentang suhu dari 31 sampe 35 , maka
      digitalWrite(RED_LED, HIGH);
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);   //LED biru menyala
  }
  else if (t > 35){             //Jika suhu > 35*C, maka
      digitalWrite(RED_LED, LOW); //LED merah menyala
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, HIGH);
    }
}
