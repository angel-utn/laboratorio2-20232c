#pragma once
#include <string>
#include "Fecha.h"
#include "Transaccion.h"
class Gasto: public Transaccion
{
private:
  int _idMetodoPago;
  std::string _establecimiento;
public:
  Gasto();
  Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado);
  int getIdMetodoPago() const;
  void setIdMetodoPago(int idMetodoPago);

  std::string getEstablecimiento() const;
  void setEstablecimiento(const std::string& establecimiento);

  std::string toString() const;
};

