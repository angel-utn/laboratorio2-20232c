#include <iostream>
using namespace std;
#include "reunion.h"
#include <vector> // Clase vector de STL C++
#include <map>

int main(){

  Persona gentes[7];
  gentes[0] = Persona("Lara", "Brian");
  gentes[1] = Persona("Simon", "Angel");
  gentes[2] = Persona("Varela", "Mariano");
  gentes[3] = Persona("Tapia", "Ariel");
  gentes[4] = Persona("Carbonari", "Veronica");
  gentes[5] = Persona("Kloster", "Daniel");
  gentes[6] = Persona("Wenner", "Maxi");

  Reunion reunion(7);
  reunion.setDuracion(90);
  reunion.setFechaHorario(FechaHorario(1, 10, 2023, 0, 0, 19));
  reunion.setTema("Programacion en C++");
  reunion.setLugar("Buenos Aires");
  
  for(int i=0; i<7; i++){
    reunion.setIntegrante(gentes[i], i);
  }
  cout << endl;
  // Ejemplo de for each
  for(Persona p:gentes){
    cout << p.getApellidosyNombres() << endl;
  }

  // Ejemplo de vector dinamico con biblioteca estandar
  std::vector <Persona> personas;
  Persona nueva("Persona", "Nueva");

  personas.push_back(gentes[0]);
  personas.push_back(gentes[1]);
  personas.push_back(nueva);
  
  cout << endl;
  for(Persona persona:personas){
    cout << persona.getApellidosyNombres() << endl;
  }

  cout << endl;
  for(int i=0; i<personas.size(); i++){
    cout << personas.at(i).getApellidosyNombres() << endl;
    cout << personas[i].getApellidosyNombres() << endl;
  }

  return 0;
}