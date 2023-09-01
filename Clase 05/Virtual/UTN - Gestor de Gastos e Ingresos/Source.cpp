#include <iostream>
#include "Sistema.h"

using namespace std;

int main() {
  Sistema sistema;

  sistema.cargarTransacciones();

  sistema.mostrarGastos(); /// Punto A

  sistema.mostrarMayorIngreso(); // Punto B

  sistema.mostrarSaldo(); // Punto C
  
  return 0;
}