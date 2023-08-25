#include "persona.h"

std::string Persona::getApellidos(){
    return _apellidos;
}
std::string Persona::getNombres(){
    return _nombres;
}
std::string Persona::getApellidosyNombres(){
    if (_apellidos.length() == 0 && _nombres.length() == 0)
        return "";
    return _apellidos + ", " + _nombres;
}
void Persona::setApellidos(std::string apellidos){
    _apellidos = apellidos;
}
void Persona::setNombres(std::string nombres){
    _nombres = nombres;
}
Persona::Persona(){
    _apellidos = "";
    _nombres = "";
}
Persona::Persona(std::string apellidos, std::string nombres){
    _apellidos = apellidos;
    _nombres = nombres;
}