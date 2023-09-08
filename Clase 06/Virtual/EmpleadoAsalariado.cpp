#include "EmpleadoAsalariado.h"

float EmpleadoAsalariado::getHonorarios() const {
  return _salarioFijo;
}

void EmpleadoAsalariado::setSalarioFijo(float salarioFijo) {
  _salarioFijo = salarioFijo;
}

std::string EmpleadoAsalariado::toString() const{
  return Empleado::toString() + " " + std::to_string(_salarioFijo);
}