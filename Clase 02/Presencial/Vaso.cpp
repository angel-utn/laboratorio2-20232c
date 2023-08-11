#include "Vaso.h"

int Vaso::getCodigoTamanio(){
    return _codTamanio; 
}
float Vaso::getCapacidad(){
    return _capacidad;
}
void Vaso::setCodigoTamanio(int codigoTamanio){
    _codTamanio = codigoTamanio;
}
void Vaso::setCapacidad(float capacidad){
    _capacidad = capacidad;
}