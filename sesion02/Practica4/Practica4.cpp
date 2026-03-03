#include"nombre.h"

int main()
{
	std::string nombreCompleto;
	std::cout << "Escriba su nombre completo:";
	std::getline(std::cin, nombreCompleto);

	procesarNombre(nombreCompleto);


	return 0;
}