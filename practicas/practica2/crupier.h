#ifndef CRUPIER_H
#define CRUPIER_H


#include <iostream>
#include <string>
#include "persona.h"

using namespace std;

class Crupier: public Persona{
private:
  string Codigo_;
public:
  Crupier(string DNI, string Codigo, string Nombre="", string Apellidos="", int Edad=0, string Direccion="", string Localidad="", string Provincia="", string Pais=""):Persona(DNI, Nombre, Apellidos, Edad, Direccion, Localidad, Provincia, Pais){Codigo_=Codigo;};
  inline string getCodigo()const{return Codigo_;};
  inline void setCodigo(string aux){Codigo_=aux;};
};


#endif
