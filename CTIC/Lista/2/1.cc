/*
	Intercambio valores
*/
#include <iostream>

using namespace std;

int main(){

	int a, b, aux;

	cout << "Ingrese el valor de a y b" << endl;
	cin >> a >> b;

	aux = a;
	a = b;
	b = aux;

	cout << "\n" << a << "\n" << b;
	
	return 0;
}