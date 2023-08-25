#pragma once
#include "fechahorario.h"
#include "persona.h"
#include <vector>

class Reunion{

  public:
    FechaHorario getFechaHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();
    int getCantidadIntegrantes();
    Persona getIntegrante(int indice);
    std::string toString();
    //std::vector<Persona> getIntegrantes();

    void setFechaHorario(FechaHorario fechaHorario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);
    void setIntegrante(Persona integrante, int indice);

    Reunion(int cantidadIntegrantes);
    ~Reunion();
    
  private:
    FechaHorario _fechaHorario;
    std::string _lugar, _tema;
    int _duracion, _cantidadIntegrantes;
    Persona *_integrantes;
};