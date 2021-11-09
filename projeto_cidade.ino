const int led1 =2;
const int led2 =3;
const int led3 =4;
#define b9 9
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(b9,INPUT_PULLUP);

}

void loop() {

int recebe =   digitalRead(b9);
Serial.println("Status botao " + String(recebe));

if( recebe == HIGH){
   Serial.println("ENTREI NO IF");

  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  delay(1000);

  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  delay(700);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  delay(1000);

}
else{

    Serial.println("ENTREI NA NEGAÇÃO DO  IF");
    digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  delay(1000);
  
  }

  
  

}
