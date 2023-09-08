#include "Empleado.h"

std::string Empleado::getApellido() const {
  return _apellido;
}

 void Empleado::setApellido(const std::string &apellido) {
  _apellido = apellido;
}

 std::string Empleado::getNombre() const {
  return _nombre;
}

 void Empleado::setNombre(const std::string &nombre) {
  _nombre = nombre;
}

 int Empleado::getLegajo() const {
  return _legajo;
}

 void Empleado::setLegajo(int legajo) {
  _legajo = legajo;
}

 std::string Empleado::getMail() const {
  return _mail;
}

 void Empleado::setMail(const std::string &mail) {
  _mail = mail;
}

std::string Empleado::toString() const{
  return _apellido + " " + _nombre + " " + _mail + " " + std::to_string(_legajo);
}