int botao=5, ledverde=7;
bool estadoled=0;
void setup() {
pinMode(ledverde, OUTPUT);
pinMode(botao, INPUT_PULLUP);

}
void loop () {
  int estadobotao=digitalRead(botao);
  delay(200);
  if(estadobotao==0){
    estadoled=!estadoled;
    digitalWrite(ledverde, estadoled);
  }
}
