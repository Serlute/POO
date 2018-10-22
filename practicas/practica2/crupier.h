#include <iostream>
#include <string>
using namespace std;

class Crupier:Persona{
private:
  string Codigo_;
public:
  Crupier(string DNI, string Codigo, string Nombre="", string Apellidos="", int Edad=0, string Direccion="", string Localidad="", string Provincia="", string Pais=""):Persona(string DNI, string Nombre, string Apellidos, int Edad, string Direccion, string Localidad, string Provincia, string Pais){Codigo_=Codigo}
  inline string getCodigo()const{return codigo_;};
  inline void setCodigo(string aux){codigo_=aux;};
}
