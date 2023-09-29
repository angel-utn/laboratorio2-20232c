#pragma once
#include "Movimiento.h"
#include "MovimientoArchivo.h"

class MovimientoManager{
  public:
  void Cargar();
  void Editar();
  void Eliminar();
  void Mostrar(Movimiento reg);
  void MostrarCantidadRegistros();
  void ListarTodos();
  int Buscar(int IDMovimiento);
  void ListarxID();
  void ListarxTipoMovimiento(int IDTipoMovimiento);

  private:
  MovimientoArchivo _archivo = MovimientoArchivo("movimientos.dat");
};