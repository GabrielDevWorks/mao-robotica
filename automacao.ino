#include <Servo.h>

Servo polegar;
Servo indicador;
Servo medio;
Servo anelar;
Servo mindinho;

void setup() {
  polegar.attach(7);	
  indicador.attach(6);
  medio.attach(5);
  anelar.attach(4);
  mindinho.attach(3);
  Serial.begin(9600);
}

void loop() {
  int polegarS;
  int indicadorS;
  int medioS;
  int anelarS;
  int mindinhoS;
  
  int i = 1;
  
  while (1) {
    if (i == 1) {
      polegarS = 0;
      indicadorS = 0;
      medioS = 0;
      anelarS = 0;
      mindinhoS = 0;
    }
    else if (i == 2) {
      polegarS = 300;
      indicadorS = 300;
      medioS = 300;
      anelarS = 300;
      mindinhoS = 300;
    }
    else {
      polegarS = 0;
      indicadorS = 300;
      medioS = 0;
      anelarS = 0;
      mindinhoS = 0;
      i = 1;
    }
    
    i++;
    
    polegar.write(polegarS);
    indicador.write(indicadorS);
    medio.write(medioS);
    anelar.write(anelarS);
    mindinho.write(mindinhoS);
    
    delay(2000);
  }
}
