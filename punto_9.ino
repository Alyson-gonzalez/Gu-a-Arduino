//Punto 9
void setup() {
  for(int i=2;i<8;i++){ //Contador para una variable que va de 2 a 7
    pinMode(i,OUTPUT); //Se inicializa la variable para que saque la información de cada elemento del 2 al 7
  }
}
void loop() {
  for(int i=2;i<=8;i++){ //Contador para que los elementos del 2 al 7 escriban una señal PWM de 1
    digitalWrite(i,HIGH);
    delay(100); //Esperan 100 milisegundos para hacer la secuencia
  }
  for(int i=8;i>=2;i--){//Contador para que los elementos del 7 al 2 escriban una señal PWM de 0
    digitalWrite(i,LOW);
    delay(100); //Esperan 100 milisegundos para hacer la secuencia
  }
}//Prueba física: https://youtu.be/XtHd5ihyOso
