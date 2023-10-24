#include <Arduino.h>



void setup() {
  Serial.begin(9600);
  Serial.println();

  char palabra[]="cristian";

  strupr(palabra);

  Serial.println(String(palabra));
  
}

void loop() {
 
}
