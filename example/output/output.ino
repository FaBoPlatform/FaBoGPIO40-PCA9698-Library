#include "FaBoGPIO40_PCA9698.h"

FaBoGPIO40 faboGPIO;

void setup() {
  faboGPIO.configuration();
  faboGPIO.portMode(0, OUTPUT);
  faboGPIO.portMode(1, OUTPUT);
  faboGPIO.portMode(2, OUTPUT);
  faboGPIO.portMode(3, OUTPUT);
  faboGPIO.portMode(4, OUTPUT);
}

void loop() {
  for(int i = 0; i < 40; i++) {
    faboGPIO.digitalWrite(i, HIGH);
  }
  delay(1000);
  for(int i = 0; i < 40; i++) {
    faboGPIO.digitalWrite(i, LOW);
  }
  delay(1000);
}
