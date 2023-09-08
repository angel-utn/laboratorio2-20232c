#pragma once
#include <string>

#include "EmpleadoAsalariado.h"
#include "EmpleadoPorHora.h"
#include "EmpleadoAsociado.h"

class ProgramaDos{
  private:
    std::string _titulo;
    EmpleadoAsalariado crearEmpleadoAsalariado() const;
    EmpleadoPorHora crearEmpleadoPorHora() const;
    EmpleadoAsociado crearEmpleadoAsociado() const;
    
  public:
    void Ejecutar() const;

    std::string getTitulo() const;
    void setTitulo(const std::string &titulo);
};