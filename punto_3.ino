// Punto 3
int a=13; //Nombre de cada pin
int b=12;
int c=11;
void setup() {
  pinMode(a,OUTPUT); //Se inicializa cada pin para que saque la información
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH); //Señal PWM 1
  digitalWrite(b,LOW); //Señal PWM 0
  digitalWrite(c,LOW); //Señal PWM 0
  delay(5000); //Se quedan en ese estado 5seg.

  digitalWrite(a,LOW); //Señal PWM 0 
  digitalWrite(b,HIGH); //Señal PWM 1
  digitalWrite(c,LOW); //Señal PWM 0
  delay(2000); //Se quedan en ese estado 2seg.

  digitalWrite(a,LOW); //Señal PWM 0
  digitalWrite(b,LOW); //Señal PWM 0
  digitalWrite(c,HIGH); //Señal PWM 1
  delay(4000); //Se quedan en ese estado 4seg.
}
//Prueba física: https://youtu.be/LNcIbo1XPBE
