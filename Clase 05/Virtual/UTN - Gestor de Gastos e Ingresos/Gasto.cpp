#include "Gasto.h"

Gasto::Gasto() : Transaccion(), _establecimiento(""), _idMetodoPago(0)
{
  
}

Gasto::Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado)
  : Transaccion(idTransaccion, descripcion, fecha, idCategoria, monto, estado), _establecimiento(establecimiento), _idMetodoPago(idMetodoPago)
{

}

int Gasto::getIdMetodoPago() const { return _idMetodoPago; }
void Gasto::setIdMetodoPago(int idMetodoPago) { _idMetodoPago = idMetodoPago; }

std::string Gasto::getEstablecimiento() const { return _establecimiento; }
void Gasto::setEstablecimiento(const std::string& establecimiento) { _establecimiento = establecimiento; }

std::string Gasto::toString() const {
  return Transaccion::toString()+" metodo pago: "+std::to_string(_idMetodoPago) + " establecimiento: "+_establecimiento;
}