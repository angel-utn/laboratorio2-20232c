#include "EmpleadoAsociado.h"

int EmpleadoAsociado::getAnioIngreso() const {
  return _anioIngreso;
}

void EmpleadoAsociado::setAnioIngreso(int anioIngreso) {
  _anioIngreso = anioIngreso;
}

int EmpleadoAsociado::getAntiguedad() const {
  return 2023 - _anioIngreso;
}

std::string EmpleadoAsociado::toString() const{
  return EmpleadoAsalariado::toString() + " " + std::to_string(_anioIngreso);
}

float EmpleadoAsociado::getHonorarios() const{
  int antiguedad = getAntiguedad();
  float bonificacion = 1;

  if (antiguedad > 20){
    bonificacion = 1.5;
  }
  else if (antiguedad > 15){
    bonificacion = 1.2;
  }
  else if (antiguedad > 5){
    bonificacion = 1.1;
  }

  return _salarioFijo * bonificacion;
}