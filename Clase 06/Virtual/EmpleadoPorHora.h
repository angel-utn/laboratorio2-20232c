#pragma once

#include "Empleado.h"

class EmpleadoPorHora:public Empleado{
  private:
    int _cantidadHorasMes;
    float _valorHora;

  public:
    
    int getCantidadHorasMes() const;
    void setCantidadHorasMes(int cantidadHorasMes);

    float getValorHora() const;
    void setValorHora(float valorHora);
 
    std::string toString() const;
    float getHonorarios() const;

};