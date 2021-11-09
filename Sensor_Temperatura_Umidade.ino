/*
   MODULO SENSOR DE TEMPERATURA E UMIDADE
   Autor: Bianôr Oliveira
   Orientador: Sandro Mesquita
*/
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2)
#include "dht.h" // incluo a bibilioteca dht

#define pinSensor A0 // defino a porta analogica A1 como pinSensor, referente ao pino do sensor

dht DHT; //crio um objeto DHT

float temperatura; // variavel do tipo float que armazena o valor da temperatura

int umidade; // variavel do tipo inteira que armazena o valor da umidade
int verde=5;
void setup() {
  /*
     As portas analogicas do Arduino, por padrão são de entrada,
     portando não precisa declara que pinSensor é de entrada.
  */lcd.init();
    lcd.backlight();
  Serial.begin(9600); // inicia a porta serial, configura a taxa de dados para 9600 bps
  pinMode(5, OUTPUT);
}

void loop() {
  /*
    Funções da biblioteca dht
    read11 = leitura
    Retorno em :
    umidade(DHT.humidity)
    temperatura(DHT.temperature)
  */
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("BOA TARDE");
  lcd.setCursor(1,1);
  lcd.print("ESCOLA PIXELS");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(("Temp")+String(temperatura));
  lcd.setCursor(0,1);
  lcd.print(("Umid")+String(umidade));
  delay(2000);
  lcd.clear();
  
  DHT.read11(pinSensor); // leio as informações e armazeno no objeto DHT

  umidade = DHT.humidity; // armazeno na variavel umidade, o valor da umidade
  temperatura = DHT.temperature; // armazeno na variavel temperatura, o valor da temperatura

  Serial.println(("Temperatura: ") + String(temperatura) + (" C* ") + ("Umidade: ") + String(umidade) + (" %"));
  // imprimo na serial o valor das variaveis temperatura e umidade

  //  delay(1000); // aguardo 1000 milissegundos / 1 segundo

  if (temperatura >= 30) {
    digitalWrite(5, 1);
  }
  else {
      digitalWrite(5, 0);
  }

}
