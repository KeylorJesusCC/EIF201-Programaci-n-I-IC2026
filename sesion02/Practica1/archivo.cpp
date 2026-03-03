#include "archivo.h"
#include <iostream>
int array[10];
void maxSum(int array[])
{
	int num, result = 0;
	
	std::cout << "DIGITE 10 NUMEROS" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite el numero:" << i + 1 << std::endl;
		std::cin >> num;
		array[i] = num;
	}
}
int valorMayor(int array[])
{
	int mayor = array[0];
	for (int i = 1; i < 10;i++)
	{
		if (array[i] > mayor)
		{
			mayor = array[i];	
		}
	}
	return mayor;
}
int valorMenor(int array[])
{
	int menor = array[0];
	for (int i = 1; i < 10; i++)
	{
		if (array[i] < menor)
		{
			menor = array[i];
		}
	}
	return menor;
}
int sumaArreglo(int array[])
{
	int suma = 0;
	for (int i = 0; i < 10; i++)
	{
		suma += array[i];
	}
	return suma;
}
double promedioArreglo(int array[])
{
	return (double)sumaArreglo(array)/10;
}
