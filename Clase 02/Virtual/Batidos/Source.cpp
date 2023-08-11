#include <iostream>

using namespace std;
/*
BIDON
  cantidad
  sabor

  cargar
  servir

VASO
  cantidad
  

Estado -
Comportamiento -
Identidad - 
*/
int main() {
  string vSabores[3] = {"Banana", "Anana", "Sandia"};
  int vBidones[3] = {200, 35000, 44000};
  int vVasos[3] = { 150, 200, 300 };
  int vCantidad[3] = {};

  int codigoBatido, tipoVaso;

  cout << "Ingrese codigo de batido: ";
  cin >> codigoBatido;

  while (codigoBatido != 0) {
    cout << "Ingrese tipo de vaso: ";
    cin >> tipoVaso;

    /// vBidones[codigoBatido - 1] = vBidones[codigoBatido - 1] - vVasos[tipoVaso - 1];
    if (vBidones[codigoBatido - 1] >= vVasos[tipoVaso - 1]) {
      vBidones[codigoBatido - 1] -= vVasos[tipoVaso - 1];
      vCantidad[codigoBatido - 1]++;
    }
    else{
      cout << "No te puedo servir del sabor " << vSabores[codigoBatido - 1] << " ya que quedan "<< vBidones[codigoBatido-1]<<" mililitros"<< endl;
    }


    cout << "Ingrese codigo de batido: ";
    cin >> codigoBatido;
  }

  for (int i = 0; i < 3; i++) {
    cout << "Bidon de " << vSabores[i] << ": " << vBidones[i]/1000.0f << " litros" << endl;
    cout << "Se vendieron: " << vCantidad[i] << endl;
  }

  return 0;
}