/*
	Sueldo de trabajadores
*/
#include <iostream>
using namespace std;

int main(){

	float sueldo;	
	
	cout << "Ingrese el sueldo del trabajador" << endl;
	cin >> sueldo;
	
	if (sueldo < 1500)
		sueldo = sueldo + (0.15 * sueldo);

	cout << "Su sueldo es " << sueldo << " soles." << endl;

	return 0;
}
