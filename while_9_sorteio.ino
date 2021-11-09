#define led 12
#define btn 3
byte numSorteado, numSorte;
bool sorteio = false;

void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);  pinMode(btn, INPUT_PULLUP);
   digitalWrite(led, HIGH);
   randomSeed(analogRead(A0));
   Serial.println("Digite um numero da sorte!");
}

void loop() {
  if (Serial.available() > 0){
    numSorte = SerialRead();
  }
  while(!digitalRead(btn)){
    numSorteado = random(11);
    Serial.println(numSorteado);
    sorteio = true;
  }
  if(sorteio==true){
  }
   Serial.println("O numero sorteado foi: " + String(numSorteado));
   sorteio = false;
   delay(200);
}
