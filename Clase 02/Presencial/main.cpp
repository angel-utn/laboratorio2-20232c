#include <iostream>
using namespace std;
#include "Bidon.h"
#include "Vaso.h"

int main(){
    Bidon *ptr = nullptr;
    int cantidadBidones;
    cin >> cantidadBidones;

    ptr = new Bidon[cantidadBidones];
    if (ptr != nullptr){
        
    }



    Bidon b1, b2("Anana", 90);
    cout << b1.getSabor() << " " << b1.getCapacidad() << " " << b1.getCantidad() << endl;
    cout << b2.getSabor() << " " << b2.getCapacidad() << " " << b2.getCantidad() << endl;

    Vaso v;
    v.setCodigoTamanio(1);
    v.setCapacidad(1);

    b1.setCapacidad(5);
    b1.llenar(5);
    b1.setSabor("Banana");


    b1.servir(3);
    cout << b1.getSabor() << " " << b1.getCapacidad() << " " << b1.getCantidad() << endl;
    b1.servir(v);
    cout << b1.getSabor() << " " << b1.getCapacidad() << " " << b1.getCantidad() << endl;
    
    b2.setCapacidad(15);
    b2.llenar(1);
    b2.setSabor("Anana");
    cout << b2.getSabor() << " " << b2.getCapacidad() << " " << b2.getCantidad() << endl;
    b2.llenar(30);
    cout << b2.getSabor() << " " << b2.getCapacidad() << " " << b2.getCantidad() << endl;

    return 0;
}