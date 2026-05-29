//Punto 15
int trig = 5; //Nombres de los pines
int echo = 4;
int pingTravelTime; //Variable sin asignación
void setup() {
  pinMode(trig, OUTPUT); //Se inicializa el pin para que saque información
  pinMode(echo, INPUT); //Se inicializa el pin para que meta información
  Serial.begin(9600); //Se inicializa el monitor serial para mostrar información
}

void loop() {
  digitalWrite(trig, HIGH); //El pin escribe un señal PWM de 1
  delayMicroseconds(10); //Espera 10 microsegundos
  pingTravelTime = pulseIn(echo, HIGH); //La variable se le asigna las pulsaciones que reciba del pin echo
  delay(2000); //Espera 2seg.
  digitalWrite(trig, LOW);  //El pin escribe un señal PWM de 0
  Serial.println(pingTravelTime); //El serial muestra la información que reciba de la variable
}
//Prueba física: https://youtu.be/0TuR7_BfuYg
//Tabla con datos: https://drive.google.com/file/d/1FzhewYK7YopRWXkgqXsm77MuUhjNYHea/view?usp=drive_link
