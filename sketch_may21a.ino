//Punto 10
int ledpin = 13; //Nombres de los pines digitales
int red = 12;
int blue = 11;
String ledcolor; //Cadena de información sin asignación
String msg = "Escribe un color"; //Cadena de información que almacena el texto en ""
void setup() {
  Serial.begin(115200); //Se inicializa el monitor serial para mostrar y ecribir información
  pinMode(ledpin, OUTPUT); //Se inicializan los pines 
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  ledcolor = Serial.readStringUntil('\n'); //La cadena se le asigna que lea lo que reciba del serial excepto lo de ''

  if (ledcolor == "verde") { //Si la cadena lee una información de la palabra ""
    digitalWrite(ledpin, HIGH); //El pin escribe una señal PWM de 1
    delay(1000); //Se queda en ese estado por 1seg.
    digitalWrite(ledpin, LOW); //El pin escribe una señal PWM de 0
  }
  if (ledcolor == "rojo") {
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
  }
  if (ledcolor == "azul") {
    digitalWrite(blue, HIGH);
    delay(1000);
    digitalWrite(blue, LOW);
  }
}
//Prueba física: https://youtu.be/qnF-otvs5iM
