#include "MovimientoArchivo.h"
#include <cstdio>

MovimientoArchivo::MovimientoArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool MovimientoArchivo::Guardar(Movimiento reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Movimiento), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool MovimientoArchivo::Guardar(Movimiento reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Movimiento), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Movimiento), 1, p);
  fclose(p);
  return pudoEscribir;
}

int MovimientoArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(Movimiento);
}

Movimiento MovimientoArchivo::Leer(int nroRegistro){
  Movimiento reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(Movimiento), SEEK_SET);
  fread(&reg, sizeof(Movimiento), 1, p);
  fclose(p);
  return reg;
}

/**
 * Busca el IDMovimiento en el archivo de Movimientos.
 * Si lo encuentra devuelve la posición del archivo del registro.
 * Si no lo encuentra devuelve -1
*/
int MovimientoArchivo::Buscar(int IDMovimiento){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Movimiento reg;
  while(fread(&reg, sizeof(Movimiento), 1, p)){
    if(reg.getId() == IDMovimiento){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}
