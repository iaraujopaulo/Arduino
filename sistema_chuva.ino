#define ledvm 10
#define ledvd 9
#define ledaz 8
#define sensor A1//defini os componentes  e indiquei as portas .   
int ValorSensor;
void setup() {// inicio minha configuração 
  Serial.begin (9600);//   o início da serial, aonde eu indico os pinos de entrada e saida .
  pinMode ( ledvm, OUTPUT);//pinos de saidas 
  pinMode ( ledvd, OUTPUT);     //
  pinMode ( ledaz, OUTPUT);     //
  pinMode( sensor, INPUT);// pino de entrada 

}

void loop() {
  ValorSensor = analogRead(sensor);// leitura analogica do sensor carregado na variavel ( ValorSensor)
  Serial.println(ValorSensor);

  if ( ValorSensor > 700 ) { // comecei a colocar minhas condiçoes (if=SI)
    Serial.println("esta seco" );
    digitalWrite ( ledvd , 1);// liguei o led de acordo com o valor do sensor  .
    digitalWrite ( ledaz , 0);
    digitalWrite ( ledvm , 0);
  }
  if ((ValorSensor > 300) and ( ValorSensor < 700)) {
    Serial.println("pouca chuva " );
    digitalWrite ( ledaz , 1);
    digitalWrite ( ledvd , 0);
    digitalWrite ( ledvm , 0);

  }
  if ( ValorSensor < 300) {
    Serial.println("muita chuva " );
    digitalWrite ( ledvm , 1);
    digitalWrite ( ledaz , 0);
    digitalWrite ( ledvd , 0);
  }


}
