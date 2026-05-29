//Punto 17
#include <LiquidCrystal_I2C.h> //Librería para manejar la pantalla lcd de forma más fácil
#include <Wire.h>
#include <DHT.h> //Librería para manejar el sensor DHT
#include <DHT_U.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); //Elemento que contiene la proporción de la pantalla)
int sensor = 5; //Nombre del pin
int temp; //Variable sin asignación
int hum; //Variable sin asignación
DHT dht(sensor, DHT22); //Elemento para referirse al sensor
void setup() {
  lcd.init(); //Se inicializa la pantalla
  lcd.backlight(); //El brillo de la pantalla
  lcd.clear(); //Se limpia la pantalla
  dht.begin(); //Se inicializa la pantalla para que muestre la información dada
}

void loop() {
  temp = dht.readTemperature(); //La variable será la temperatura que lea del sensor
  hum = dht.readHumidity(); //La variable será la humedad que lea del sensor
  lcd.setCursor(0, 0); //Ubicación del texto
  lcd.print(temp); //La pantalla mostrará la información de la variable
  lcd.setCursor(0, 1);
  lcd.print(hum);

}
//Prueba virtual: https://youtu.be/zeWebNwIMY4
