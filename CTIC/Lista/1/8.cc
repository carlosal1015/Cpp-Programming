/*
	Elabore un programa que pida un monto en dólares
	y obtenga el monto equivalente en soles.
	Defina el tipo de cambio como una constante.
*/
#include <iostream>

using namespace std;

int main(){

	const float change = 3.30;
	float soles, dollars;
	
	cout << "Ingrese el monto en dólares:" << endl;
	cin >> dollars;

	soles = change * dollars;

	cout << "El monto en soles es " << soles << "." << endl;

	return 0;
}