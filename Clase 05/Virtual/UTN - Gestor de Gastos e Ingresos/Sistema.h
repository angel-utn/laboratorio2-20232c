#pragma once
#include "Gasto.h"
#include "Ingreso.h"
class Sistema
{
public:
  void cargarTransacciones();
  void mostrarGastos();
  void mostrarMayorIngreso(); 
  void mostrarSaldo(); 
  Gasto cargarGasto();

private:
  Gasto _gastos[5];
  Ingreso _ingresos[5];
};

