#include <iostream>

using namespace std;

int main(){

	float monto, inversion, prestamo = 0, credito;
	
	cout << "Ingrese el monto de la compra" << endl;
	cin >> monto;

	if (monto > 0){
		if (monto > 500000) {
			inversion = 0.55 * monto;
			prestamo = 0.3 * monto;
			credito = monto - inversion - prestamo;

			cout << "El monto invertido es " << inversion << " soles.\n";
			cout << "El monto del préstamo al banco es " << prestamo << " soles.\n";
			cout << "El monto del crédito al fabricante es " << credito << " soles.\n";
			cout << "El monto del interés del crédito es " << 0.20 * credito << " soles.\n";
		}
		else
		{
			inversion = 0.7 * monto;
			credito = monto - inversion;

			cout << "El monto invertido es " << inversion << " soles.\n";
			cout << "El monto del préstamo al banco es " << prestamo << " soles.\n";
			cout << "El monto del crédito al fabricante es " << credito << " soles.\n";
			cout << "El monto del interés del crédito es " << 0.20 * credito << " soles.\n";
		}
	}
	else
		cout << "Monto inválido." << endl;

	return 0;
}