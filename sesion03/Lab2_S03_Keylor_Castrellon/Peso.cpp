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

	



}

double calcularPesoTotal(const double* pesos, int cantidad)
{
	return 0.0;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite)
{
	return 0;
}

const double* buscarMasPesado(const double* pesos, int cantidad)
{
	return nullptr;
}
