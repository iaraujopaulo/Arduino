int vermelho = 8;
int verde = 9;
int amarelo = 10;
void setup() {
  pinMode(vermelho,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
}
void loop(){
  //vermelho ligado
digitalWrite(vermelho,HIGH);
digitalWrite(amarelo,LOW);
digitalWrite(verde,LOW);
delay(2000);
//amarelo ligado
digitalWrite(vermelho,LOW);
digitalWrite(amarelo,HIGH);
digitalWrite(verde,LOW);
delay(500);
//vede ligado
digitalWrite(vermelho,LOW);
digitalWrite(amarelo,LOW);
digitalWrite(verde,HIGH);
delay(1000);
}
