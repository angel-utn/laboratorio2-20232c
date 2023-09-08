#pragma once
#include <string>
#include "EmpleadoAsalariado.h"
#include "EmpleadoPorHora.h"
#include "EmpleadoAsociado.h"

class ProgramaUno{
  private:
    std::string _titulo;
    EmpleadoAsalariado crearEmpleadoAsalariado() const;
    EmpleadoPorHora crearEmpleadoPorHora() const;
    EmpleadoAsociado crearEmpleadoAsociado() const;

  public:
    void Ejecutar();

    std::string getTitulo() const;
    void setTitulo(const std::string &titulo);
};
