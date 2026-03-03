#include "nombre.h"

void procesarNombre(std::string nombreCompleto)
{
	int longitud = nombreCompleto.length();

	size_t primerEspacio = nombreCompleto.find(' ');
	std::string primerNombre = nombreCompleto.substr(0, primerEspacio);

	size_t segundoEspacio = nombreCompleto.find(' ', primerEspacio + 1);
	std::string primerApelllido = nombreCompleto.substr(primerEspacio + 1, segundoEspacio - primerEspacio - 1);

	int vocales = 0;
	std::string nombreMayus = "";

	for(int i=0; i<nombreCompleto.length();i++)
	{
		char c = nombreCompleto[i];
		char cMin = tolower(c);//es para pasar a minuscula y poder comparar
		if (cMin == 'a' || cMin == 'e' || cMin == 'i' || cMin == 'o' || cMin == 'u')
		{
			vocales++;
		}
		nombreMayus += toupper(c);//es para pasar a mayuscula
	}
	std::cout << "RESULTADOS" << std::endl;
	std::cout << "primer nombre:" << primerNombre<<std::endl;
	std::cout << "primer apellido:" <<primerApelllido<< std::endl; 
	std::cout << "total de vocales:" <<vocales<< std::endl;
	std::cout << "nombre en mayusculas:" <<nombreMayus<< std::endl;
	std::cout << "longitud total:" <<longitud<< std::endl;
}
