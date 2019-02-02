#include <iostream>
using namespace std;

int main (){

	float sueldo;

	cout << "Ingrese el sueldo un trabajador" << endl;
	cin >> sueldo;

	if (sueldo > 0) {
		if (sueldo < 1500) {
			sueldo += 0.15 * sueldo;
			cout << "Su sueldo es " << sueldo << " soles." << endl;
		}
		else
			cout << "Su sueldo es " << sueldo << " soles." << endl;
	}
	else
		cout << "Ha ingresado incorrectamente." << endl;
	return 0;
}