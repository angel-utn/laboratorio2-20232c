#include "Transaccion.h"

Transaccion::Transaccion()
{
  _idTransaccion = 0;
  _descripcion = "";
  _fecha = Fecha();
  _idCategoria = 0;
  _monto = 0;
  _estado = true;
}

Transaccion::Transaccion(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, float monto, bool estado)
{
  _idTransaccion = idTransaccion;
  _descripcion = descripcion;
  _fecha = fecha;
  _idCategoria = idCategoria;
  _monto = monto;
  _estado = estado;
}

int Transaccion::getIdTransaccion() const { return _idTransaccion; }
void Transaccion::setIdTransaccion(int idTransaccion) { _idTransaccion = idTransaccion; }

std::string Transaccion::getDescripcion() const { return _descripcion; }
void Transaccion::setDescripcion(const std::string& descripcion) { _descripcion = descripcion; }

Fecha Transaccion::getFecha() const { return _fecha; }
void Transaccion::setFecha(const Fecha& fecha) { _fecha = fecha; }

int Transaccion::getIdCategoria() const { return _idCategoria; }
void Transaccion::setIdCategoria(int idCategoria) { _idCategoria = idCategoria; }

float Transaccion::getMonto() const { return _monto; }
void Transaccion::setMonto(float monto) { _monto = monto; }

bool Transaccion::getEstado() const { return _estado; }
void Transaccion::setEstado(bool estado) { _estado = estado; }

std::string Transaccion::toString() const {
  return "id transaccion: " + std::to_string(_idTransaccion) + " descripcion: " + _descripcion + " monto: " + std::to_string(_monto);
}