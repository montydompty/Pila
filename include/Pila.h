/*Montoya Rangel luis Rodrigo
Clase pila con atributos y m�todos*/

#include "Nodo.h"

class Pila
{
public:
	//nodo sentinela
	Nodo* Tope;
	//constructor
	Pila();
	//m�todos
	int Pop();
	void Push(int Dato);
	bool PilaVacia();
	void VaciarPila();
	void Show();
};
