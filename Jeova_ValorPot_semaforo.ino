int ValorPot;
void setup() {
  Serial.begin(9600);
  for (int i = 2; i <= 6; i++) {
    pinMode(i, OUTPUT);
    delay(1);
    Serial.println(i);
  }
}

void loop() {
  ValorPot=analogRead(A0);
  ValorPot=map(ValorPot, 0, 1023, 0, 5);

   switch (ValorPot) {
     case 0:
     digitalWrite(2, 1);
     digitalWrite(3, 0);
     digitalWrite(4, 0);
     digitalWrite(5, 0);
     digitalWrite(6, 0);
     break;
     case 1:
     digitalWrite(2, 0);
     digitalWrite(3, 1);
     digitalWrite(4, 0);
     digitalWrite(5, 0);
     digitalWrite(6, 0);
     break;
     case 2:
     digitalWrite(2, 0);
     digitalWrite(3, 0);
     digitalWrite(4, 1);
     digitalWrite(5, 0);
     digitalWrite(6, 0);
     break;
     case 3:
     digitalWrite(2, 0);
     digitalWrite(3, 0);
     digitalWrite(4, 0);
     digitalWrite(5, 1);
     digitalWrite(6, 0);
     break;
     case 4:
     digitalWrite(2, 0);
     digitalWrite(3, 0);
     digitalWrite(4, 0);
     digitalWrite(5, 0);
     digitalWrite(6, 1);
     break;
     
     
     
   }
//  for (int i = 2; i <= 6; i++) {
//    Serial.println(i);
//    digitalWrite(i, HIGH);
//    delay(50);
//    digitalWrite(i, LOW);
//  }

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
