#pragma once
#include <string>
#include "fecha.h"

class Transaccion{

    public:
    int getID();
    float getImporte();
    Fecha getFecha();
    std::string getDescripcion();
    bool getEstado();
    void setID(int id);
    void setImporte(float importe);
    void setFecha(Fecha fecha);
    void setDescripcion(std::string descripcion);
    void setEstado(bool estado);
    std::string toString();
    Transaccion();

    protected:
    int _id;
    float _importe;
    Fecha _fecha;
    std::string _descripcion;
    bool _estado;

};