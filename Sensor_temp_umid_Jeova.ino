#include "dht.h" 

#define pinSensor A0

dht DHT;

float temperatura;
int umidade;

void setup() {
  Serial.begin(9600);
}
void loop() {


DHT.read11(pinSensor);

umidade=DHT.humidity;
temperatura=DHT.temperature;

Serial.println(("temperatura: ")+String(temperatura)+(" C* ")+("Umidade: ")+String(umidade)+(" %"));

delay(1000);
}
