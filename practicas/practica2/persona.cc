#include <iostream>
#include <string>
#include "persona.h"
using namespace std;


Persona::Persona(string DNI, string Nombre, string Apellidos, int Edad, string Direccion, string Localidad, string Provincia, string Pais){
DNI_=DNI;
Nombre_=Nombre;
Apellidos_=Apellidos;
Edad_=Edad;
Direccion_=Direccion;
Localidad_=Localidad;
Provincia_=Provincia;
Pais_=Pais;
}

bool Persona::mayor(){
  if(Edad_>17){
    return true;
  }else{
    return false;
  }
}

string Persona::getApellidosyNombre(){
  string aux=Apellidos_ +", "+Nombre_;
  return aux;
}

bool Persona::setEdad(int aux){
  if(aux>=0){
    Edad_=aux;
    return true;
  }else{
    return false;
  }
}
/*Persona::Persona()
{
  DNI="";
  Nombre="";
  Apellidos="";
  Edad=0;
  Direccion="";
  Localidad="";
  Provincia="";
  Pais="";
  NYA="";
}


int main() {
  Persona p;
  int opcion=0;
  std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
  std::cout<<"|----------------Introduce 1 para añadir el nombre------------------|"<<std::endl;
  std::cout<<"|----------------Introduce 2 para añadir el apellidos---------------|"<<std::endl;
  std::cout<<"|----------------Introduce 3 para añadir la edad--------------------|"<<std::endl;
  std::cout<<"|----------------Introduce 4 para añadir la dirección---------------|"<<std::endl;
  std::cout<<"|----------------Introduce 5 para añadir la localidad---------------|"<<std::endl;
  std::cout<<"|----------------Introduce 6 para añadir la provincia---------------|"<<std::endl;
  std::cout<<"|----------------Introduce 7 para añadir el país--------------------|"<<std::endl;
  std::cout<<"|----------------Introduce 8 para juntar el nombre y apellidos------|"<<std::endl;
  std::cout<<"|----------------Introduce 10 para sair del programa----------------|"<<std::endl;
  std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
  std::cin>>opcion;
  while(opcion!=9){
    switch(opcion){
      case 1:
        std::cout<<"Introduce un nombre"<<std::endl;
        p.setNombre();
        p.getNombre();
        break;
        case 2:
        std::cout<<"Introduce los apellidos"<<std::endl;
        p.setApellidos();
        p.getApellidos();
        break;
        case 3:
        std::cout<<"Introduce la edad"<<std::endl;
        p.setEdad();
        p.getEdad();
        break;
        case 4:
        std::cout<<"Introduce una direccion"<<std::endl;
        p.setDireccion();
        p.getDireccion();
        break;
        case 5:
        std::cout<<"Introduce una localidad"<<std::endl;
        p.setLocalidad();
        p.getLocalidad();
        break;
        case 6:
        std::cout<<"Introduce una provincia"<<std::endl;
        p.setProvincia();
        p.getProvincia();
        break;
        case 7:
        std::cout<<"Introduce un país"<<std::endl;
        p.setPais();
        p.getPais();
        break;
        case 8:
        p.getApellidosYNombre();
        break;
    }
    std::cout<<"Introduzca otra opcion"<<std::endl;
    std::cin>>opcion;
  }


  return 0;
}*/
