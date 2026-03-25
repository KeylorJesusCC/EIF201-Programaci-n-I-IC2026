#include "Flota.h"

namespace UNA {
    // capacidad inicial de 3
    Flota::Flota() : cantidad(0), capacidad(3) {
        Vehiculos = new Vehiculo * [capacidad];
    }

    // Destructor
    Flota::~Flota() {
        for (int i = 0; i < cantidad; i++) {
            delete Vehiculos[i]; // liberar cada vehículo
        }
        delete[] Vehiculos; // liberar el arreglo
    }

    // Método privado para redimensionar el arreglo
    void Flota::redimensionar() {
        capacidad *= 2;
        Vehiculo** nuevoArreglo = new Vehiculo * [capacidad];

        for (int i = 0; i < cantidad; i++) {
            nuevoArreglo[i] = Vehiculos[i];
        }

        delete[] Vehiculos;
        Vehiculos = nuevoArreglo;
    }
    
    void Flota::agregar(Vehiculo* nuevo) {
        if (cantidad == capacidad) {
            redimensionar();
        }
        Vehiculos[cantidad++] = nuevo;
    }

    Vehiculo* Flota::buscarPorPlaca(const std::string& placa) const {
        for (int i = 0; i < cantidad; i++) {
            if (Vehiculos[i]->getPlaca() == placa) {
                return Vehiculos[i];
            }
        }
        return nullptr;
    }

 
    void Flota::mostrarPorMarca(const std::string& marca) const {
        int encontrados = 0;
        for (int i = 0; i < cantidad; i++) {
            if (Vehiculos[i]->getMarca() == marca) {
                Vehiculos[i]->mostrar();
                encontrados++;
            }
        }
        if (encontrados == 0) {
            std::cout << "No hay vehiculos de la marca " << marca <<std::endl;
        }
        else {
            std::cout << "Total encontrados: " << encontrados << std::endl;
        }
    }

    //solo inactivos
    bool Flota::eliminar(const std::string& placa) {
        for (int i = 0; i < cantidad; i++) {
            if (Vehiculos[i]->getPlaca() == placa) {
                if (Vehiculos[i]->isActivo()) {
                    std::cout << "El vehiculo está activo. Debe desactivarse antes de eliminar."<< std::endl;
                    return false;
                }

                // liberar memoria del vehículo
                delete Vehiculos[i];
                // compactar el arreglo
                for (int j = i; j < cantidad - 1; j++) {
                    Vehiculos[j] = Vehiculos[j + 1];
                }
                cantidad--;
                std::cout << "Vehículo eliminado correctamente."<< std::endl;
                return true;
            }
        }
        std::cout << "No se encontró vehículo con placa " << placa << std::endl;
        return false;
    }

   
    int Flota::contarActivos() const {
        int activos = 0;
        for (int i = 0; i < cantidad; i++) {
            if (Vehiculos[i]->isActivo()) {
                activos++;
            }
        }
        return activos;

    }
   
    void Flota::mostrarTodos() const {
        if (cantidad == 0) {
            std::cout << "La flota está vacía."<< std::endl;
            return;
        }
        for (int i = 0; i < cantidad; i++) {
            Vehiculos[i]->mostrar();
        }
    }
    // Getters
    int Flota::getCantidad() const { return cantidad; }
    int Flota::getCapacidad() const { return capacidad; }
    Vehiculo** Flota::getVehiculos() const { return Vehiculos; }

    void Flota::setCantidad(int nuevaCantidad) { cantidad = nuevaCantidad; }
    void Flota::setCapacidad(int nuevaCapacidad) { capacidad = nuevaCapacidad; }
}