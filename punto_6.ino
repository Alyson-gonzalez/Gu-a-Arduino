//punto 6
int vout = A0; //Nombre de un pin análogo
int vin; //Variable sin asignación
int dt = 1000; //El nombre del tiempo establecido
void setup() {
  pinMode(vout, INPUT); //Se inicaliza el pin para que meta información
  Serial.begin(9600); //Se inicializa el monitor serial para ver la información
}

void loop() {
  vin = analogRead(vout); //La variable se le asigna la información analoga que reciba del pin análogo
  Serial.println(vin); //El monitor refleja la información que lea la variable
  vout = analogRead(vin); //El pin análogo lee la información que tenga la variable
  delay(dt); //Espera 1seg.
}
//Prueba física: https://youtu.be/X6Aed4UTuoU
