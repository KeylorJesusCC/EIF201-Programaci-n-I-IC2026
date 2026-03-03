#include <iostream>
#include "ordenamiento.h"
int main()
{
	const int size = 20;
	int original[size];
	int inverted[size];
	int n;

	do {
		std::cout << "Ingrese el espacio del arreglo(max 20): ";
		std::cin >> n;
		if (n < 1 || n>size)
		{
		std::cout << "El espacio debe ser entre 1 y 20" << std::endl;
		}
	} while (n < 1 || n>size);
	
	ingresar(original, n);
	invertir(original,inverted,n);
	mostrar(original,n);
	mostrar(inverted, n);
	return 0;
}
