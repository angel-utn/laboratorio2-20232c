#include <iostream>
using namespace std;
#include "fecha.h"

int main(){
    Fecha f;
    Fecha f2;
    int dia, mes, anio;

    cout << "Dia:";
    cin >> dia;
    cout << "Mes:";
    cin >> mes;
    cout << "Anio:";
    cin >> anio;

    f2.setDia(dia);
    f2.setMes(mes);
    f2.setAnio(anio);
    
    cout << f.toString() << endl;
    cout << f2.toString() << endl;
    
    return 0;
}