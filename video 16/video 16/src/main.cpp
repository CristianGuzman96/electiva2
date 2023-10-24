#include <Arduino.h>
#include <DataCapture.h>
#include <string.h>
void setup() {
  Serial.begin(115200);
  Serial.println();

 String letra  = DataCapture::captureString("digite un caracter:");
  char le[1];
  letra.toCharArray(le,sizeof(le));
  
  
 switch (le[1])
 {
 case 'a' :
 case 'e' :
 case 'i' :
 case 'o' :
 case 'u' : Serial.print("Es una vocal minuscula");break;
 
 default:Serial.print("No es una vocal minuscula");break;
  
 }

  
}

void loop() {



  


  
  
}