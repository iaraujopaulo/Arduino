#define led 12
#define btn 3
void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);
   pinMode(btn, INPUT_PULLUP);
   digitalWrite(led, HIGH);
}

void loop() {
    while(!digitalRead(btn))digitalWrite(led, LOW);
    digitalWrite(led, HIGH); 
  
}
