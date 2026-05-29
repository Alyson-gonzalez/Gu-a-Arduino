//Punto 8
int analogpin = A0; //Nombre del pin análogo
int v2; //Variable sin asignación
int alarma = 7; //Nombre del pin digital
int dt = 500; //Nombre del tiempo de espera de medio segundo
void setup() {
  pinMode(analogpin, INPUT); //Se inicializa el pin para que meta información
  pinMode(alarma, OUTPUT); //Se inicializa el pin para que saque información
  Serial.begin(9600); // Se inicializa el monitor serial para mostrar información
}

void loop() {
  v2 = analogRead(analogpin); //Se le asigna a la variable la información que lea del pin
  if (v2 > 400) { //Condición: Si la variable tiene una información mayor a 400
    digitalWrite(alarma, HIGH); //Pin digital ecribirá una señal PWM de 1
  }
  if (v2 < 400) { //Condición: Si la variable tiene una información menor a 400
    digitalWrite(alarma, LOW); //Pin digital ecribirá una señal PWM de 0
  }
  Serial.println(v2); //El monitor mostrará la información que tenga la variable
  delay(dt); //Espera medio segundo para volver a mostrar la información
}
//Prueba física: https://youtu.be/ufyFYjFsNqA
