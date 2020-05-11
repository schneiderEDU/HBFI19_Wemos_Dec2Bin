#include <Arduino.h>

int dec = 25; //11001


String toBin(int dec);

void setup() {
  Serial.begin(9600);
  Serial.printf("\ndec = %i\n", dec);
  Serial.print("bin = ");
  Serial.println(toBin(dec));
}

void loop() {

}

String toBin (int dec) {
  String binary = "";
  while(dec > 0) {
    int rest = dec%2;
    binary = rest + binary;    
    dec /= 2;
  }
  return binary;
}