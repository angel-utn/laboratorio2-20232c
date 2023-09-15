#include <iostream>
using namespace std;
#include "funciones.h"

void mostrarMovimiento(Movimiento reg){
  cout << "ID: " << reg.getId() << endl;
  cout << "DESCRIPCION: " << reg.getDescripcion() << endl;
  cout << "FECHA: " << reg.getFecha().toString() << endl;
  cout << "TIPO: " << reg.getTipoMovimiento() << endl;
  cout << "IMPORTE: $" << reg.getImporte() << endl;
  cout << "REFERENCIA: " << reg.getReferencia() << endl;
}

Movimiento cargarMovimiento(){
  int id, dia, mes, anio, tipo;
  float importe;
  string descripcion;
  string referencia;

  cout << "ID: ";
  cin >> id;
  cout << "DESCRIPCION: ";
  cin.ignore();
  getline(cin, descripcion);
  cout << "FECHA: ";
  cin >> dia;
  cin >> mes;
  cin >> anio;
  cout << "TIPO: ";
  cin >> tipo;
  cout << "IMPORTE: $";
  cin >> importe;
  cout << "REFERENCIA: ";
  cin.ignore();
  getline(cin, referencia);

  Movimiento reg;
  reg.setId(id);
  reg.setFecha(Fecha(dia, mes, anio));
  reg.setDescripcion(descripcion);
  reg.setIDTipoMovimiento(tipo);
  reg.setReferencia(referencia);
  reg.setImporte(importe);
  return reg;
}
bool guardarMovimiento(Movimiento reg){
  bool pudoEscribir;
  FILE *p = fopen("movimientos.dat", "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Movimiento), 1, p);
  fclose(p);
  return pudoEscribir;
}
// Guarda un registro de movimiento en el archivo
  /*
  
  */