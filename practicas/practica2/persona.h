#include <iostream>
#include <string>
using namespace std;

class Persona{
private:
string Nombre_;
string Apellidos_;
string DNI_;
int Edad_;
string Direccion_;
string Localidad_;
string Provincia_;
string Pais_;
string NYA_;
public:
Persona(string DNI, string Nombre="", string Apellidos="", int Edad=0, string Direccion="", string Localidad="", string Provincia="", string Pais="");
inline string getDNI()const{return DNI_;};
inline string getNombre()const{return Nombre_;};
inline string getApellidos()const{return Apellidos_;};
inline int getEdad()const{return Edad_;};
inline string getDireccion()const{return Direccion_;};
inline string getLocalidad()const{return Localidad_;};
inline string getProvincia()const{return Provincia_;};
inline string getPais()const{return Pais_;};

inline void setDNI(string aux){DNI_=aux;};
inline void setNombre(string aux){Nombre_=aux;};
inline void setApellidos(string aux){Apellidos_=aux;};
inline void setDireccion(string aux){Direccion_=aux;};
inline void setLocalidad(string aux){Localidad_=aux;};
inline void setProvincia(string aux){Provincia_=aux;};
inline void setPais(string aux){Pais_=aux;};

bool setEdad(int aux);
bool  mayor();

string getApellidosyNombre();
};
/*string Persona::getApellidosYNombre()
{
  NYA=Apellidos+", "+Nombre;
cout<<NYA<<endl;
  return NYA;
}*/
