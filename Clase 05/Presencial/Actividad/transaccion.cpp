#include "transaccion.h"
using namespace std;

float Transaccion::getImporte(){
    return _importe;
}
int Transaccion::getID(){
    return _id;
}
Fecha Transaccion::getFecha(){
    return _fecha;
}
std::string Transaccion::getDescripcion(){
    return _descripcion;
}
bool Transaccion::getEstado(){
    return _estado;
}
void Transaccion::setID(int id){
    _id = id;
}
void Transaccion::setImporte(float importe){
    _importe = importe;
}
void Transaccion::setFecha(Fecha fecha){
    _fecha = fecha;
}
void Transaccion::setDescripcion(std::string descripcion){
    _descripcion = descripcion;
}
void Transaccion::setEstado(bool estado){
    _estado = estado;
}
std::string Transaccion::toString(){
    std::string aux;
    aux = std::to_string(_id);
    aux += "," + _descripcion;
    aux += "," + std::to_string(_importe);
    aux += "," + _fecha.toString();
    return aux;
}

Transaccion::Transaccion(){
    _estado = true;
    _importe = 0;   
}