#include "Vehiculo.h"

namespace UNA {
 Vehiculo::Vehiculo(const std::string& placa, const std::string& marca, int anio, double kilometraje)
    : placa(placa), marca(marca), año(año), kilometraje(kilometraje), activo(true) {}
// Gets
std::string Vehiculo::getPlaca() const { return placa; }
std::string Vehiculo::getMarca() const { return marca; }
int Vehiculo::getAño() const { return año; }
double Vehiculo::getKilometraje() const { return kilometraje; }
bool Vehiculo::isActivo() const { return activo; }

// Sets
void Vehiculo::setMarca(const std::string& nuevaMarca) {
    marca = nuevaMarca;
}

void Vehiculo::setAño(int nuevoAño) {
    año = nuevoAño;
}

void Vehiculo::setKilometraje(double nuevoKilometraje) {
    if (nuevoKilometraje >= 0) {
        kilometraje = nuevoKilometraje;
    }
    else {
        std::cout << "Error: el kilometraje no puede ser negativo."<<std::endl;
    }
}
// Métodos de negocio
void Vehiculo::registrarKilometros(double km) {
    if (km > 0 && activo) {
        kilometraje += km;
    }
    else if (!activo) {
        std::cout << "Error: el vehiculo está fuera de servicio, no se pueden registrar kilometros."<<std::endl;
    }
    else {
        std::cout << "Error: los kilometros deben ser positivos."<<std::endl;
    }
}

void Vehiculo::desactivar() {
    if (!activo) {
        std::cout << "El vehiculo ya esta fuera de servicio."<<std::endl;
    }
    else {
        activo = false;
        std::cout << "Vehiculo desactivado correctamente."<<std::endl;
    }
}

void Vehiculo::reactivar() {
    if (activo) {
        std::cout << "El vehiculo ya está activo."<<std::endl;
    }
    else {
        activo = true;
        std::cout << "Vehiculo reactivado correctamente."<<std::endl;
    }
}

void Vehiculo::mostrar() const {
    std::cout << "Placa: " << placa;
    std::cout << " | Marca: " << marca;
    std::cout << " | Año: " << año;
    std::cout << " | Kilometraje: " << kilometraje;
    std::cout << " | Estado: " << (activo ? "ACTIVO" : "FUERA DE SERVICIO")<<std::endl;   
} 
}