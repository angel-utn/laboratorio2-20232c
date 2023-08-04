#include <iostream>
using namespace std;
#include "funciones.h"

int main(){

    int vCandidatos[7] = {};
    int vMunicipios[280] = {};

    cargarDatos(vCandidatos, vMunicipios);
    puntoA(vCandidatos, 7);
    puntoB(vMunicipios, 280); 

    return 0;
}