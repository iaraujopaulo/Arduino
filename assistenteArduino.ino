String inputString = "";         // a String to hold incoming data - String de entrada vazia
bool stringComplete = false;  // whether the string is complete - confirma se a string chegou inteira e completa

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200); //String de entrada com 200 bytes de caracteres para armazenar
  
  pinMode(LED_BUILTIN, OUTPUT); //led embarcado natural do arduino
}

void loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
    Serial.print("Assistente Mil Grau Falando: ");
    Serial.print(inputString);
    // clear the string:
    if(inputString.startsWith("ligar")){ //se a instrigue de entrada começar com a palavra ligar
      //importante: qualquer texo com a palvra ligar
      digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));// toggle - escrev o inverso do estado atual, vou ler o led e inverter o estado
    }
    inputString = ""; //quando chegar a string compelta ele esvazia
    stringComplete = false;
  }
}

/*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
//Leitura da porta Serial
void serialEvent() { //o Arduino tem essa função importante, ele tem esse serialEvent, vc chamando ele roda o loop e depois esse serialEvent
  while (Serial.available()) {//Enquanto tiver alguma coisa recebendo na Serial
    // get the new byte:
    char inChar = (char)Serial.read();//Leitura no Serial.read e converto para caracter
    // add it to the inputString:
    inputString += inChar;//coloca a variável inChar letra por letra ouvida na String
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;//quando chegar no /n ele conclui q recebeu a frase inteira
    }
  }
}
