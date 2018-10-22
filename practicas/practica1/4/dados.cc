#include <iostream>
#include <ctime>
#include <cstdlib>
#include "dados.h"

Dados::Dados(){
	d1=1;
	d2=1;
	srand(time(NULL));
}

void Dados::lanzamiento(){ //funcion lanazamiento de dados
	d1=1+(rand()%6);
	d2=1+(rand()%6);
}

int Dados::getDado1(){ //devolver valor dado 1
	return d1;
}

int Dados::getDado2(){ //devolver valor dado 2
	return d2;
}

bool Dados::setDado1(int a){ //comprobar existencia del valor del dado 1 al actulizar
	if(a>6||a<1){
		return false;
	}else{
		d1=a;
		return true;
	}
}

bool Dados::setDado2(int b){ //comprobar existencia del valor del dado 1 al actulizar
	if(b>6||b<1){
		return false;
	}else{
		d2=b;
		return true;
	}
}

int Dados::getSuma(){ //sumar valor de los dados
	return d1+d2;
}

int Dados::getDiferencia(){
	if(d1>d2){
		return d1-d2;
	}else{
		return d2-d1;
	}
}
