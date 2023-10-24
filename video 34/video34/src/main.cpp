#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;
void setup() {
   Serial.begin(9600);
  Serial.println();
   int mayor,numero[100];
   int n = captureInteger("digite el numero de elementos");

   for ( int i = 0; i < n; i++)
   {
    numero[i] = captureInteger (String(i+1)+"digite un numero");
      if (numero[i] > mayor)
      {
        mayor = numero [i];
      }
      
      
   }
   
   Serial.println("El mayor elemento del vector es: "+String(mayor));
  
}

void loop() {
 
}

 
