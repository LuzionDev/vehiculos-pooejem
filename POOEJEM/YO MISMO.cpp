#include <iostream>
#include "vehiculo.h"

using namespace std;

int main() {
	vehiculo v1("Ferrari", 150, 2);
	vehiculo v2("Bugatti", 180, 4);

	cout << "Vehiculo 1" << endl;
	v1.ensenar();

	cout << "vehiculo 2" << endl;
	v2.ensenar();

	return 0;
}