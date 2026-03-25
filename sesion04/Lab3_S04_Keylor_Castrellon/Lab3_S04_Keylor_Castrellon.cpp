#include "Flota.h"

using namespace UNA;

    int main() {
        Flota flota;
        int opcion;

        do {
            std::cout << "--- MENU FLOTA EXPRESS ---"<<std::endl;
            std::cout << "1= Registrar vehiculo"<<std::endl;
            std::cout << "2= Buscar vehiculo por placa"<<std::endl;
            std::cout << "3= Mostrar vehiculos por marca"<< std::endl;
            std::cout << "4= Registrar kilometros a un vehiculo"<< std::endl;
            std::cout << "5= Desactivar vehiculo"<< std::endl;
            std::cout << "6= Reactivar vehiculo"<< std::endl;
            std::cout << "7= Eliminar vehiculo"<< std::endl;
            std::cout << "8= Mostrar flota completa"<< std::endl;
            std::cout << "9= Mostrar cantidad de vehiculos activos"<< std::endl;
            std::cout << "10= Salir" << std::endl;
            std::cout << "Seleccione una opcion: ";
            std::cin >> opcion;

            std::string placa, marca;
            int año;
            double km;

            switch (opcion) {
            case 1: {
                std::cout << "Ingrese placa: ";
                std::cin >> placa;
                std::cout << "Ingrese marca: ";
                std::cin >> marca;
                std::cout << "Ingrese año: ";
                std::cin >> año;
                std::cout << "Ingrese kilometraje inicial: ";
                std::cin >> km;
                flota.agregar(new Vehiculo(placa, marca, año, km));
                std::cout << "Vehiculo registrado."<< std::endl;
                break;
            }
            case 2: {
                std::cout << "Ingrese placa: ";
                std::cin >> placa;
                Vehiculo* v = flota.buscarPorPlaca(placa);
                if (v) v->mostrar();
                else std::cout << "No se encontro vehiculo con esa placa."<< std::endl;
                break;
            }
            case 3: {
                std::cout << "Ingrese marca: ";
                std::cin >> marca;
                flota.mostrarPorMarca(marca);
                break;
            }
            case 4: {
                std::cout << "Ingrese placa: ";
                std::cin >> placa;
                Vehiculo* v = flota.buscarPorPlaca(placa);
                if (v) {
                    std::cout << "Ingrese kilometros a registrar: ";
                    std::cin >> km;
                    v->registrarKilometros(km);
                }
                else {
                    std::cout << "No se encontro vehiculo."<< std::endl;
                }
                break;
            }
            case 5: {
                std::cout << "Ingrese placa: ";
                std::cin >> placa;
                Vehiculo* v = flota.buscarPorPlaca(placa);
                if (v) v->desactivar();
                else std::cout << "No se encontro vehiculo."<< std::endl;
                break;
            }
            case 6: {
                std::cout << "Ingrese placa: ";
                std::cin >> placa;
                Vehiculo* v = flota.buscarPorPlaca(placa);
                if (v) v->reactivar();
                else std::cout << "No se encontro vehiculo."<< std::endl;
                break;
            }
            case 7: {
                std::cout << "Ingrese placa: ";
                std::cin >> placa;
                flota.eliminar(placa);
                break;
            }
            case 8: {
                flota.mostrarTodos();
                break;
            }
            case 9: {
                std::cout << "Vehiculos activos: " << flota.contarActivos() << std::endl;
                break;
            }
            case 10:
                std::cout << "Saliendo..."<<std::endl;
                break;
            default:
                std::cout << "Opcion invalida."<< std::endl;
            } 
          




        } while (opcion != 10);

        return 0;
    }