#include <NewPing.h>
#include <Servo.h>

Servo teste;

#define trig 12
#define echo 13
#define distmax 300

#define ENA 7
#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6
#define ENB 2

int velocidade = 255;
int left;
int right;
int distancia;
NewPing sonar(trig, echo, distmax);
void setup() {
  teste.attach(10);
  Serial.begin(9600);
  for (int i = 2; i <= 7; i++) {
    pinMode (i, OUTPUT);
  }

}

void loop() {
  distancia = sonar.ping_cm();
  if(distancia != 0){
    if(distancia <= 50){
    parada();
    delay(1500);
    observar();
    if(right > left){
    if(left<15){
          esquerda();
          delay(1500);
          re();
          delay(1000);
   }
        direita();
        delay(2000);
        parada();
        delay(100);
        distancia = sonar.ping_cm();
   }else if(right < left){
   if(right<15){
          direita();
          delay(1500);
          re();
          delay(1000);
        }
        esquerda();
        delay(2000);
        parada();
        delay(100);
        distancia = sonar.ping_cm();   
  }
  }else{
      if(distancia>299){
        re();
        delay(1500);
      }
      frente();
      anguloServo(90);
    }
    }
  
}

void anguloServo(int angulo) {
  teste.write(angulo);
}

void observar() {

  anguloServo(180);//esquerda
  delay(1000);
  left = sonar.ping_cm();
  delay(1000);

  anguloServo(0);//direta
  delay (1000);
  right = sonar.ping_cm();
  delay(1000);

  anguloServo(90);
}

void frente() {
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  analogWrite(ENA, velocidade);
  analogWrite(ENB, velocidade);
}

void parada() {
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void esquerda() {
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  analogWrite(ENA, velocidade);
  analogWrite(ENB, velocidade);
}

void direita() {
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  analogWrite(ENA, velocidade);
  analogWrite(ENB, velocidade);
}
void re() {
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  analogWrite(ENA, velocidade);
  analogWrite(ENB, velocidade);
}
