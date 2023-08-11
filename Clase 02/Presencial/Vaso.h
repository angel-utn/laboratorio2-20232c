#pragma once
class Vaso{
    private:
        int _codTamanio;
        float _capacidad;
    public:
        int getCodigoTamanio();
        float getCapacidad();
        void setCodigoTamanio(int codigoTamanio);
        void setCapacidad(float capacidad);
};