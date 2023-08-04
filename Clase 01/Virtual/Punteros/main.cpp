#include <iostream>
using namespace std;

int main(){
    float peso = 55.5;
    float *punteroPeso;

    punteroPeso = &peso;
    
    cout << " Peso: " << peso << endl;
    cout << "&Peso: " << &peso << endl;
    cout << " punteroPeso: " << punteroPeso << endl;
    cout << "*punteroPeso: " << *punteroPeso << endl;
    cout << "&punteroPeso: " << &punteroPeso << endl;

    *punteroPeso = 77;
    cout << " Peso: " << peso << endl;

    return 0;
}