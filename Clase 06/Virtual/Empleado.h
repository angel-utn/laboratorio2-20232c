#pragma once
#include <string>

class Empleado{
  protected:
    std::string _apellido;
    std::string _nombre;
    std::string _mail;
    int _legajo;

  public:
    std::string getApellido() const;
    void setApellido(const std::string &apellido);

    std::string getNombre() const;
    void setNombre(const std::string &nombre);

    std::string getMail() const;
    void setMail(const std::string &mail);

    int getLegajo() const;
    void setLegajo(int legajo);

    std::string toString() const;
};


