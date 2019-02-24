// paso por referencia
#include <iostream>

using namespace std;

void intercambio(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;

	cout << "Dentro del intercambio\n";
	cout << "a = " << *a << "\tb = " << *b << endl;

}

int main(){

	int a = 3;
	int b = 5;

	cout << "Antes del intercambio\n";
	cout << "a = " << a << "\tb = " << b << endl;

	intercambio(&a, &b);

	cout << "Luego del intercambio\n";
	cout << "a = " << a << "\tb = " << b << endl;

	return 0;

}