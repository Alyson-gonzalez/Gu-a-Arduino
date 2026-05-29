//Punto 16
#include <LiquidCrystal.h> //Librería para manejar la pantalla lcd
int RS = 12; //Nombre de los pines
int E = 11;
int RD4 = 5;
int RD5 = 4;
int RD6 = 3;
int RD7 = 2;

LiquidCrystal lcd(RS, E, RD4, RD5, RD6, RD7); //Se crea un elemento que se refiere a todos los pines al tiempo
void setup() {
  lcd.begin(16, 2); //Se inicializa la pantalla y se pone el tamaño de la pantalla
  lcd.setCursor(0, 0); //Se ubica las coordenadas desde donde iniciará el texto
  lcd.print("Alyson Gonzalez Calderon"); //Se da la orden de que la pantalla muestre el texto entre ""
  delay(1000); //Espera 1seg.
}

void loop() {
  lcd.scrollDisplayLeft(); //Se da la orden de que deslice hacia la izquierda
  delay(300); //Que deslice en un tiempo de 300 milisegundos para que se vea fluido
}
Prueba física: https://youtu.be/l1RfvpArGnA
