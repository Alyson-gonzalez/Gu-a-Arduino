//Punto 2.2
#include <LedControl.h> //Librería para manejar la matriz 8x8

LedControl lc=LedControl(11,13,10,1); //Nombre de los pines que controlan la matriz
#define demora 200 //Se define un tiempo de espera

byte F[8]={ //Se hacen arrays en binario para hacer por fotagrama la animación 
  B00001000,
  B00001100,
  B00000110,
  B11111111,
  B11111111,
  B00000110,
  B00001100,
  B00001000
};
byte F1[8]={
  B00000100,
  B00000110,
  B00000011,
  B11111111,
  B11111111,
  B00000011,
  B00000110,
  B00000100
};
byte F2[8]={
  B00000010,
  B10000011,
  B01000001,
  B01011111,
  B01011111,
  B01000001,
  B10000011,
  B00000010
};
byte F3[8]={
  B10000001,
  B01000001,
  B10100000,
  B00101111,
  B10101111,
  B00100000,
  B01000001,
  B10000001
};
byte F4[8]={
  B11000000,
  B00100000,
  B01010000,
  B00010111,
  B01010111,
  B10010000,
  B00100000,
  B11000000
};
byte F5[8]={
  B11100000,
  B00010000,
  B00101000,
  B00001011,
  B00101011,
  B11001000,
  B00010000,
  B11100000
};
byte F6[8]={
  B11110000,
  B00001000,
  B10010100,
  B00000101,
  B10010101,
  B01100100,
  B00001000,
  B11110000
};
byte F7[8]={
  B01111000,
  B10000100,
  B01001010,
  B00000010,
  B01001010,
  B00110010,
  B10000100,
  B01111000
};
byte F8[8]={
  B00111100,
  B01000010,
  B10100101,
  B10000001,
  B10100101,
  B10011001,
  B01000010,
  B00111100
};


void setup() {
  lc.shutdown(0,false); //Número de dispositivo que sice que es falso de que esté apagado, está prendido
  lc.setIntensity(0,4); //Número de dispositivo y la intensidad de la matriz
  lc.clearDisplay(0); //Número de dispositivo y que limpie la pantalla

}

void loop() {
  mostrar_f(); //Se muestra lo que se programa en cada void
  delay(demora); //Espera el tiempo establecido
  mostrar_f1(); //Muestra el siguiente void programado
  delay(demora);
  mostrar_f2();
  delay(demora);
  mostrar_f3();
  delay(demora);
  mostrar_f4();
  delay(demora);
  mostrar_f5();
  delay(demora);
  mostrar_f6();
  delay(demora);
  mostrar_f7();
  delay(demora);
  mostrar_f8();
  delay(demora);

}
void mostrar_f(){ //El void que muestra cada array
  for(int i=0; i<8; i++){ //Un contador para que cada fila muestre la información del array
    lc.setRow(0,i,F[i]); //Dispositivo al que manejamos, el contador de cada fila y el array
  }
}
void mostrar_f1(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F1[i]);
  }
}
void mostrar_f2(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F2[i]);
  }
}
void mostrar_f3(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F3[i]);
  }
}
void mostrar_f4(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F4[i]);
  }
}
void mostrar_f5(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F5[i]);
  }
}
void mostrar_f6(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F6[i]);
  }
}
void mostrar_f7(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F7[i]);
  }
}
void mostrar_f8(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,F8[i]);
  }
}
//Prueba virtual: https://youtu.be/ka4CLK34Mj0
