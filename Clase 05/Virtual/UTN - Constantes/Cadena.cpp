#include <iostream>
#include <cstring>

#include "Cadena.h"

const char* Cadena::getTexto()
{
    return _texto;
}

void Cadena::setTexto(const char* texto)
{
  strcpy(_texto, texto);
}

void Cadena::mostrar()
{
  std::cout << _texto << std::endl;
}
