#include "vehiculo.h"
#include <iostream>
using namespace std;

vehiculo::vehiculo(string m, int v, int c) {
	marcas = m;
	velocidad = v;
	capacidad = c;
}

void vehiculo::ensenar() {
	cout << "Marca: " << marcas << endl;
	cout << "Velocidad: " << velocidad << endl;
	cout << "Capacidad: " << capacidad << endl;
}
