#include <Arduino.h>
#include <DataCapture.h>

void setup() {
  Serial.begin(115200);
  Serial.println();

  float notaPractrica = DataCapture::captureFloat("Ingrese nota de practica:");
  float notaTeorica = DataCapture::captureFloat("Ingrese nota de teorica:");
  float notaParticipacion = DataCapture::captureFloat("Ingrese nota de participacion:");

  Serial.println("Nota definitiva: " + String((notaPractrica * 0.3) + (notaTeorica * 0.6) + (notaParticipacion* 0.1)));
}

void loop() {
  
}