#include <iostream>
#include "Banco.h"
#include "Cliente.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
/*	Banco **b=new Banco *[2];
	
	for(int i=0; i<2; i++){
		
		b[i]=new Banco();
		b[i]->cargarD();
		b[i]->mostrarD();
		
	}*/
	
	Cliente **c=new Cliente *[2];
	for(int i=0; i<2; i++){
		c[i]=new Cliente();
		c[i]->cargar();
		c[i]->imprimir();
		
	}
	
	
	return 0;
}
