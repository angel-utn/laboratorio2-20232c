#pragma once
#include "Movimiento.h"
#include <string>

class MovimientoArchivo{
  public:
    MovimientoArchivo(std::string nombreArchivo);
    bool Guardar(Movimiento reg);
    bool Guardar(Movimiento reg, int nroRegistro);
    int ContarRegistros();
    Movimiento Leer(int nroRegistro);
    int Buscar(int IDMovimiento);

  private:
    std::string _nombreArchivo;
};