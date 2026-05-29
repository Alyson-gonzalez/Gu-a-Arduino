//Punto 1
int led=10; //Así se llama el pin
int dt=500; //Así se llamará ese tiempo de espera
void setup() {
  pinMode(led,OUTPUT); //Se inicializa el pin para que salga la información
}

void loop() {
  digitalWrite(led,HIGH); //Señal PWM de 1
  delay(dt);
  digitalWrite(led,LOW); //Señal PWM 0
  delay(dt);
}
//Prueba física: https://youtu.be/Sk2zu4C02aQ
