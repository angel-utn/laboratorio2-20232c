#pragma once
#include "EmpleadoAsalariado.h"

class EmpleadoAsociado:public EmpleadoAsalariado{
  private:
    int _anioIngreso;
    int getAntiguedad() const;

  public:
    
    int getAnioIngreso() const;
    void setAnioIngreso(int anioIngreso);

    float getHonorarios() const;
    std::string toString() const;  

};
