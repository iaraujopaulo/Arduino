#include <Ultrasonic.h>

#include <UltraSonic.h>

#include <Servo.h>
Servo cancelaTrem; /*cancelaEstacionamento*/
#define servoTrem 3
//#define servoEst 5
#define vcc 11

#include <Ultrasonic.h>
#define trig 12
#define echo 13
Ultrasonic sensorTrem(trig,echo);

void setup() {
 Serial.begin(9600);
 pinMode(vcc, OUTPUT);
 digitalWrite(vcc, HIGH);
 cancelaTrem.attach(servoTrem);
 //cancelaEstacionamentoattach(servoEst);
}

void loop() {
  
  int distancia = sensorTrem.convert(sensorTrem.timing(), Ultrasonic::CM);
  if (distancia <= 30){
    cancelaTrem.write(90);
  }
    else cancelaTrem.write(0);
         
  Serial.println(distancia);
  delay(1000);  
// cancelaTrem.write(0);
// delay(1000); 
// cancelaTrem.write(90);
// delay(1000);
// cancelaTrem.write(180);
// delay(1000);

}
