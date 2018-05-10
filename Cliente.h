#ifndef CLIENTE_H
#define CLIENTE_H

#include "Banco.h"

class Cliente : public Banco
{
	char nombre[50];
	int cedula;
	int edad;
	public:
		Cliente(char nombre[], int cedula, int edad,char n[],int saldo,int num);
		Cliente();
		~Cliente();
		void cargar();
		void imprimir();
		void setM(char nombre[]);
		char *getM();
		
	protected:
};

#endif
