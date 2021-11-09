#include <Servo.h>
Servo teste;
Servo garra;
Servo direito;
Servo esquerdo;
char comando;
int a;
int b;
int c;
int d;
void setup() {
  teste.attach(2);
  garra.attach(2);
  direito.attach(2);
  esquerdo.attach(2);
  Serial.begin (9600);
}

void loop() {

  if (Serial.available() > 0) {
    comando = Serial.read();
    Serial.println(comando);
  }
  if (comando == 'A') {
    a = Serial.parseInt();
    teste.write(a);
  }
  if (comando == 'B') {
   b = Serial.parseInt();
    garra.write(b);
  }
  if (comando == 'C') {
    c= Serial.parseInt();
    direito.write(c);
  }
  if (comando == 'D') {
    d = Serial.parseInt();
    esquerdo.write(d);
  }
}
