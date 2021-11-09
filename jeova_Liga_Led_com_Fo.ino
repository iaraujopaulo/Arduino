void setup() {
  Serial.begin(9600);
  for (int i = 2; i <= 6; i++) {
    pinMode(i, OUTPUT);
    delay(1);
    Serial.println(i);
  }
}

void loop() {
  for (int i = 2; i <= 6; i++) {
    Serial.println(i);
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }

//for (int i = 4; i <= 13; i++) {
//    Serial.println(i);
//    digitalWrite(i, HIGH);
//    delay(100);
//} 
//for (int i = 13; i >= 4; i--) {
//  digitalWrite(i, LOW);
//  delay(100); 
//  }
}
