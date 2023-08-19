
#include <math.h>

#define Numar1 1
#define Numar2 2
#define Numar3 3
#define Numar4 4
#define Numar5 5
#define Numar6 6

int addunare ();


 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

Serial.println("Setup Done!");
}

void loop() {
  // put your main code here, to run repeatedly:
addunare ();
}


int addunare ()
    {

      int suma = Numar1 + Numar2;

      return suma;

    }