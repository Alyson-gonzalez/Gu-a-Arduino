//punto 20
int aout = A0; //Nombre de los pines
int buz = 5;
int valor; //Variable sin asignación
void setup() {
  pinMode(buz, OUTPUT); //Se inicializa el pin para que saque información
  Serial.begin(9600); //Se inicializa el monitor serial para mostrar información

}

void loop() {
  valor = analogRead(aout); //El valor de la variable será la información análoga que lea del pin
  Serial.println(valor);
  
  if (valor > 100) { //Condición: Si la información de la variable es mayor a 100
    digitalWrite(buz, HIGH); //El pin escribe una señal PWN de 1
    delay(3000); //Espera 3seg.
    digitalWrite(buz, LOW); //El pin escribe una señal PWN de 0
  }
  delay(500); //Espera medio segundo para repetir el bucle
}
//Prueba física: https://youtu.be/L6VJNndTF_o
