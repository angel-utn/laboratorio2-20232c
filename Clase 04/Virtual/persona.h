#pragma once
#include <string>

class Persona{
    public:
        std::string getApellidos();
        std::string getNombres();
        std::string getApellidosyNombres();

        void setApellidos(std::string apellidos);
        void setNombres(std::string nombres);

        Persona();
        Persona(std::string apellidos, std::string nombres);

    private:
        std::string _apellidos, _nombres;

};