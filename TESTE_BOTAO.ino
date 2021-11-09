#define PINO_LIGAR   8
#define PINO_DESLIGAR 9
#define LED1 2
#define LED2 3
#define LED3 4

void setup() {

  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(PINO_LIGAR, INPUT_PULLUP);
  pinMode(PINO_DESLIGAR, INPUT_PULLUP);
}

void loop() {
  int acender = digitalRead(PINO_LIGAR);
  int apagar = digitalRead(PINO_DESLIGAR);
  if (acender == LOW) {
     Serial.println("ENTREI NO IF ACENDER ");

    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    delay(1000);

    digitalWrite(LED1, 0);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 0);
    delay(700);
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 1);
    delay(1000);
  }
  if (apagar == LOW) {

        Serial.println("ENTREI NO IF APAGAR");
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
  }
}
