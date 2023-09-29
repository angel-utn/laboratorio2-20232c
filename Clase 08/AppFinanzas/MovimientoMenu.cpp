#include "MovimientoMenu.h"
#include <iostream>
using namespace std;

void MovimientoMenu::Mostrar(){
  while(true){
    cout << "*******************************" << endl;
    cout << "********* MOVIMIENTOS *********" << endl;
    cout << "*******************************" << endl;
    cout << "1 - Nuevo movimiento" << endl;
    cout << "2 - Editar movimiento" << endl;
    cout << "3 - Eliminar movimiento" << endl;
    cout << "4 - Listar movimiento x ID" << endl;
    cout << "5 - Listar movimientos" << endl;
    cout << "6 - Cantidad de registros" << endl;
    cout << "*******************************" << endl;
    cout << "0 - Volver" << endl;

    int opcion;
    cin >> opcion;
    switch(opcion){
      case 1:
        _manager.Cargar();
      break;
      case 2:
        _manager.Editar();
      break;
      case 3:
        _manager.Eliminar();
      break;
      case 4:
        _manager.ListarxID();
      break;
      case 5:
        _manager.ListarTodos();
      break;
      case 6:
        _manager.MostrarCantidadRegistros();
      break;
      case 90:
        _manager.ListarxTipoMovimiento(2);
        cout << endl;
        _manager.ListarxTipoMovimiento(1);
      break;
      case 0:
        return;
      break;
    }
  }


}