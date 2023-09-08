#include <iostream>
using namespace std;

#include "ProgramaUno.h"
#include "ProgramaDos.h"

int main(){
  ProgramaUno p1;
  p1.setTitulo("Cálculo de honorarios de un empleado");
  p1.Ejecutar();
  cout << endl << endl;
  ProgramaDos p2;
  p2.setTitulo("Nómina de empleados");
  p2.Ejecutar();

  return 0;
}