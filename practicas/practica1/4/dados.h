#ifndef DADOS_H
#define DADOS_H

class Dados{

	private:
		int d1;
		int d2;
	public:
		Dados();			//el constructor no devuelve nada
		void lanzamiento();
		int getDado1();		//el métoo devuelve un entero
		int getDado2();
		bool setDado1(int a);
		bool setDado2(int b);
		int getSuma();
		int getDiferencia();
};

#endif
