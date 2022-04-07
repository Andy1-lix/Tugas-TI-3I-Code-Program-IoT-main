    #include <Arduino.h>
    #include <SimpleDHT.h>

    #define pinDHT 7 // SD3 pin signal sensor DHT
    #define RED_LED D0 // Red led color
    #define GREEN_LED D1 // Green led color
    #define BLUE_LED D2 // Blue led color

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

        // Show LED
        // 1. Temperature is hot
        // 2. Temperature is cold
        // 3. Temperature is normal
        if (temperature > 30 && f > 86 && k > 303.15)
        {
            digitalWrite(RED_LED, HIGH);
            Serial.println("LED Merah Menyala");
        }
        else if (temperature < 20 && f < 68 && k < 293.15)
        {
            digitalWrite(GREEN_LED, HIGH);
            Serial.println("LED Hijau Menyala");
        }
        else{
            digitalWrite(BLUE_LED, HIGH);
            Serial.println("LED Biru Menyala");
        }
        delay(1500);
    }

    void setup()
    {
        Serial.begin(115200);
        pinMode(RED_LED, OUTPUT); // Setup digital pins as output
        pinMode(GREEN_LED, OUTPUT);
        pinMode(BLUE_LED, OUTPUT);
        Serial.println("Simple DHT");
        delay(1000);
    }

    void loop()
    {
        KelembabanSuhu();
    }
    