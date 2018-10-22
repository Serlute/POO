#include <iostream>
#include <cstdlib> //Viene declarado RAND_MAX,srand,rand
#include <ctime>
#include "dados.h"
int main(){
Dados d;
int opcion;
int x;
int y;
int vector1[5];
int vector2[5];

std::cout<<"|-----------Introduzca 1 para lanzar los dados----------------------|"<< std::endl;
std::cout<<"|-----------Introduzca 2 para devolver el valor del primer dado-----|"<< std::endl;
std::cout<<"|-----------Introduzca 3 para devolver el valor del segundo dado----|"<< std::endl;
std::cout<<"|-----------Introduzca 4 para cambiar el valor del primer dado------|"<< std::endl;
std::cout<<"|-----------Introduzca 5 para cambiar el valor del segundo dado-----|"<< std::endl;
std::cout<<"|-----------Introduzca 6 para sumar los valores del dado------------|"<< std::endl;
std::cout<<"|-----------Introduzca 7 para ver la diferencia de los dados--------|"<< std::endl;
std::cout<<"|-----------Introduzca 8 para ver la media de los lanzamientos------|"<< std::endl;
std::cout<<"|-----------Introduzca 9 para ver el numero de lanzamientos---------|"<< std::endl;
std::cout<<"|-----------Introduzca 10 para ver el vector de ultimos ------------|"<< std::endl;
std::cout<<"|-----------Introduce 11 para salir---------------------------------|"<< std::endl;
std::cin>>opcion;

while(opcion!=11){

	switch(opcion){
	case 1:
		d.lanzamiento();

	break;

	case 2:

		std::cout<<"El valor del dado 1 es "<<d.getDado1()<<std::endl;


	break ;

	case 3:

		std::cout<<"El valor del dado 2 es "<<d.getDado2()<<std::endl;

	break;

	case 4:
		std::cout<<"Introduzca el numero del dado que quiera (Un dado tiene del 1 al 6).\n";
		std::cin>>x;
		if(d.setDado1(x)==false){
			std::cout<<"El numero no se comprende entre 1-6."<<std::endl;
		}
		else{

			std::cout<<"Correcto.\n";
		}


	break;

	case 5:

		std::cout<<"Introduzca el numero del dado que quiera (Un dado tiene del 1 al 6).\n";
		std::cin>>y;
		if(d.setDado2(y)==false){
			std::cout<<"El numero no se comprende entre 1-6."<<std::endl;
		}
		else{

			std::cout<<"Correcto.\n";
		}


	break;

	case 6:
		std::cout<<"El valor de la suma de los dados es "<<d.getSuma()<<std::endl;


	break;

	case 7:

		std::cout<<"El valor de la diferencia de los dados es "<<d.getDiferencia()<<std::endl;

	break;

	case 8:

		std::cout<<"El valor de la media de los valores del dado 1 es "<<d.getMedia1()<<std::endl;
		std::cout<<"El valor de la media de los valores del dado 2 es "<<d.getMedia2()<<std::endl;

	break;
	case 9:

		std::cout<<"Se ha realizado "<<d.getLanzamientos1()<<" lanzamientos del dado 1."<<std::endl;
		std::cout<<"Se ha realizado "<<d.getLanzamientos2()<<" lanzamientos del dado 2."<<std::endl;

	break;
	case 10:
		d.getUltimos1(vector1);
		d.getUltimos2(vector2);
		for(int i = 0 ; i < 5; i ++){
			std::cout<<"DADO 1 v[ "<<i<<" ] = "<<vector1[i]<<std::endl;
		}
		for(int j = 0 ; j < 5; j ++){
			std::cout<<"DADO 2 v[ "<<j<<" ] = "<<vector2[j]<<std::endl;
		}

	break;


}


	std::cout<<"Introduzca otra opcion"<<std::endl;
	std::cin>>opcion;
}


	return 0;
}
