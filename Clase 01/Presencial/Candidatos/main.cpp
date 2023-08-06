#include<iostream>
using namespace std;
#include "funciones.h"

int main () {
	int vVotos[7], vMunicipios[280]{};
	int max;
	
	cargarDatos(vVotos, vMunicipios);
	
	max = maximo(vVotos, 7);
	
	cout << "El candidato con mas votos fue: " << max + 1 << endl;
	cout << "Con la cantidad de "<< vVotos[max] <<" votos"<< endl;
	
	cout << "La cantidad de municipios son: " << cantidadMayor(vMunicipios, 280, 5000) << endl;
	
	return 0;
}

