//semaforo 1
#define re 2
#define ye 3
#define gr 4
//semaforo 2
#define vm 5
#define am 6
#define vr 7
//display
#define a 10
#define b 9
#define c 12
#define d 14
#define e 13
#define f 11
#define g 8

int numero;

void setup() 
//define pinos como saida
{
  for (int i = 2; i <= 7; i++) {
    pinMode (i, OUTPUT);
  }
}

void loop() {
//semaforo 1 
{
  digitalWrite (gr, 1);
  digitalWrite (vm, 1);
  delay (5000);
  digitalWrite (gr, 0);
  
  digitalWrite (ye, 1);
  digitalWrite (vm, 1);
  delay (2000);
  digitalWrite (ye, 0);
  digitalWrite (vm, 0);
  
  digitalWrite (re, 1);
  digitalWrite (vr, 1);
  display (7);
  delay (1000);
  display (6);
  delay (1000);
  display (5);
  delay (1000);
  display (4);
  delay (1000);
  display (3);
  delay (1000);
  digitalWrite (vr, 0);
  
  digitalWrite (re, 1);
  digitalWrite (am, 1);
  display (2);
  delay (1000);
  display (1);
  delay (1000);
  digitalWrite (re, 0);
  digitalWrite (am, 0);
  display (0);
}
}

void display (int numero) {
  switch (numero) {

    case 0:
      digitalWrite (a, 0);
      digitalWrite (b, 0);
      digitalWrite (c, 0);
      digitalWrite (d, 0);
      digitalWrite (e, 0);
      digitalWrite (f, 0);
      digitalWrite (g, 0);
      break;
      
    case 1:
      digitalWrite (a, 0);
      digitalWrite (b, 1);
      digitalWrite (c, 1);
      digitalWrite (d, 0);
      digitalWrite (e, 0);
      digitalWrite (f, 0);
      digitalWrite (g, 0);
      break;

    case 2:
      digitalWrite (a, 1);
      digitalWrite (b, 1);
      digitalWrite (c, 0);
      digitalWrite (d, 1);
      digitalWrite (e, 1);
      digitalWrite (f, 0);
      digitalWrite (g, 1);
      break;

    case 3:
      digitalWrite (a, 1);
      digitalWrite (b, 1);
      digitalWrite (c, 1);
      digitalWrite (d, 1);
      digitalWrite (e, 0);
      digitalWrite (f, 0);
      digitalWrite (g, 1);
      break;

    case 4:
      digitalWrite (a, 0);
      digitalWrite (b, 1);
      digitalWrite (c, 1);
      digitalWrite (d, 0);
      digitalWrite (e, 0);
      digitalWrite (f, 1);
      digitalWrite (g, 1);
      break;

    case 5:
      digitalWrite (a, 1);
      digitalWrite (b, 0);
      digitalWrite (c, 1);
      digitalWrite (d, 1);
      digitalWrite (e, 0);
      digitalWrite (f, 1);
      digitalWrite (g, 1);
      break;
    
    case 6:
      digitalWrite (a, 1);
      digitalWrite (b, 0);
      digitalWrite (c, 1);
      digitalWrite (d, 1);
      digitalWrite (e, 1);
      digitalWrite (f, 1);
      digitalWrite (g, 1);
      break;

    case 7:
      digitalWrite (a, 1);
      digitalWrite (b, 1);
      digitalWrite (c, 1);
      digitalWrite (d, 0);
      digitalWrite (e, 0);
      digitalWrite (f, 0);
      digitalWrite (g, 0);
      break;
  }
}
