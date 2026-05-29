//Punto 23
int ENA = 3; //Nombre de los pines
int IN1 = 10;
int IN2 = 5;
int IN4 = 6;
int ENB = 9;
int trig = 11;
int echo = 10;
int pingT; //Variable sin asignación
void setup() {
  pinMode(ENA, OUTPUT); //Se inicializan los pines para que saquen la información
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT); //Se inicializan los pines para que metan la información
  Serial.begin(9600); //Se inicializa el monitor serial para mostrar información
}

void loop() {
  digitalWrite(trig, LOW); //El pin escribe una señal PWM de 0
  delayMicroseconds(10); //Espera 10 microsegundos
  digitalWrite(trig, HIGH); //El pin escribe una señal PWM de 1
  delayMicroseconds(10); //Espera 10 microsegundos
  digitalWrite(trig, LOW); //El pin escribe una señal PWM de 0
  pingT = pulseIn(echo, HIGH); //La variable será lo mismo que las pulsaciones que meta el pin
  delay(25); //Espera 25 milisegundos
  Serial.println(pingT); //El monitor muestra la información que reciba la variable
  delay(500); //Espera medio segundo para volver a mostrar información
  if (pingT > 500  && pingT < 600) { //Condición: Si la información que recibe la información está entre 500 y 600
    analogWrite(ENA, 60); //El pin escribe análogamente una velocidad de 60 para el motor 1
    digitalWrite(IN2, HIGH); //El pin escribe una señal PWM de 1 para el motor 1
    analogWrite(ENB, 60); //El pin escribe análogamente una velocidad de 60 para el motor 2
    digitalWrite(IN4, HIGH); //El pin escribe una señal PWM de 1 para el motor 2
  }
  else if (pingT >= 600 && pingT < 800) { 
    analogWrite(ENA, 60);
    digitalWrite(IN2, HIGH);
    analogWrite(ENB, 0);
  }
  else if (pingT > 800) {
    analogWrite(ENA, 0);
    analogWrite(ENB, 60);
    digitalWrite(IN4, HIGH);
  }
}
//Prueba física: https://youtu.be/M26yU3RPqVk
