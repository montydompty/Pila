/*Montoya Rangel luis Rodrigo
el programa define los metodos de la pila*/

#include "Pila.h"

/*Método constructor, crea una pila vacia
@params: NULL
@result: Pila*/
Pila::Pila()
{
	this->Tope=NULL;
}
/*Método que agrega un elemento al tope de la pila
@params: Dato
@result: NULL*/
void Pila::Push(int Dato)
{
	Nodo* aux = new Nodo(Dato,this->Tope);	
	this->Tope= aux;
}
/*Método que retira el elemento del tope de la pila y regresa su valor
@params: NULL
@result: int*/
int Pila::Pop()
{
	if (PilaVacia())
	{
		std::cout<<"La pila esta vacia"<<std::endl;		
		return NULL;
	}
	else
	{
		int Dato=this->Tope->getDato();
		Nodo *aux=this->Tope;		
		this->Tope=aux->getSig();
		std::cout<<"El elemento "<<Dato<<" ha sido eliminado"<<std::endl;
		return Dato;		
	}
}
/*Método que verifica si la pila esta vacia
@params: NULL
@result: bool*/
bool Pila::PilaVacia()
{
	if (this->Tope==NULL)
		return true;
	return false;
}
/*Método que vacia la pila
@params: NULL
@result: NULL*/
void Pila::VaciarPila()
{ 
	this->Tope=NULL;
	std::cout<<"La pila ha sido vaciada"<<std::endl;
}
/*Método que muestra los elementos de la pila
@params: NULL
@result: NULL*/
void Pila::Show()
{
	if(PilaVacia())
	{
		std::cout<<"La pila esta vacia"<<std::endl;
		return;
	} 
	Nodo* aux=this->Tope;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}
