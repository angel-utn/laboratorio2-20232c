#include "MovimientoManager.h"
#include <iostream>
using namespace std;

void MovimientoManager::Cargar(){
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
  
  cout << endl;
  
  bool ok = _archivo.Guardar(reg);
  if (ok){
    cout << "> El movimiento se registro correctamente.";
  }
  else{
    cout << "> El movimiento no se registro correctamente.";
  }
  cout << endl;
}

void MovimientoManager::Editar(){
  int ID, posicion;
  cout << "ID Movimiento: ";
  cin >> ID;

  posicion = _archivo.Buscar(ID);
  if (posicion >= 0){
    Movimiento aux = _archivo.Leer(posicion);
    cout << "Registro a modificar: " << endl;
    Mostrar(aux);
    
    float nuevoImporte;
    cout << endl << "Nuevo Importe $ ";
    cin >> nuevoImporte;
    aux.setImporte(nuevoImporte);
    _archivo.Guardar(aux, posicion);
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
}

void MovimientoManager::Eliminar(){
  int ID, posicion;
  cout << "ID Movimiento: ";
  cin >> ID;

  posicion = _archivo.Buscar(ID);
  if (posicion >= 0){
    Movimiento aux = _archivo.Leer(posicion);
    cout << "Registro a eliminar: " << endl;
    Mostrar(aux);
    
    char confirmacion;
    cout << endl << "¿Confirmar? S/N";
    cin >> confirmacion;

    if (toupper(confirmacion) == 'S'){
      aux.setEliminado(true);
      _archivo.Guardar(aux, posicion);
      cout << endl << "> Registro eliminado correctamente." << endl;
    }
    else{
      cout << endl << "> Tu registro esta a salvo. Arrugaste." << endl;
    }
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }

}

void MovimientoManager::Mostrar(Movimiento reg){
  cout << "ID: " << reg.getId() << endl;
  cout << "DESCRIPCION: " << reg.getDescripcion() << endl;
  cout << "FECHA: " << reg.getFecha().toString() << endl;
  cout << "TIPO: " << reg.getTipoMovimiento() << endl;
  cout << "IMPORTE: $" << reg.getImporte() << endl;
  cout << "REFERENCIA: " << reg.getReferencia() << endl;
  cout << "ELIMINADO: " << (reg.getEliminado()?"Si":"No") << endl << endl;
}

void MovimientoManager::MostrarCantidadRegistros(){
  int cantidadRegistros = _archivo.ContarRegistros();
  cout << endl << "CANTIDAD REGISTROS: " << cantidadRegistros << endl;
}

void MovimientoManager::ListarTodos(){
  int cantidadRegistros = _archivo.ContarRegistros();
  for(int i=0; i<cantidadRegistros; i++){
    Mostrar(_archivo.Leer(i));
  }
}

int MovimientoManager::Buscar(int IDMovimiento){
  int cantidadRegistros = _archivo.ContarRegistros();
  for(int i=0; i<cantidadRegistros; i++){
    Movimiento reg = _archivo.Leer(i);
    if (reg.getId() == IDMovimiento){
      return i;
    }
  }
  return -1;
}

void MovimientoManager::ListarxID(){
  int ID, posicion;
  cout << "ID Movimiento: ";
  cin >> ID;

  posicion = _archivo.Buscar(ID);
  if (posicion >= 0){
    Movimiento aux = _archivo.Leer(posicion);
    Mostrar(aux);
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
}

void MovimientoManager::ListarxTipoMovimiento(int IDTipoMovimiento){
  int cantidadRegistros = _archivo.ContarRegistros();
  for(int i=0; i<cantidadRegistros; i++){
    Movimiento reg = _archivo.Leer(i);
    if (reg.getIDTipoMovimiento() == IDTipoMovimiento){
      Mostrar(reg);
    }
  }
}

