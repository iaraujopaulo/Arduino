int num = 0;


void setup() {
  Serial.begin(9600);
  Serial.println("PROGRAMA RODANDO");

}

void loop() {
  if (num < 10){
    Serial.println("NUMERO MENOR QUE 10: ");
  }
  else if (num>=10) and (num < 20){
   }
    if (num == 10){
 Serial.print("CHEGOU NO NUMERO 10: ");
 } 
 else {
  Serial.print("Chegou no maior que 10: ");
  Serial.println(num);
 }
 if (num < 20){
    Serial.println("NUMERO MENOR QUE 10: ");
  }
  else if (num>=20) and (num < 30){
    if (num == 20){
  }
 Serial.print("CHEGOU NO NUMERO 20: ");
 } 
 else {
  Serial.print("Chegou no maior que 20: ");
  Serial.println(num);
 }
 if (numero < 30){
    Serial.println("NUMERO MENOR QUE 30: ");
  }
  else if (num>=30) and (num < 40){
    if (num == 30){
 Serial.print("CHEGOU NO NUMERO 30: ");
 } 
 else {
  Serial.print("Chegou no maior que 30: ");
  Serial.println(num);
 }
  //Serial.println(num);
  num = num + 2;
 delay(1000);

}
  
  
