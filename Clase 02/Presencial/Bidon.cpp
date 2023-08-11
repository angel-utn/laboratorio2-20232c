#include "Bidon.h"

Bidon::Bidon(){
    _sabor = "Sin asignar";
    _capacidad = 5;
    _cantidad = 0;
}

Bidon::Bidon(string nombreSabor, float capacidad){
    _sabor = nombreSabor;
    _capacidad = capacidad;
    _cantidad = 0;
}

void Bidon::setSabor(string nombreSabor){
    _sabor = nombreSabor;
}

void Bidon::setCapacidad(float capacidadTotal){
    if (capacidadTotal > 0){
        _capacidad = capacidadTotal;
    }
    else{
        _capacidad = 0;
    }
}

float Bidon::getCapacidad(){
    return _capacidad;
}

float Bidon::getCantidad(){
    return _cantidad;
}

string Bidon::getSabor(){
    return _sabor;
}

void Bidon::llenar(float cantidadALlenar){
    if (cantidadALlenar + _cantidad > _capacidad){
        _cantidad = _capacidad;
    }
    else{
        _cantidad += cantidadALlenar;
    }
}
void Bidon::vaciar(){
    _cantidad = 0;
}
void Bidon::servir(float cantidadAServir){
    if (_cantidad - cantidadAServir < 0){
        _cantidad = 0;
    }
    else{
        _cantidad-=cantidadAServir;
    }
}

void Bidon::servir(Vaso vaso){
    servir(vaso.getCapacidad());
}