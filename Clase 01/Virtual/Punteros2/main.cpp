#include <iostream>
using namespace std;

int main(){
    int vector[5] = {10, 20, 30, 40, 50};
    int *puntero;

    puntero = vector;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    
    cout << endl;

    cout << *(vector+0) << endl;
    cout << *(vector+1) << endl;
    cout << *(vector+2) << endl;
    cout << *(vector+3) << endl;
    cout << *(vector+4) << endl;

    cout << endl;

    cout << *(&vector[0]) << endl;
    cout << *(&vector[1]) << endl;
    cout << *(&vector[2]) << endl;
    cout << *(&vector[3]) << endl;
    cout << *(&vector[4]) << endl;

    cout << endl;

    cout << vector[0] << endl;
    cout << vector[1] << endl;
    cout << vector[2] << endl;
    cout << vector[3] << endl;
    cout << vector[4] << endl;

    return 0;
}