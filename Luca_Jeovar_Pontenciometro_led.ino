#define pinsensor A0
#define led 3 

int potenciometro, ledg;
bool estadoled=0;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pinsensor, INPUT);
}
void loop(){
  potenciometro = analogRead(pinsensor);
  Serial.print(potenciometro);
  potenciometro = map(potenciometro, 0, 1023, 0, 255);
  analogWrite(led, potenciometro);
}
