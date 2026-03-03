#include "ordenamiento.h"
#include <iostream>
int array[20];
void ingresar(int array[], int n)
{
	int valores;
	std::cout <<"Escriba los "<<n<<" valores"<<std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout <<"Espacio " <<i+1<<" :";
		std::cin >> valores;
			array[i] = valores;
	}
}

void invertir(int array[], int invertido[], int n)
{
	for (int i = 0; i < n; i++)
	{
		invertido[n - 1 - i] = array[i];
	}
}

void mostrar(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i]<<" ";
	}
   std::cout << std::endl;
}
