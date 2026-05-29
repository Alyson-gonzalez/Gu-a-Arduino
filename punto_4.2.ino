//Punto 5.2

#include <SoftwareSerial.h> //Librería para comunicarse con la antena HC 06
SoftwareSerial BT(11, 10); //Nombre de los pines

void setup() {
  Serial.begin(9600); //Se inicializa el monitor serial
  Serial.println("Conectado"); //Se mostrará en el monitor cuando se conecte la antena
  BT.begin(9600); //Se inicializa la antena para comunicarse con el serial

}

void loop() {
  if(BT.available())   //Lee la información del módulo y se escribe en el serial.
  Serial.write(BT.read());
  
  if(Serial.available())   //Lee la información del serial y se escribe en el módulo.
  BT.write(Serial.read());

}
//Prueba física: https://youtu.be/yTJ7e5-0UVU
