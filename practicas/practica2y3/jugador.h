#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <fstream>
#include <list>
#include <cstdlib>
#include <string>
#include "persona.h"
using namespace std;

struct Apuesta{
  int tipo;
  string valor;
  int cantidad;
};

class Jugador: public Persona{
private:
  int Dinero_;
  string Codigo_;
  list <Apuesta> Apuestas_;

public:
  Jugador(string DNI, string Codigo, string Nombre="", string Apellidos="", int Edad=0, string Direccion="", string Localidad="", string Provincia="", string Pais=""):Persona(DNI, Nombre, Apellidos, Edad, Direccion, Localidad, Provincia, Pais){
    Codigo_=Codigo;
    Dinero_=1000;
  };

  //Set y get de codigo
  inline string getCodigo()const{return Codigo_;};
  inline void setCodigo(string aux){Codigo_=aux;};

  //Set y get de dinero
  inline int getDinero()const{return Dinero_;};
  inline void setDinero(int aux){Dinero_=aux;};

  //get lista de apuestas
  inline list <Apuesta> getApuestas()const{return Apuestas_;};
  void setApuestas();

  };

#endif
