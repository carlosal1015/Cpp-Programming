/*
	Sueldo de trabajadores v2.
*/
#include <iostream>
using namespace std;

int main(){
	
	float sueldo;

	cout << "Ingrese el sueldo del trabajador:" << endl;
	cin >> sueldo;

	if (sueldo < 1500)
		sueldo = sueldo + (0.15 * sueldo);
	else
		sueldo = sueldo + (0.13 * sueldo);

	cout << "Su sueldo es " << sueldo << " soles." << endl; 

	return 0;

}
