#include <iostream>
using namespace std;
#include "ingreso.h"
#include "gasto.h"

int main(){
    Ingreso ingresos[5];
    Gasto gastos[5];
    int cantIngresos = 0, cantGastos = 0;
    
    Ingreso in;
    Gasto ga;
    in.setID(100);
    in.setDescripcion("Sueldo UTN");
    in.setImporte(12);
    in.setTipoIngreso(1);
    cout << in.toString();
    cout << endl;

    ga.setID(12394);
    ga.setDescripcion("Cafe con medialunas");
    ga.setImporte(900);
    ga.setEstablecimiento("Buffet de la facu");
    cout << ga.toString();

    return 0;
}