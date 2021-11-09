#define led 12
#define btn 3
void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);
   pinMode(btn, INPUT_PULLUP);
   digitalWrite(led, HIGH);
   randomSeed(analogRead(A0));
}

void loop() {
  while(!digitalRead(btn));
    Serial.println(random(11));
    delay(2000);
}
