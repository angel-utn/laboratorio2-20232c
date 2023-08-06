#include<iostream>
using namespace std;
#include "funciones.h"

int main () {
	int *vVotos, vMunicipios[280]{};
	int max;
	int cantidadCandidatos;
	
	cout << "Ingrese la cantidad de candidatos: ";
	cin >> cantidadCandidatos;
	
	vVotos = new int[cantidadCandidatos]{};
	
	cargarDatos(vVotos, vMunicipios);
	
	max = maximo(vVotos, cantidadCandidatos);
	
	cout << "El candidato con mas votos fue: " << max + 1 << endl;
	cout << "Con la cantidad de "<< vVotos[max] <<" votos"<< endl;
	
	cout << "La cantidad de municipios son: " << cantidadMayor(vMunicipios, 280, 5000) << endl;

	delete [] vVotos;
	
	return 0;
}

