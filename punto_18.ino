//Punto 18

#include <Bonezegei_DHT22.h> //Librería para manejar el sensor
#include <LiquidCrystal_I2C.h> //Librería para manejar la pantalla lcd
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); //Elemento con las proporciones de la pantalla

int sensor = 5; //Nombre del pin
float temp; //Variable sin asignación
float hum; //Variable sin asignación
int ENA = 3; //Nombre del pin
int IN2= 9;
Bonezegei_DHT22 dht(sensor); //Elemento para referirse al sensor DHT
void setup() {
  pinMode(IN2,OUTPUT); //Se inicializan los pines para que saquen información
  pinMode(ENA, OUTPUT);
  lcd.init(); //Se inicializa la pantalla
  lcd.backlight(); //Se indica el brillo de la pantalla
  lcd.clear(); //Se limpia la pantalla 
  dht.begin(); //Se muestra la información
}

void loop() {
  temp = dht.getTemperature(); //La variable es igual a la temperatura que detecte el sensor
  hum = dht.getHumidity(); //La variable es igual a la humedad que detecte el sensor
  lcd.clear(); //Se limpia la pantalla
  lcd.setCursor(0, 0); //Coordenadas para ubicar el texto
  lcd.print(temp); //La pantalla muestra la información de la varible
  lcd.setCursor(0, 1);
  lcd.print(hum);
  if(temp>25){ //Condición: Si la variable es mayor a 25 grados
    analogWrite(ENA,100); //El pin hace una escritura análoga de 100/255 para la velocidad
    digitalWrite(IN2,HIGH); //El pin escribe una señal PWM de 1 para que el motor se active
  }
  else{ //Si no se cumple esa condición
    analogWrite(ENA, 0); //El pin hace una escritura análoga de 0/255 para la velocidad del motor
    digitalWrite(IN2, LOW); //El pin escribe una señal PWM de 0 para que el motor se desactive
  }
  delay(1000); //Esperan 1seg. para repetir el bucle

}
//Prueba virtual: https://youtu.be/S4Lbi2KfEG8
