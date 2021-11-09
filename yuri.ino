#define led1 3 // porta PWM
#define led2 5
#define pinPotenciometro  A0// 
int valordopotenciomentro,valorLed1,valorLed2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode (pinPotenciometro, INPUT);
  Serial.begin(9600);
}
void loop() {
  valordopotenciomentro = analogRead(pinPotenciometro); // leitura do pot
  Serial.println ( valordopotenciomentro); //imprimo na serial o valor de pot
  valorLed1  = map (valordopotenciomentro, 0, 1023, 0, 255); // regra de 3 (map)
  Serial.println (valorLed1);//imprimo na serial o novo valor de pot depois do map
  analogWrite(led1, valorLed1);//ligo o led com o novo valor de pot depois do map


  valorLed2  = map (valordopotenciomentro, 0, 1020, 255, 0); // regra de 3 (map)
  Serial.println ( valorLed2);//imprimo na serial o novo valor de pot depois do map
  analogWrite(led2, valorLed2);//ligo o led com o novo valor de pot depois do map


}
