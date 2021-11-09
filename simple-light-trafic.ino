//Semaforo sentido norte/sul
#define semCarVerde_1     2
#define semCarAmarelo_1   3
#define semCarVermelho_1  4

//Semaforo sentido leste/oeste
#define semCarVerde_2     5
#define semCarAmarelo_2   6
#define semCarVermelho_2  7

//Semafor pedestre
#define semPedVerde       8
#define semPedVermelho    9

void setup() {
  for(byte pin = 2; pin<10; pin++){
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
    delay(1000);   
    digitalWrite(pin, LOW);
    delay(500);
  }
}

void loop() {
  semCar_1("verde");
  semPed_1("vermelho");
  semCar_2("vermelho");
  delay(5000);
  semCar_1("amarelo");
  delay(3000);
  semCar_1("vermelho");
  semPed_1("verde");
  semCar_2("verde");
  delay(5000);
  semCar_2("amarelo");
  delay(3000);
}

void semCar_1(String statusSemCar_1){
  if(statusSemCar_1=="verde"){
    digitalWrite(semCarVerde_1, HIGH);
    digitalWrite(semCarAmarelo_1, LOW);
    digitalWrite(semCarVermelho_1, LOW);
  }
  else if(statusSemCar_1=="amarelo"){
    digitalWrite(semCarVerde_1, LOW);
    digitalWrite(semCarAmarelo_1, HIGH);
    digitalWrite(semCarVermelho_1, LOW);
  }
  else if(statusSemCar_1=="vermelho"){
    digitalWrite(semCarVerde_1, LOW);
    digitalWrite(semCarAmarelo_1, LOW);
    digitalWrite(semCarVermelho_1, HIGH);
  }
}

void semPed_1(String statusSemPed){
  if(statusSemPed=="verde"){
    digitalWrite(semPedVerde, HIGH);
    digitalWrite(semPedVerde, LOW);
  }
  else if(statusSemPed=="vermelho"){
    digitalWrite(semPedVerde, LOW);
    digitalWrite(semPedVerde, HIGH);
  }
}

void semCar_2(String statusSemCar_2){
  if(statusSemCar_2=="verde"){
    digitalWrite(semCarVerde_2, HIGH);
    digitalWrite(semCarAmarelo_2, LOW);
    digitalWrite(semCarVermelho_2, LOW);
  }
  else if(statusSemCar_2=="amarelo"){
    digitalWrite(semCarVerde_2, LOW);
    digitalWrite(semCarAmarelo_2, HIGH);
    digitalWrite(semCarVermelho_2, LOW);
  }
  else if(statusSemCar_2=="vermelho"){
    digitalWrite(semCarVerde_2, LOW);
    digitalWrite(semCarAmarelo_2, LOW);
    digitalWrite(semCarVermelho_2, HIGH);
  }
}

/*
 * IDEIAS A IMPLEMENTAR
 * while(!digitalRead(pin)){
      Serial.println("Led " + String(pin) + " não inicializou!");
    }
 */
