#pragma once
#include <string>
using namespace std;
#include "Vaso.h"

class Bidon{
    private:
    string _sabor;
    float _capacidad;
    float _cantidad;

    public:
    Bidon();
    Bidon(string nombreSabor, float capacidad);
    string getSabor();
    float getCapacidad();
    float getCantidad();
    
    void setSabor(string nombreSabor);
    void setCapacidad(float capacidad);

    void llenar(float cantidadALlenar);
    void vaciar();
    void servir(float cantidadAServir);
    void servir(Vaso vaso);
};