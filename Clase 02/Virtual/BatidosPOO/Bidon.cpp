#include "Bidon.h"

void Bidon::setCapacidadMaxima(int cantidad) {
  if (cantidad >= 0) {
    _capacidadMaxima = cantidad;
  }
  else {
    _capacidadMaxima = 0;
  }
}

Bidon::Bidon() {
  _capacidadMaxima = 0;
  _capacidadActual = 0;
  _sabor = "SIN SABOR";
}

Bidon::Bidon(int cantidad, std::string sabor) {
  setCapacidadMaxima(cantidad);
  _sabor = sabor;
  _capacidadActual = 0;
}

std::string Bidon::getSabor() {
  return _sabor;
}

int Bidon::getCapacidad() {
  return _capacidadActual;
}

void Bidon::cargar() {
  _capacidadActual = _capacidadMaxima;
}

void Bidon::servir(Vaso vaso) {
  _capacidadActual -= vaso.getCapacidad();
}