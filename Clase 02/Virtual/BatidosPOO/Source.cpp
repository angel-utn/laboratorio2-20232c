#include <iostream>
#include "Bidon.h"

using namespace std;


int main() {
  Bidon b(20000, "BANANA"), a(35000, "ANANA"), c(44000, "SANDIA");

  Vaso vVasos[3] = {Vaso(150), Vaso(200), Vaso(300)};

  b.cargar();
  cout << "B: " << b.getSabor() << " - " << b.getCapacidad() << endl;
  b.servir(vVasos[0]);
  cout << "B: " << b.getSabor() << " - " << b.getCapacidad() << endl;
  b.servir(vVasos[1]);
  b.servir(vVasos[2]);
  cout << "B: " << b.getSabor() << " - " << b.getCapacidad() << endl;
 

  cout << "A: " << a.getSabor() << " - " << a.getCapacidad() << endl;
  cout << "C: " << c.getSabor() << " - " << c.getCapacidad() << endl;



  
  return 0;
}