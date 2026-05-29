//Punto 22
int R=2; //Nombre de los pines digitales
int G=3;
int B=4;
void setup() {
  pinMode(R, OUTPUT); //Se inicializan los pines para que saquen la información
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  
  setColor(189,17,17); //Se llama al void para producir un color
  
  delay(1000); //Espera 1seg.

  setColor(212,94,8);  //Se llama al void para producir un color
  
  delay(1000);

  setColor(242,80,161);
  
  delay(1000);

  setColor(87,27,133);
  
  delay(1000);

  setColor(27,41,133);
  
  delay(1000);
}
void setColor (int red, int green, int blue){ //void para referirse  a variables que hacen escrituras análogas
  analogWrite (R, red);
  analogWrite (G, green);
  analogWrite (B, blue);
}
//Prueba virtual: https://youtu.be/M4VLAtip2EE
