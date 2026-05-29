//Punto 5.2
#include <SoftwareSerial.h> //Librería para comunicarse con el HC 06

SoftwareSerial BT(10, 11); //Nombre de los pines
char data; //Se representa el texto en forma de dato
int led = 13; //Nombre del pin

void setup() {
  BT.begin(9600); //Se inicializa la comunicación con el HC 06
  pinMode(led, OUTPUT); //Se inicializa el pin para que saque la información

}

void loop() {
  if (BT.available()) { //El HC 06 evalúa la información
    data = BT.read(); //El char será lo que el HC 06 lea

    if (data == '1') //Si el HC 06 lee un texto de 1
      digitalWrite(led, HIGH); //El pin 13 saca una señal PWM 1

    if (data == '2') //Si el HC 06 lee un texto de 2
      digitalWrite(led, LOW); //El pin 13 saca una señal PWM 0

  }
}
//Prueba física: https://youtube.com/shorts/bhuxLMzLDrc?feature=share
