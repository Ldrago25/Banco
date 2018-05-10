#include "Banco.h"

Banco::Banco()
{
	strcpy(n,"Banesco");
	saldo=1000;
	num=10;
	
	
}
	Banco::Banco(char n[],int saldo, int num){
		
		strcpy(this->n,n);
		this->saldo=saldo;
		this->num=num;
		
	}
	
	
	void Banco::cargarD(){
		
		cout<<endl<<"------Introducir tus datos------"<<endl;
		cout<<endl<<"Nombre del banco: "<<endl;
		cin.sync();
		cin.getline(n,50);
		cout<<endl<<"Saldo: "<<endl;
		cin>>saldo;
		cout<<endl<<"Numero de banco: "<<endl;
		cin>>num;
		
	}
	void Banco::mostrarD(){
		
		cout<<endl<<"...:::Tus Datos:::..."<<endl;
		cout<<endl<<"Nombre del banco: "<<this->getN()<<endl;
		cout<<endl<<"Saldo: "<<saldo<<endl;
		cout<<endl<<"Numero: "<<num<<endl;
		
		
	}
	void Banco::setN(char N[]){
		
		strcpy(this->n,n);
	}
	char *Banco::getN(){
		return n;
	}
	

Banco::~Banco()
{
}
