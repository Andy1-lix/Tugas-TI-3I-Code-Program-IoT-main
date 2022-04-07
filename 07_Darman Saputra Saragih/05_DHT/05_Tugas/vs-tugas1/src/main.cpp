    #include <Arduino.h>
    #include <SimpleDHT.h>

    #define pinDHT 7 // SD3 pin signal sensor DHT

    float temperature = 0;
    float humidity = 0;

    SimpleDHT11 dht11(D7); //instan sensor dht11

    void KelembabanSuhu()
    {
        int err = SimpleDHTErrSuccess;

        if ((err = dht11.read2(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess)
        {
            Serial.print("Pembacaan DHT11 gagal, err=");
            Serial.println(err);
            delay(1000);
            return;
        }

        Serial.print("Sample OK: ");

        //Celcius
        Serial.print((float)temperature);
        Serial.print(" *C, ");

        //Fahrenheit
        float f = (temperature * 1.8) + 32;
        Serial.print((float)f);
        Serial.print(" *F, ");

        //Kelvin
        float k = temperature + 273.15;
        Serial.print((float)k);
        Serial.print(" *K, ");

        //Humidity
        Serial.print((float)humidity);
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
    