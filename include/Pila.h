/*Montoya Rangel luis Rodrigo
Clase pila con atributos y métodos*/

#include "Nodo.h"

class Pila
{
public:
	//nodo sentinela
	Nodo* Tope;
	//constructor
	Pila();
	//métodos
	int Pop();
	void Push(int Dato);
	bool PilaVacia();
	void VaciarPila();
	void Show();
};
