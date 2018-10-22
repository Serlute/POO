#include <iostream>
#include <cstdlib> //son funciones de C, por eso lleva el c al empezar
#include <ctime>

int main(){
	int aleatorio, i;
	srand (time(NULL)); //inicializa la semilla aleatoria
	aleatorio=rand()%10 + 1; //da a la variable un valor random entre 1 y 10
	do{
		std::cout<<"Introduce un número entre 1 y 10\n";
		std::cin>>i;
		if(aleatorio<i){
			std::cout<<"El número es menor.\n";
			}else{
				if(aleatorio>i){
					std::cout<<"El número es mayor.\n";
				}
		}
	}while(aleatorio!=i);
	std::cout<<"El número es correcto.\n";
	return 0;
}