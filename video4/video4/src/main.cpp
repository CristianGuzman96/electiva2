#include <Arduino.h>
#include<DataCapture.h>


void setup() {
 
  Serial.begin(115200);
  Serial.println();

  int numero1 = DataCapture::captureInteger("Ingrese el primer numero:");

  Serial.println("La numero  es: "+String(numero1));


}

void loop() {
 
 
}

