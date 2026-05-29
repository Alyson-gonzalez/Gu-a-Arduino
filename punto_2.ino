//Punto 2
int a=13; //El nombre de cada pin
int b=12;
int c=11;
int y=1000; //El nombre de ese tiempo de espera
void setup() {
  pinMode(a,OUTPUT); //Se inicializan los pines
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH),digitalWrite(b,HIGH),digitalWrite(c,HIGH); //Señal PWM 1
  delay(y); //Esperan un tiempo y se repite el bucle
}
//Prueba física: https://youtu.be/W0xw6AS9BlY
