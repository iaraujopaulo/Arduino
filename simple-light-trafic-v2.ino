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

//Variaveis status dos semaforos
bool verde_on = 1, verde_off = 0,
     amarelo_on = 1, amarelo_off = 0,
     vermelho_on = 1, vermelho_off = 0;

byte semaforoCarro_1 = 1, semaforoCarro_2 = 2, semaforoPedestre = 0;
void setup() {
  for (byte pin = 2; pin < 10; pin++) {
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

void semCar_1(String statusSemCar_1) {
  if (statusSemCar_1 == "verde")
    controleSemaforo(semaforoCarro_1, verde_on, amarelo_off, vermelho_off);
  else if (statusSemCar_1 == "amarelo")
    controleSemaforo(semaforoCarro_1, verde_off, amarelo_on, vermelho_off);
  else if (statusSemCar_1 == "vermelho")
    controleSemaforo(semaforoCarro_1, verde_off, amarelo_off, vermelho_on);
}

void semPed_1(String statusSemPed) {
  if (statusSemPed == "verde") 
    controleSemaforo(semaforoPedestre, verde_on, amarelo_off, vermelho_off);
  else if (statusSemPed == "vermelho")
    controleSemaforo(semaforoPedestre, verde_off, amarelo_off, vermelho_on);
}

void semCar_2(String statusSemCar_2) {
  if (statusSemCar_2 == "verde") 
    controleSemaforo(semaforoCarro_2, verde_on, amarelo_off, vermelho_off);
  else if (statusSemCar_2 == "amarelo") 
    controleSemaforo(semaforoCarro_2, verde_off, amarelo_on, vermelho_off);
  else if (statusSemCar_2 == "vermelho") 
    controleSemaforo(semaforoCarro_2, verde_off, amarelo_off, vermelho_on);
}

void controleSemaforo(byte semaforo, bool statusVerde, bool statusAmarelo, bool statusVermelho) {
  if (semaforo == 1) {
    digitalWrite(semCarVerde_1, statusVerde);
    digitalWrite(semCarAmarelo_1, statusAmarelo);
    digitalWrite(semCarVermelho_1, statusVermelho);
  } 
  else if (semaforo == 2) {
    digitalWrite(semCarVerde_2, statusVerde);
    digitalWrite(semCarAmarelo_2, statusAmarelo);
    digitalWrite(semCarVermelho_2, statusVermelho);
  }
  else if(semaforo == 0) {
    digitalWrite(semPedVerde, statusVerde);
    digitalWrite(semPedVermelho, statusVermelho);
  }
}
