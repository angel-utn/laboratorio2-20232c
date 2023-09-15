#include <iostream>
#include <cstdio>
using namespace std;
#include "Movimiento.h"
#include "funciones.h"

int main(){
  /*
  // Cargar un movimiento y guardarlo en disco
  Movimiento m;
  m = cargarMovimiento();
  if (guardarMovimiento(m)){
    cout << "Movimiento registrado ok.";
  }
  else{
    cout << "Hubo un error. No se guardo el movimiento";
  }
  */

  // Listar el archivo de movimientos en su totalidad.
  Movimiento m;
  FILE *p = fopen("movimientos.dat", "rb");
  if (p == nullptr){
    return 1;
  }
  
  while(fread(&m, sizeof(Movimiento), 1, p) == 1){
    mostrarMovimiento(m);
    cout << endl;
  }

  fclose(p);
  return 0;
}