#include "ingreso.h"

void Ingreso::setTipoIngreso(int tipoIngreso){
    _tipoIngreso = tipoIngreso;
}
int Ingreso::getTipoIngreso(){
    return _tipoIngreso;
}
std::string Ingreso::getNombreTipoIngreso(){
    std::string valorADevolver = (_tipoIngreso == 1 ? "Habitual" : "Extraordinario" );
    return valorADevolver;
}
std::string Ingreso::toString(){
    std::string aux;
    aux = Transaccion::toString();
    aux += ","+getNombreTipoIngreso();
    return aux;
}