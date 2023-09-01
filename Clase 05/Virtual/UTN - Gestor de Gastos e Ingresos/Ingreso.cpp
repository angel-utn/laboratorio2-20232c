#include "Ingreso.h"

Ingreso::Ingreso()
  : Transaccion(), _tipo(0), _referencia("")
{
}

Ingreso::Ingreso(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipo, const std::string& refencia, float monto, bool estado)
  : Transaccion(idTransaccion, descripcion, fecha, idCategoria, monto, estado), _tipo(tipo), _referencia(refencia)
{
}

int Ingreso::getTipo() const
{
  return _tipo;
}

void Ingreso::setTipo(int tipo)
{
  _tipo = tipo;
}

std::string Ingreso::getReferencia() const
{
  return _referencia;
}

void Ingreso::setReferencia(const std::string& referencia)
{
  _referencia = referencia;
}

std::string Ingreso::toString() const
{
  return Transaccion::toString() + " tipo: " + std::to_string(_tipo) + " referencia: " + _referencia;
}
