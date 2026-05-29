// Punto 4
int a=13; //Nombre de los pines
int b=12;
int c=11;
int d=10;
int x=1500; //Tiempo de espera 1.5seg.
int y=2000; //Tiempo de espera 2seg.
void setup() {
  pinMode(a,OUTPUT); //Se inicializan los pines para que saquen la información
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);

}

void loop() { //Se realiza un contador 4 bit. Después de cada muestra esperan 1.5seg.
  digitalWrite(a,LOW),digitalWrite(b,LOW),digitalWrite(c,LOW),digitalWrite(d,LOW);//0000
  delay(x);
  digitalWrite(a,LOW),digitalWrite(b,LOW),digitalWrite(c,LOW),digitalWrite(d,HIGH);//0001
  delay(x);
  digitalWrite(a,LOW),digitalWrite(b,LOW),digitalWrite(d,LOW),digitalWrite(c,HIGH);//0010
  delay(x);
  digitalWrite(a,LOW),digitalWrite(b,LOW),digitalWrite(c,HIGH),digitalWrite(d,HIGH);//0011
  delay(x);
  digitalWrite(a,LOW),digitalWrite(c,LOW),digitalWrite(d,LOW),digitalWrite(b,HIGH);//0100
  delay(x);
  digitalWrite(a,LOW),digitalWrite(c,LOW),digitalWrite(b,HIGH),digitalWrite(d,HIGH);//0101
  delay(x);
  digitalWrite(a,LOW),digitalWrite(d,LOW),digitalWrite(b,HIGH),digitalWrite(c,HIGH);//0110
  delay(x);
  digitalWrite(a,LOW),digitalWrite(b,HIGH),digitalWrite(c,HIGH),digitalWrite(d,HIGH);//0111
  delay(x);
  digitalWrite(b,LOW),digitalWrite(c,LOW),digitalWrite(d,LOW),digitalWrite(a,HIGH);//1000
  delay(x);
  digitalWrite(b,LOW),digitalWrite(c,LOW),digitalWrite(a,HIGH),digitalWrite(d,HIGH);//1001
  delay(x);
  digitalWrite(b,LOW),digitalWrite(d,LOW),digitalWrite(a,HIGH),digitalWrite(c,HIGH);//1010
  delay(x);
  digitalWrite(b,LOW),digitalWrite(a,HIGH),digitalWrite(c,HIGH),digitalWrite(d,HIGH);//1011
  delay(x);
  digitalWrite(c,LOW),digitalWrite(d,LOW),digitalWrite(a,HIGH),digitalWrite(b,HIGH);//1100
  delay(x);
  digitalWrite(c,LOW),digitalWrite(a,HIGH),digitalWrite(b,HIGH),digitalWrite(d,HIGH);//1101
  delay(x);
  digitalWrite(d,LOW),digitalWrite(a,HIGH),digitalWrite(b,HIGH),digitalWrite(c,HIGH);//1110
  delay(x);
  digitalWrite(a,HIGH),digitalWrite(b,HIGH),digitalWrite(c,HIGH),digitalWrite(d,HIGH);//1111
  delay(y); //Esperan 2seg. para volver a iniciar el contador 4bit
  
}
//Prueba física: https://youtu.be/hwHNLRNPQ4Y
