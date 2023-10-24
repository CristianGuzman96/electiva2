#include <Arduino.h>
#include <DataCapture.h>
#include <math.h>

using namespace DataCapture;

void setup() {
 Serial.begin(9600);
 Serial.println();
 
 int suma = 0, elevacion = 0;

 int n = captureInteger("digite numero de elevacion");
  
for (int i = 1; i <= n; i++)
{
  elevacion= (pow(2,i));
  suma += elevacion;
}

 Serial.println("la suma total es: "+String(suma));

}

void loop() {
  
}

