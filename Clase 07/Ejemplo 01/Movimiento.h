#pragma once
#include "Fecha.h"

class Movimiento{
  private:
  int _id;
  Fecha _fecha;
  float _importe;
  char _descripcion[80];
  int _tipoMovimiento; // 1 - Ingreso, 2 - Salida
  char _referencia[100];

public:
  int getId() const;
  void setId(int id);

  Fecha getFecha() const;
  void setFecha(const Fecha &fecha);

  float getImporte() const;
  void setImporte(float importe);

  std::string getDescripcion() const;
  void setDescripcion(std::string descripcion);

  int getIDTipoMovimiento() const;
  void setIDTipoMovimiento(int IDTipoMovimiento);

  std::string getReferencia() const;
  void setReferencia(std::string referencia);

  std::string getTipoMovimiento() const;
};
