#pragma once

#include "Empleado.h"

class EmpleadoAsalariado:public Empleado{

  protected:
    float _salarioFijo;

  public:
    
    float getHonorarios() const;
    void setSalarioFijo(float salarioFijo);
    std::string toString() const;

};

