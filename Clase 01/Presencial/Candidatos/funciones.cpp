#include <iostream>
using namespace std;

#include "funciones.h"

void cargarDatos(int vVotos[],int vMunicipios[]){
	int municipio, candidato, votos;
	
	cout << "Ingrese municipio: ";
	cin >> municipio;
	
	while(municipio > 0){
		cout << "Ingrese candidato: ";
		cin >> candidato;
		
		cout << "Ingrese votos: ";
		cin >> votos;
		
		vVotos[candidato - 1] += votos;
		vMunicipios[municipio - 1] += votos;
		
		///   ----
		
		cout << "Ingrese municipio: ";
		cin >> municipio;
		
		
	}
}
	
	
	
	
int maximo(int vec[], int tam){
	int max = 0;
	for(int i=1; i<tam-1; i++){
		if(vec[i] > vec[max]){
			max = i;
		}
	}
	
	return max;
}
	
int cantidadMayor(int vec[], int tam, int valor){
	int cant = 0;
	for(int i=0; i<tam-1; i++){
		if(vec[i] > valor){
			cant ++;
		}
	}
	
	return cant;
}
	
	
	
	
	
	
	
	
	
	
	
	
