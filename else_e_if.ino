int = 0;

void setup() {
 Serial.println(9600);
 Serial.println("PROGRAMA RODANDO");
}

void loop() {
  if (num < 10) Serial.println("NUMERO MENOR QUE 10: " = String(numero)); 
  
  else if ((num>=10) and (num < 20)) {
    if (num == 10) Serial.println ("CHEGOU NO NUMERO 10.")
   else Serial.println("CHEGOU NO MAIOR QUE 10: " + String(numero)); 
  }
  else if ((num>=20) and (num < 30)) {
    if (num == 20) Serial.println ("CHEGOU NO NUMERO 20.")
   else Serial.println("CHEGOU NO MAIOR QUE 20: " + String(numero)); 
  }
  else {
    if (num == 30) Serial.println ("CHEGOU NO NUMERO 30.")
    else Serial.println("Chegou no maior que 30: " + String(numero))
  }
  //Serial.println(numero);
  num = num + 2
  delay(1000);
}
