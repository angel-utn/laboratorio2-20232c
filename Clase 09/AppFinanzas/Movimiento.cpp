#include "Movimiento.h"
#include <cstring>

Movimiento::Movimiento(){
  _eliminado = false;
}

 int Movimiento::getId() const {
  return _id;
}

 void Movimiento::setId(int id) {
  _id = id;
}

 float Movimiento::getImporte() const {
  return _importe;
}

 void Movimiento::setImporte(float importe) {
  _importe = importe;
}

int Movimiento::getIDTipoMovimiento() const {
  return _tipoMovimiento;
}

std::string Movimiento::getTipoMovimiento() const{
  return (_tipoMovimiento==1 ? "Ingreso" : "Gasto");
}

 void Movimiento::setIDTipoMovimiento(int IDTipoMovimiento) {
  _tipoMovimiento = IDTipoMovimiento;
}

 Fecha Movimiento::getFecha() const {
  return _fecha;
}

 void Movimiento::setFecha(const Fecha &fecha) {
  _fecha = fecha;
}

std::string Movimiento::getDescripcion() const {
  return _descripcion;
}

void Movimiento::setDescripcion(std::string descripcion) {
  strcpy(_descripcion, descripcion.c_str());
}

 std::string Movimiento::getReferencia() const {
  return _referencia;
}

 void Movimiento::setReferencia(std::string referencia) {
  strcpy(_referencia, referencia.c_str());
}

bool Movimiento::getEliminado() const{
  return _eliminado;
}
void Movimiento::setEliminado(bool eliminado){
  _eliminado = eliminado;
}
