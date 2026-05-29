//Punto 11
int led = 7; //Nombre del pin análogo
int button = A0; //Nombre del pin digital
int ledState = 0; //Variable que se queda permanentemente en 0
int buttonold = 1;
int i; //Variable sin asignación
void setup() {
  pinMode(led, OUTPUT); //Se inicializa el pin para que saque información
  pinMode(button, INPUT); //S einicializa el pin para que meta información
  Serial.begin(9600); //Se inicializa el monitor serial para que muestre información
}
void loop() {
  i = digitalRead(button); //La variable lee la información del pin
  delay(100); //Espera 100 milisegundos
  if (i == 0 && buttonold == 1) { //Condición: si la variable es lo mismo que 0 y la variable sigue en 1
    if (ledState == 0) { //Condición: si la variable es igual a 0
      digitalWrite(led, HIGH); //El pin escribe una señal PWN de 1
      ledState = 1; //La variable será lo mismo a 1
    }
    else { //Sino se cumple dicha condición 
      digitalWrite(led, LOW); //El pin escribirá una señal PWM de 0
      ledState = 0; //La variable será lo mismo a 0
    }
    buttonold == 0; //La variable será igual a 0
  }
}
//Prueba física: https://youtu.be/XqcP4Ud0EfI
