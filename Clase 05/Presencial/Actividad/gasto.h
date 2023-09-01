#pragma once
#include <string>
#include "transaccion.h"

class Gasto:public Transaccion{
    
    public:
    std::string getEstablecimiento();
    void setEstablecimiento(std::string establecimiento);
    
    private:
    std::string _establecimiento;

};