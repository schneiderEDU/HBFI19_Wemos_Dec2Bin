#include <Arduino.h>

int dec = 25; //11001
bool isCalculated = false;

String calcWhile(int dec);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(!isCalculated) {    
    Serial.printf("\ndec = %i\n", dec);
    Serial.print("bin = ");
    Serial.println(calcWhile(dec));
  }
}

String calcWhile (int dec) {
  String binary = "";
  while(dec > 0) {
    int rest = dec%2;
    binary = rest + binary;    
    dec /= 2;
  }
  isCalculated = true;
  return binary;
}