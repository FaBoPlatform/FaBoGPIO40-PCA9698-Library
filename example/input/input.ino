#include "FaBoGPIO40_PCA9698.h"

FaBoGPIO40 faboGPIO;

void setup() {
  faboGPIO.configuration();
  faboGPIO.portMode(0, INPUT);
  faboGPIO.portMode(1, INPUT);
  faboGPIO.portMode(2, INPUT);
  faboGPIO.portMode(3, INPUT);
  faboGPIO.portMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 40; i++) {
    int gpio = faboGPIO.digitalRead(i);
    Serial.println(gpio);
  }
  delay(1000);
}
