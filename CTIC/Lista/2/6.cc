#include <iostream>

using namespace std;

int main(){

	float sueldo, sueldo_bruto, sueldo_neto, descuento;

	cout << "Ingrese el sueldo un trabajador" << endl;
	cin >> sueldo;

	if (sueldo > 0) {
		if (sueldo < 1500) {
			sueldo_bruto = 1.15 * sueldo;
			descuento = 0.10 * sueldo_bruto;
			sueldo_neto = sueldo_bruto - descuento;

			cout << "Su sueldo bruto es " << sueldo_bruto << " soles.\n";
			cout << "Su sueldo neto es " << sueldo_neto << " soles.\n";
			cout << "Su descuento es " << descuento << " soles.\n";
		}
		else{
			sueldo_bruto = 1.13 * sueldo;
			descuento = 0.10 * sueldo_bruto;
			sueldo_neto = sueldo_bruto - descuento;
			
			cout << "Su sueldo bruto es " << sueldo_bruto << " soles.\n";
			cout << "Su sueldo neto es " << sueldo_neto << " soles.\n";
			cout << "Su descuento es " << descuento << " soles.\n";
		}	
	}
	else
		cout << "Ha ingresado incorrectamente." << endl;

	return 0;
}