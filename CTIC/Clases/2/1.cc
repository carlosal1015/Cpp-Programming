/*
	Programa que intercambia dos números.
*/

#include <iostream>

using namespace std;

int main(){
	int A, B, aux;
	//cout << "Espa"<<char(164) << "a" << endl;
	//cout << "\nPer" << char(163) << endl;
	cout << "A= ";
	cin >> A;
	
	cout << "B= ";
	cin >> B;
	// Intercambio
	aux = A;
	A = B;
	B = aux;

	cout << "Luego del intercambio.\n";
	cout << "A= " << A << endl;
	cout << "B= " << B << endl;

	return 0;
}
