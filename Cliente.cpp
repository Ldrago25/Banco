#include "Cliente.h"

Cliente::Cliente()
{
	strcpy(nombre,"Brandon");
	cedula=26566047;
	edad=20;
	
	
}

	Cliente::Cliente(char nombre[],int cedula,int edad,char n[],int saldo,int num):Banco(n,saldo,num){
		
		strcpy(this->nombre,nombre);
		this->cedula=cedula;
		this->edad=edad;
		
	}
	
	
	void Cliente::cargar(){
		Banco::cargarD();
		cout<<endl<<"Nombre del cliente: "<<endl;
		cin.sync();
		cin.getline(nombre,50);
		cout<<endl<<"Cedula: "<<endl;
		cin>>cedula;
		cout<<endl<<"Edad: "<<endl;
		cin>>edad;
		
		
	}
	
	void Cliente::imprimir(){
		
		Banco::mostrarD();
		cout<<endl<<"Nombre: "<<this->getM()<<endl;
		cout<<endl<<"Cedula: "<<cedula<<endl;
		cout<<endl<<"Edad: "<<edad<<endl;
		
	}
	
	void Cliente::setM(char nombre[]){
		strcpy(this->nombre,nombre);
		
	}
	char *Cliente::getM(){
		return nombre;
	}

Cliente::~Cliente()
{
}
