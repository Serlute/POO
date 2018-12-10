#include "jugador.h"

void Jugador::setApuestas(){

char tipo[10], valor[10], cantidad[10];
Apuesta a;
Apuestas_.clear(); //Borra todos los elementos de la lista

string nomfich= getDNI() + ".txt";
ifstream entrada (nomfich.c_str());
if (entrada.is_open()){

  while(entrada.getline(tipo,256,',')){
    entrada.getline(valor, 256, ',');
    entrada.getline(cantidad, 256,'\n');
    a.tipo=atoi(tipo);
    a.valor=valor;
    a.cantidad=atoi(cantidad);
    Apuestas_.push_back(a);
  }
  entrada.close();
}else{
std::cout<<"Fichero no está abierto"<<std::endl;
exit(-1);
}
}
