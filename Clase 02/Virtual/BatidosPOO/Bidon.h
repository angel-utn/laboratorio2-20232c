#pragma once
#include "Vaso.h"
#include <string>
class Bidon
{
  // atributos o propiedades
private:
  int _capacidadMaxima;
  int _capacidadActual;
  std::string _sabor;

  void setCapacidadMaxima(int cantidad);

public:
  // constructor por defecto
  Bidon();
  Bidon(int cantidad, std::string sabor);
  
  int getCapacidad();
  std::string getSabor();
  void cargar();
  void servir(Vaso vaso);
};

