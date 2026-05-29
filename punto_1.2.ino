#include <LedControl.h> //Librería para manejar la matriz 8x8

LedControl lc=LedControl(11,13,10,1); //lc se refiere a los pines que van las terminales de la matriz
#define demora 1000 //se define un tiempo de espera

byte S[8]={ //Array en binario haciendo una visualización por multiplexación de la letra S
  B00111000,
  B01000100,
  B01000000,
  B00111000,
  B00000100,
  B01000100,
  B00111000,
  B00000000
};
byte O[8]={ //Array en binario haciendo una visualización por multiplexación de la letra O
  B00111000,
  B01000100,
  B01000100,
  B01000100,
  B01000100,
  B01000100,
  B00111000,
  B00000000
};
byte Y[8]={ //Array en binario haciendo una visualización por multiplexación de la letra Y
  B01000100,
  B01000100,
  B01000100,
  B00101000,
  B00010000,
  B00010000,
  B00010000,
  B00000000
};
byte C[8]={ //Array en binario haciendo una visualización por multiplexación de la letra S
  B00111000,
  B01000100,
  B01000000,
  B00111000,
  B00000100,
  B01000100,
  B00111000,
  B00000000
};
byte E[8]={ //Array en binario haciendo una visualización por multiplexación de la letra E
  B01111100,
  B01000000,
  B01000000,
  B01111000,
  B01000000,
  B01000000,
  B01111100,
  B00000000
};
byte N[8]={ //Array en binario haciendo una visualización por multiplexación de la letra N
  B01000010,
  B01100010,
  B01010010,
  B01001010,
  B01000110,
  B01000010,
  B01000010,
  B00000000
};
byte A[8]={ //Array en binario haciendo una visualización por multiplexación de la letra A
  B00010000,
  B00101000,
  B01000100,
  B01111100,
  B01000100,
  B01000100,
  B01000100,
  B00000000
};


void setup() {
  lc.shutdown(0,false); //Número del dispositivo y que es falso de que está apagado, está prendido
  lc.setIntensity(0,4); //Número del dispositivo y un brillo de 4/15
  lc.clearDisplay(0); //El dispositivo número 0 limpia pantalla

}

void loop() {
  mostrar_s(); //Muestra cada void segun el array dentro de ese void
  delay(demora); //Espera el tiempo estblecido
  mostrar_o();
  delay(demora);
  mostrar_y();
  delay(demora);
  mostrar_c();
  delay(demora);
  mostrar_e();
  delay(demora);
  mostrar_n();
  delay(demora);
  mostrar_a();
  delay(demora);

}
void mostrar_s(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,S[i]);
  }
}
void mostrar_o(){
  for(int i=0; i<8; i++){ //Se hace un conteo fila por fila para mostrar el array al que se vaya a llamar
    lc.setRow(0,i,O[i]); //Número de dispositivo, fila que se va a mostrar y su valor
  }
}
void mostrar_y(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,Y[i]);
  }
}
void mostrar_c(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,C[i]);
  }
}
void mostrar_e(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,E[i]);
  }
}
void mostrar_n(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,N[i]);
  }
}
void mostrar_a(){
  for(int i=0; i<8; i++){
    lc.setRow(0,i,A[i]);
  }
}
//Prueba virtual: https://youtu.be/N6Oz9h9gvPE
