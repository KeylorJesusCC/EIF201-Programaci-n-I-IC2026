#include "Matriz.h"

void rellenarMatriz(int matriz[filas][cols])
{
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Ingrese valor [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[filas][cols])
{
    std::cout << std::endl;
    std::cout << "Matriz" << std::endl;
    for (int i = 0; i< filas; i++)
    {
        for (int k = 0; k < cols; k++)
        {
            std::cout <<std::setw(5) << matriz[i][k];
        }
        std::cout <<std:: endl;
    }
}

void calcularSumaFilas(int matriz[filas][cols])
{
    std::cout << std::endl;
    std::cout << "Suma de filas" << std::endl;
    for (int i = 0; i < filas; i++)
    {
        int suma = 0;
        for (int k = 0; k < cols; k++)
        {
            suma += matriz[i][k];
        }
        std::cout << "Fila" << i << ":" << suma << std::endl;
    }
}

void calcularSumaColumnas(int matriz[filas][cols])
{
    std::cout << std::endl;
    std::cout << "Suma de columnas" << std::endl;
    for (int k = 0; k < cols; k++)
    {
        int suma = 0;
        for (int i=0;i<filas;i++)
        {
            suma += matriz[i][k];
        }
        std::cout << "Columna" << k << ":" << suma << std::endl;
    }
}

void calcularSumaDiagonal(int matriz[filas][cols])
{
    std::cout << std::endl;
    int suma = 0;
    for (int i = 0; i < filas; i++)
    {
        suma += matriz[i][i];
    }
    std::cout << "Suma de diagonal:" << suma << std::endl;
}