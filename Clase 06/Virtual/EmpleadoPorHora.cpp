#include "EmpleadoPorHora.h"

int EmpleadoPorHora::getCantidadHorasMes() const {
  return _cantidadHorasMes;
}

void EmpleadoPorHora::setCantidadHorasMes(int cantidadHorasMes) {
  _cantidadHorasMes = cantidadHorasMes;
}

float EmpleadoPorHora::getValorHora() const {
  return _valorHora;
}

void EmpleadoPorHora::setValorHora(float valorHora) {
  _valorHora = valorHora;
}

std::string EmpleadoPorHora::toString() const{
  return Empleado::toString() + " " + std::to_string(_cantidadHorasMes) + " " + std::to_string(_valorHora);
}

float EmpleadoPorHora::getHonorarios() const{
  return _valorHora * _cantidadHorasMes;
}