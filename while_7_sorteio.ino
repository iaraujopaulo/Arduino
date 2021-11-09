#define led 12
#define btn 3
byte sorteio;
void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);  pinMode(btn, INPUT_PULLUP);
   digitalWrite(led, HIGH);
   randomSeed(analogRead(A0));
}

void loop() {
  while(!digitalRead(btn)){
    sorteio = random(11);
    Serial.println(sorteio);
  }
    Serial.println("O numero sorteado foi: " + String(sorteio));
}
