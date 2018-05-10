#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include <string.h>
using namespace std;
class Banco
{
	char n[50];
	public:
		int saldo;
		int num;
		Banco(char n[],int saldo, int num);
		Banco();
		~Banco();
		void cargarD();
		void mostrarD();
		void setN(char n[]);
		char *getN();
		
	protected:
};

#endif
