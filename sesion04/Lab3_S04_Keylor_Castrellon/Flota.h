#ifndef FLOTA_H
#define FLOTA_H

#include "vehiculo.h"

namespace UNA {
	class Flota
	{
	private: 
		Vehiculo** Vehiculos;
		int cantidad;
		int capacidad;
		void redimensionar();
	public:
		Flota();
		~Flota();
	
		void agregar(Vehiculo* nuevo);
		Vehiculo* buscarPorPlaca(const std::string& placa)const;
		void mostrarPorMarca(const std::string& marca) const;
		bool eliminar(const std::string& placa);
		int contarActivos() const;
		void mostrarTodos() const;

		//gets
		int getCantidad() const;
		int getCapacidad() const;
		Vehiculo** getVehiculos() const;
		//sets
		void setCantidad(int nuevaCantidad);
		void setCapacidad(int nuevaCapacidad);
	};
}
#endif