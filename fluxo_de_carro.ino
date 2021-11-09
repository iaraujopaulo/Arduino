// vermelho[2], amarelo[3], verde[4]
byte pinSemaforo[]={2,3,4};
//byte pinSemaforo[0] = 2;
//byte pinSemaforo[1] = 3;
//byte pinSemaforo[2] = 4;

void setup() {
 Serial.begin(9600);
 //Serial.println(pinSemaforo[2]);
 for (byte x=0; x<3; x++){
 pinMode(pinSemaforo[x], OUTPUT);
 }

void loop() {
  bool sensorIR= digitalRead(2);
  Serial.println(sensorIR);
  semaforo();
}

void semaforo(){
  vermelho();
  delay(8000);
  amarelo();
  delay(3000);
  verde();
  delay(5000);
}

void vermelho(){
  digitalWrite(pinSemaforo[0],HIGH);
  digitalWrite(pinSemaforo[1],LOW);
  digitalWrite(pinSemaforo[2],LOW);
  Seril.println("vermelho");
}

void amarelo (){
   digitalWrite(pinSemaforo[0],LOW);
  digitalWrite(pinSemaforo[1],HIGH);
  digitalWrite(pinSemaforo[2],LOW);
  Seril.println("amarelo");
}

void verde (){
  digitalWrite(pinSemaforo[0],LOW);
  digitalWrite(pinSemaforo[1],LOW);
  digitalWrite(pinSemaforo[2],HIGH);
  Seril.println("verde");
}
