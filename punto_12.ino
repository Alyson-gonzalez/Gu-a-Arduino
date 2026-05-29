//Punto 12
#include <Servo.h> //Librería para controlar el servomotor

int pinservo = 5; //Nombre del pin digital
int ldrpin = A0; //Nombre del pin análogo
int ldr; //Variable sin asignación
Servo elservo; //Nombre para referirse a la librería
void setup() {
  pinMode(ldrpin, INPUT); //Se inicializa el pin para que meta información
  elservo.attach(5); //Inicializa el servomotor con el pin asignado anteriormente
  Serial.begin(9600); //Se inicializa el monitor serial
}

void loop() {
  ldr = analogRead(ldrpin); //La variable leerá análogamente la información del pin
  Serial.println(ldr); //El serial mostrará la información de la variable
  if (ldr <= 230) { //Condición: Si la variable tiene una información mayor o igual a 230
    elservo.write(45); //El servomotor escribirá un ángulo de 45 grados
  }
  if (ldr >= 231) {
    elservo.write(90);
  }
  if (ldr >= 233) {
    elservo.write(180);
  }
  delay(500); //El serial espera medio segundo para mostrar la información
}
//Prueba física: https://youtu.be/Z5mVF-RiZsM
