#include <Servo.h>
int pot1,pot2,pot3,pot4,pot5,pot6;
Servo armLeft, legLeft, footLeft, footRight, legRight, armRight;

void setup() {
  armLeft.attach(4);
  legLeft.attach(5);
  footLeft.attach(6);
  footRight.attach(8);
  legRight.attach(9);
  armRight.attach(10);
  for(byte i=14;i<=19;i++){
    pinMode(i,INPUT);
    }
  Serial.begin(9600);
}

void loop() {
    voidArmLeft();
    voidArmRight();
    voidlegLeft();
    voidfootLeft();
    voidfootRight();
    voidlegRight();
}

void voidArmLeft(){
  pot1 = analogRead(14);
  pot1 = map(pot1,0,1024,1,150);
  armLeft.write(pot1);
}

void voidArmRight(){
  pot6 = analogRead(19);
  pot6 = map(pot6,0,1024,160,1);
  armRight.write(pot6);
}

void voidlegLeft(){
  pot2 = analogRead(15);
  pot2 = map(pot2,0,1024,1,180);
  legLeft.write(pot2);
  }

void voidfootLeft(){
  pot3 = analogRead(16);
  pot3 = map(pot3,0,1024,30,130);
  footLeft.write(pot3);
}

void voidfootRight(){
  pot4 = analogRead(17);
  pot4 = map(pot4,0,1024,130,30);
  footRight.write(pot4);
  }

void voidlegRight(){
  pot5 = analogRead(18);
  pot5 = map(pot5,0,1024,180,1);
  legRight.write(pot5);
}
