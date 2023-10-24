#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
  
  int numero[10][10];
  char band =  'F';

int filas = captureInteger("Digite el numero de filas");
int columnas = captureInteger("Digite el numero de columnas");
  
  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < columnas; j++)
    {
      numero =captureInteger("Digute un numero["+String(i)+"]"+"["+String(j)+"]");
    }
    
    
  }
  
  if (columnas == filas){
    for (size_t i = 0; i < filas; i++){
        for (size_t j = 0; j < columnas; j++){
              if (numero[i][j]== numero[j][i])
              {
                band =  'V';
              }
              
        }
        
    }
    
  }
  if (band ==  'V')
  {
        Serial.println("la matriz es simetrica");
  }
  else{
     Serial.println("la matriz no es simetrica");
  }

}

void loop() {

}

