#define led 12
#define btn 3
byte numSorteado;
bool sorteio = false;

void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);  pinMode(btn, INPUT_PULLUP);
   digitalWrite(led, HIGH);
   randomSeed(analogRead(A0));
}

void loop() {
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
