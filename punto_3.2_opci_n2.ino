//punto 3.2
int trig = 12; //Pin donde se conectará el trig del sensor
int echo = 10; //Pin donde se conectará el echo del sensor
int te; //variable que puede recibir cualquier información
int ENA = 3; //Pin donde se conectará la terminal del puente h para la velcidad de un motor
int IN1 = 5; //Pin donde se conectará la terminal del puente h para el sentido de rotación del motor
int buzz = 7; //Pin donde se conectará el buzzer

void setup() {
  pinMode(trig, OUTPUT); //Se inicializan los pines para que saquen información
  pinMode(echo, INPUT); //Se inicializa el pin para que meta información
  pinMode(buzz, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  Serial.begin(9600); //Se inicializan el monitor serial para ver la información

}

void loop() {
  digitalWrite(trig, LOW); // El trig del sensor realiza disparos de ondas que luego detectará el echo
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trig, LOW);
  
  te = pulseIn(echo, HIGH); //La variable recibe la información que detecta el echo del sensor
  delay(25);

  Serial.println(te); //El serial va a mostrar la información que tenga la variable
  delay(500);

  if (te > 300 && te < 400) { //Condición: si la variable tiene una información que entre en un intervalo de 300 a 400
    digitalWrite(buzz, HIGH); //El buzzer sacará una señal PWM de 1
    analogWrite(ENA, 100); //La velocidad del motor será 100/255
    digitalWrite(IN1, HIGH); //El motor se prenderá girando contra las manecillas del reloj
    delay(500); //Durarán es ese estado por medio segundo
    digitalWrite(buzz, LOW); //Todos se apagan
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
  }

  else if (te > 500 && te < 600) {
    digitalWrite(buzz, HIGH);
    analogWrite(ENA, 100);
    digitalWrite(IN1, HIGH);
    delay(1000);
    digitalWrite(buzz, LOW);
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
  }

  else if (te > 600 && te < 700) {
    digitalWrite(buzz, HIGH);
    analogWrite(ENA, 100);
    digitalWrite(IN1, HIGH);
    delay(1500);
    digitalWrite(buzz, LOW);
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
  }

}
//Prueba física: https://youtu.be/Eq6i7aysksY
