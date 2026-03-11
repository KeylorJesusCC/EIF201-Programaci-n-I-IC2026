#include "Peso.h"

double* crearRegistro(int& cantidad)
{
	std::cout << "SISTEMA DE REGISTRO DE PAQUETES" << std::endl << std::endl;
	std::cout << "Digite la cantidad de paquetes(debe ser mayor a 0):";
	std::cin >> cantidad;
	while (cantidad <= 0)
	{
		std::cout << " La cantidad de paquetes debe ser mayor a cero";
		std::cin >> cantidad;
	}
	double* pesos = new double[cantidad];
	return pesos;
}

void ingresarPesos(double* pesos, int cantidad)
{
	std::cout << "Ingrese los pesos" << std::endl;
	for (int i = 0; i < cantidad; i++)
	{
		std::cout << "Ingrese el peso del paquete " << i + 1 << " en kg:" << std::endl;
		std::cin >> pesos[i];

		while (pesos[i] < 0)
		{
			std::cout << "El peso no puede ser negativo" << std::endl;
			std::cin >> pesos[i];
		}
	}
	std::cout << "Registro completado"<<std::endl;
}

double calcularPesoTotal(const double* pesos, int cantidad)
{
	double pesoT= 0.0;
	for (int i = 0; i < cantidad; i++)
	{
		pesoT += pesos[i];
	}
	return pesoT;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite)
{
	int contador = 0;
	for (int i = 0; i < cantidad; i++)
	{
		if (pesos[i] > limite)
		{
			contador++;
		}
	}
	return contador;
}

 double buscarMasPesado(const double* pesos, int cantidad)
{
	if(cantidad<=0||pesos==nullptr)
	{
		return 0;
	}
	const double* maxptr = &pesos[0];
	for (int i=0; i < cantidad; i++)
	{
		if (pesos[i] > *maxptr)
		{
			maxptr = &pesos[i];
		}
	}
	return *maxptr;
}
