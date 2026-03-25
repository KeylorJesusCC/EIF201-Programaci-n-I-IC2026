#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>

namespace UNA {
	class Vehiculo
	{ private:
		std::string placa;
		std::string marca;
		int año;
		double kilometraje;
		bool activo;
      public:
		  Vehiculo(const std::string& placa, const std::string& marca, int año, double kilometrajes);

		  //gets
		  std::string getPlaca() const;
		  std::string getMarca() const;
		  int getAño() const;
		  double getKilometraje() const;
		  bool isActivo() const;

		  //sets
		  void setMarca(const std::string& nuevaMarca);
		  void setAño(int nuevoAño);
		  void setKilometraje(double nuevoKilometraje);

		  //metodos
		  void registrarKilometros(double km);
		  void desactivar();
		  void reactivar();
		  void mostrar() const;
	};
}
#endif
