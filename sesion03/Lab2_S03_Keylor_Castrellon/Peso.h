#ifndef PESO_H
#define PESO_H
#include<iostream>

double* crearRegistro(int& cantidad);
void ingresarPesos(double* pesos, int cantidad);
double calcularPesoTotal(const double* pesos, int cantidad);
int contarSobreLimite(const double* pesos, int cantidad, double limite);
const double* buscarMasPesado(const double* pesos, int cantidad);

#endif