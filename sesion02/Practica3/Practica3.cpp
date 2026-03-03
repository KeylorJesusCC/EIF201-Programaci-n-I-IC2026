#include "Matriz.h"

int main()
{
	int matrix[filas][cols];
	rellenarMatriz(matrix);
	imprimirMatriz(matrix);
	calcularSumaFilas(matrix);
	calcularSumaColumnas(matrix);
	calcularSumaDiagonal(matrix);

	return 0;
}

