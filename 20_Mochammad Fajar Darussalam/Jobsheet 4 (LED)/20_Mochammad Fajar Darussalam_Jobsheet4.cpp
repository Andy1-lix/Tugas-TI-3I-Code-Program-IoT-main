#include <Arduino.h>

#define led1 D0
#define led2 D4
#define RED_LED D5   // led warna merah
#define BLUE_LED D6  // led warna biru
#define GREEN_LED D7 // led warnah hijau

void setup()
{
  // LED 1
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  // LED Board
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}