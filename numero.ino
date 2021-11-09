int num = 0;


void setup() {
  Serial.begin(9600);
  Serial.println("PROGRAMA RODANDO");

}

void loop() {
 
 if (num>=10){
 Serial.print("CHEGOU NO NUMERO: ");
 Serial.println(num);
 } 
 
 else if (num>=20){
 Serial.print("CHEGOU NO NUMERO: ");
 Serial.println(num);
  }
  
 else if (num>=30){
 Serial.print("CHEGOU NO NUMERO: ");
 Serial.println(num);
  }
  //Serial.println(num);
  num = num + 2;
 delay(1000);

}
  
  
