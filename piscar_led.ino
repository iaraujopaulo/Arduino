//Arduino.h

byte led = 13, led_amarelo = 12;
char teste = 's';
bool ligado = 1, desligado = 0;
#define on true
#define off false
int contador = 0;

void setup() {
  
pinMode(led,OUTPUT); 
pinMode(led_amarelo,OUTPUT);
Serial.begin(9600);
Serial.println("Inicializando...");
 
}

void loop() {

contador = contador + 1;
Serial.print(" ");
Serial.println(contador);  
digitalWrite(led, ligado);
digitalWrite(led_amarelo, off);
delay(50);
digitalWrite(led, desligado);
digitalWrite(led_amarelo, on);
delay(20);

}
