#pragma once
class Cadena
{
public:
  const char* getTexto();
  void setTexto(const char*);
  void mostrar();

private:
  char _texto[50];
};

