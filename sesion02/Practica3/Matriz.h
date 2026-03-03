#pragma once
#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <iomanip>

const int filas = 3;
const int cols = 3;
void rellenarMatriz(int matriz[filas][cols]);
void imprimirMatriz(int matriz[filas][cols]);
void calcularSumaFilas(int matriz[filas][cols]);
void calcularSumaColumnas(int matriz[filas][cols]);
void calcularSumaDiagonal(int matriz[filas][cols]);

#endif 