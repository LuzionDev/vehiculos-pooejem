#pragma once
#include <string>
using namespace std;

class vehiculo {
private:
	string marcas;
	int velocidad;
	int capacidad;
public:
	vehiculo(string m, int v, int c);

	void ensenar();

};


