#pragma once
#include "transaccion.h"
#include <string>

class Ingreso:public Transaccion{
    public:
        void setTipoIngreso(int tipoIngreso);
        int getTipoIngreso();
        std::string getNombreTipoIngreso();
        std::string toString();
    private:
        int _tipoIngreso;
};