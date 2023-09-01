#pragma once
#include <string>
#include "Fecha.h"

class Transaccion
{

private:
  int _idTransaccion;
  std::string _descripcion;
  Fecha _fecha;
  int _idCategoria;
  float _monto;
  bool _estado;

public:
  Transaccion();
  Transaccion(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, float monto, bool estado);
  int getIdTransaccion() const;
  void setIdTransaccion(int idTransaccion);

  std::string getDescripcion() const;
  void setDescripcion(const std::string& descripcion);

  Fecha getFecha() const;
  void setFecha(const Fecha& fecha);

  int getIdCategoria() const;
  void setIdCategoria(int idCategoria);

  float getMonto() const;
  void setMonto(float monto);

  bool getEstado() const;
  void setEstado(bool estado);

  std::string toString() const;
};

