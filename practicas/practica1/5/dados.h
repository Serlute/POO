//dados.h
//Declaracion de la clase dados

#ifndef DADOS_H0
#define DADOS_H



//La clase representa dos dados y los metodos que les podemos aplicar
class Dados{
	private:
		int d1;
		int d2;
		int contador1;
		int contador2;
		float sumatorio1;
		float sumatorio2;
		int v1[5];
		int v2[5];


	public:
		Dados();
		void lanzamiento();
		int getLanzamientos1(){return contador1;}
		int getLanzamientos2(){return contador2;}

		int getDado1(){return d1;}
		int getDado2(){return d2;}

		bool setDado1(int a);
		bool setDado2(int b);

		float getMedia1();
		float getMedia2();

		void getUltimos1(int *vector1);
		void getUltimos2(int *vector2);


		int getSuma();
		int getDiferencia();
};



#endif
