/*Montoya Rangel luis Rodrigo
Clse nodo con atributos y m�todos*/

#include <iostream>

class Nodo
{
private:
	//atributos
	int Dato;
	Nodo* Sig;
public:
	//cosntructores
	Nodo(int Dato, Nodo* Sig);
	Nodo(int Dato);
	//metodos
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	int getDato();
	Nodo* getSig();

};
