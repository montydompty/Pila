/*Montoya Rangel luis Rodrigo
Método principal de la pila*/
#include "Pila.h"

int main()
{
	/*Main que utiliza el constructor de pila para crear una pila vacia y probar su funcionamineto*/
	Pila p = Pila();
	p.Push(2);
	p.Push(3);
	p.Push(4);
	p.Pop();
	p.Push(5);
	p.Show();
	p.VaciarPila();
	p.Show();
	return 0;
}
