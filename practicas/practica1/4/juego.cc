#include <iostream>
#include "dados.h"

int main(){

	Dados d; //se ejecuta el constructor
	int x;
	int y;
	std::cout<<"Se han lanzado los dados."<<std::endl;
	d.lanzamiento();
	std::cout<<"Dado 1= "<<d.getDado1()<<std::endl;
	std::cout<<"Dado 2= "<<d.getDado2()<<std::endl;
	std::cout<<"El valor de la suma de los dados es: "<<d.getSuma()<<std::endl;
	std::cout<<"Introduzca el numero del dado que quiera"<<std::endl;
	std::cin>>x;
	std::cin>>y;
	if(d.setDado1(x)==false){
		std::cout<<"El numero no esta entre 1 y 6"<<std::endl;
	}else{
		std::cout<<"Correcto"<<std::endl;
	}
	if(d.setDado2(y)==false){
		std::cout<<"El numero no esta entre 1 y 6."<<std::endl;
	}else{
		std::cout<<"Correcto"<<std::endl;
	}
	std::cout<<"El valor de los dados es: "<<d.getSuma()<<std::endl;
	std::cout<<"El valor de la diferencia es: "<<d.getDiferencia()<<std::endl;

	return 0;
}
