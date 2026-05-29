//punto 14
int ejey = A4; //Nombre de los pines
int ENA = 5;
int IN2 = 4;
int y; //Variable sin asignación
int v = 0; //Variable con el valor de 0
void setup() {
  pinMode(ejey, INPUT); //Se inicializa el pin para que meta información
  pinMode(ENA, OUTPUT); //Se inicializa el pin para que saque información
  pinMode(IN2, OUTPUT);

}

void loop() {
  y = analogRead(ejey); //Ña variable se le asigna la información que lea análogamente del pin
  if (y > 550) { //Condición: si la variable tiene una información mayor que 550
    v += 3; //La variable se le sumará de 3 en 3
    analogWrite(ENA, v); //El pin ecribe análogamente la información de la variable v
    digitalWrite(IN2, HIGH); //El pin escribe una señal PWM de 1
  }
  if (y < 550) { //Condición: si la variable tiene una información menor que 550
    v -= 3; //La variable se le restará de 3 en 3
    analogWrite(ENA, v); //El pin ecribe análogamente la información de la variable v
    digitalWrite(IN2, LOW); //El pin escribe una señal PWM de 0
  }
}
//Prueba física: https://youtu.be/zsjb2JDrrWI
