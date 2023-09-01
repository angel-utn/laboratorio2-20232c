#include <iostream>
#include "fecha.h"
using namespace std;
#include <vector>

Fecha cargarFecha(){
    int d, m, a;
    cin >> d >> m >> a;
    Fecha f(d, m, a);
    return f;
}

int main(){
    /// STL - Standard Template Library
    vector<Fecha> listaFechasNacimiento;
    
    char continuar = 'S';
    while (continuar == 'S'){
        cout << endl << "Fecha: ";
        Fecha f = cargarFecha();
        listaFechasNacimiento.push_back(f);
        cout << "Continuar (S/N): ";
        cin >> continuar;
    }

    for(int i=0; i<listaFechasNacimiento.size(); i++){
        cout << listaFechasNacimiento[i].toString() << endl;
    }
    cout << endl;
    // For each
    for(Fecha fecha:listaFechasNacimiento){
        cout << fecha.toString() << endl;
    }


    return 0;
}