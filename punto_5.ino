//punto 5

int l=5; //Nombre del pin
int i; //Variable sin asignación
void setup() {
  pinMode(l,OUTPUT); //Se inicializa el pin para que saque la información

}

void loop() {
  for(i=0;i<10;i++){ //Contador donde la variable se le asigna un número de 0 a 10
    analogWrite(l,i); //Escritura de una cresta de 0 a 1023 donde el led brilla según el valor de i
    delay(1000); //Espera 1seg.
  }

}
//Prueba física: https://youtu.be/o-opdvyBeVk
