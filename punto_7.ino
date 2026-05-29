//Punto 7
int analogpin = A3; //Nombre del pin análogo
int v2; //Variable sin asignación
int dt = 500; //Nombre para un tiempo de espera
void setup() {
  pinMode(analogpin, INPUT); //Se inicializa el pin para que meta información
  Serial.begin(9600); //Se inicializa el monitor serial para mostrar información
}

void loop() {
  v2 = analogRead(analogpin); //La variable será lo mismo que la información que el pin le meta
  Serial.println(v2); //El monitor escribirá la información que reciba la variable
  delay(dt); //Espera medio segundo para escribir otra información que reciba de la variable
}
//Prueba física: https://youtu.be/j6wETslux-I
