

void setup() {
 Serial.begin(9600);
}

void loop() {
  bool sensorIR= digitalRead(2);
  //int sensorIR = analogRead(A0);
  Serial.println(sensorIR);
}
