void setup() {
  // put your setup code here, to run once:
Serial.begin(115200); // setbaudrate 115200
pinMode(LED_BUILTIN, OUTPUT); // mengonfigurasi pin dan bersifat output
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, LOW); // mematikan LED
delay(200); // jeda 200ms
digitalWrite(LED_BUILTIN, HIGH); // menghidupkan LED
delay(200); // jeda 200ms
}
