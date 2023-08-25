#include "reunion.h"

FechaHorario Reunion::getFechaHorario(){
  return _fechaHorario;
}
std::string Reunion::getLugar(){
  return _lugar;
}
std::string Reunion::getTema(){
  return _tema;
}
int Reunion::getDuracion(){
  return _duracion;
}
int Reunion::getCantidadIntegrantes(){
  return _cantidadIntegrantes;
}
Persona Reunion::getIntegrante(int indice){
  /*if (indice >= 0 && indice <= _cantidadIntegrantes-1){
    return _integrantes[indice];
  }
  else{
    return _integrantes[0];
  }*/

  return _integrantes[indice];
}
// Si les interesa vean en el libro la parte de STL C++
// /////////////////////////////////////////////////////
//
// std::vector<Persona> Reunion::getIntegrantes(){
//   std::vector<Persona> aux;
//   for(int i=0; i<_cantidadIntegrantes; i++){
//     aux.push_back(_integrantes[i]);
//   }
//   return aux;
// }


std::string Reunion::toString(){
  std::string aux = _fechaHorario.toString();
  aux += "," + getLugar();
  aux += "," + getTema();
  aux += "," + std::to_string(_duracion);
  //TODO: Concatenar los integrantes
  for(int i=0; i<_cantidadIntegrantes; i++){
    aux += "," + _integrantes[i].getApellidos();
    aux += "," + _integrantes[i].getNombres();
  }
  return aux;
}
void Reunion::setFechaHorario(FechaHorario fechaHorario){
  _fechaHorario = fechaHorario;
}
void Reunion::setLugar(std::string lugar){
  _lugar = lugar;
}
void Reunion::setTema(std::string tema){
  _tema = tema;
}
void Reunion::setDuracion(int duracion){
  _duracion = duracion;
}
void Reunion::setIntegrante(Persona integrante, int indice){
  _integrantes[indice] = integrante;
}

Reunion::Reunion(int cantidadIntegrantes){
  if (cantidadIntegrantes > 0){
    _integrantes = nullptr;
    _integrantes = new Persona[cantidadIntegrantes];
    if (_integrantes == nullptr){
      _cantidadIntegrantes = 0;
    }
    else{
      _cantidadIntegrantes = cantidadIntegrantes;
    }
  }
  else{
    _cantidadIntegrantes = 0;
  }

  _duracion = 0;
  _tema = "";
  _lugar = "";

}
Reunion::~Reunion(){
  if(_cantidadIntegrantes > 0){
    delete []_integrantes;
  }
}