//dados.cc
//Cuerpo de los metodos de la clase Dados

#include <iostream>
#include <cstdlib> //Viene declarado RAND_MAX,srand,rand
#include <ctime>
#include "dados.h"



Dados::Dados(){ //Constructor de la clase
	srand(time(NULL));
	d1=1;
	d2=1;
	contador1=0;
	contador2=0;
	sumatorio1=0;
	sumatorio2=0;

	for(int i = 4 ; i >-1; i--){
		v1[i]=0;
		v2[i]=0;
	}



}

void Dados::lanzamiento(){

	d1=1+(rand()%6);
	sumatorio1=sumatorio1+d1;
	d2=1+(rand()%6);
	sumatorio2=sumatorio2+d2;

	contador1=contador1+1;
	contador2=contador2+1;


//introduzco los valores en el vect


	for(int i = 4; i >-1;i--){
			v1[i]=v1[i-1];
		}
	v1[0]=d1;
	for(int i = 4; i >-1;i--){
			v2[i]=v2[i-1];
	}
	v2[0]=d2;
}

/*

const int Dados::getlanzamiento1(){
	return contador1;
}
const int Dados::getlanzamiento2(){
	return contador2;
}




const int Dados::getDado1(){
	return d1;
}
const int Dados::getDado2(){
	return d2;
}

*/

bool Dados::setDado1(int a){

	if((a>6)||(a<0)){
		return false;
	}
	else{
		contador1=contador1+1;
		d1=a;
		sumatorio1=sumatorio1+d1;
		for(int i = 4; i >-1;i--){
			v1[i]=v1[i-1];
		}
		v1[0]=d1;
		return true;
	}

}
bool Dados::setDado2(int b){
	if((b>6)||(b<0)){
		return false;
	}
	else{
		contador2=contador2+1;
		d2=b;
		sumatorio2=sumatorio2+d2;
		for(int i = 4; i >-1;i--){
			v2[i]=v2[i-1];
		}
		v2[0]=d2;
		return true;
	}

}

int Dados::getSuma(){
	return d1+d2;
}

int Dados::getDiferencia(){

	if(d1>d2){
		return d1-d2;
	}
	else{
		return d2-d1;
	}

}



float Dados::getMedia1(){
	if(contador1==0){
		return 0;
	}else{
	 	return sumatorio1/contador1;
	}

}


float Dados::getMedia2(){
	if(contador2==0){
		return 0;
	}
	else{
		return sumatorio2/contador2;
	}
}

void Dados::getUltimos1(int *vector1){
	for(int i = 0 ; i < 5 ; i++){
		vector1[i]=v1[i];
	}
}


void Dados::getUltimos2(int *vector2){
	for(int i = 0 ; i < 5 ; i++){
		vector2[i]=v2[i];
	}
}
