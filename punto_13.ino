//Punto 13
int ENA = 11; //Nombre de los pines
int IN2 = 10;
int v; //Variable sin asignación
int d = 100; //Nombre del tiempo de espera
void setup() {
  pinMode(ENA, OUTPUT); //Se inicializan los pines para que sanquen la información
  pinMode(IN2, OUTPUT);
}

void loop() {
  for (v = 0; v < 250; v++) { //Contador donde la variable inicia en 0 y va sumando de a 1 hasta 249
    analogWrite(ENA, v); //El pin escribe análogamente el valor de la variable (velocidad del motor)
    digitalWrite(IN2, HIGH); //El pin escribe una señal PWM de 1
    delay(d); //Esperan el tiempo asignado
  }
  digitalWrite(ENA, LOW); //Cuando el contador termine, el pin escribe una señal de 0
}
//Prueba física: https://youtu.be/2Z6G7gjTHQA
