#include "Peso.h"
using namespace std;

int main()
{
	int cantidadPaquetes = 0;
	double limitePeso = 0.0;
	double* arregloPesos = crearRegistro(cantidadPaquetes);
	ingresarPesos(arregloPesos, cantidadPaquetes);

	cout << "Escriba el limite de peso permitido:";
	cin >> limitePeso;
	double total = calcularPesoTotal(arregloPesos, cantidadPaquetes);
	int excedidos = contarSobreLimite(arregloPesos,cantidadPaquetes,limitePeso);
	double punteroMasPesado=buscarMasPesado(arregloPesos,cantidadPaquetes);
	
	cout << "Peso total acomulado:"<<total<<endl;
	cout << "Paquetes sobre el limite:" << excedidos<<endl;
	if (cantidadPaquetes>0)
	{
		cout << "El paquete mas pesado es:" << punteroMasPesado << " kg" << endl;
	}

	delete[] arregloPesos;
	arregloPesos = nullptr;
	return 0;
}

