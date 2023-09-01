#include <iostream>
#include <cstring>

#include "Cadena.h"

using namespace std;

int main() {

  Cadena text;
  
  //const char* const cTexto;
  const int TAM = 5;
  const char* cTexto;
  text.setTexto("Hola Mundo!");

  cTexto = text.getTexto();

  // cTexto = text.getTexto();
  // cTexto[0] = '\0';
  // strcpy(cTexto, "Hola Mundo!");

  cout << cTexto;
  //text.mostrar();
  
  return 0;
}