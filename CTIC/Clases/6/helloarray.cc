#include <iostream>
using namespace std;

int main(){

	double v[4] = {22.5, 44.5, 77.5, 99.5};
	//Recuperar un elemento del array
	cout << "\nTercer elemento= " << v[2];
	cout << "\nPrimer elemento menos el cuarto elemento= " << v[0] - v[3];
	// Reemplazar un elemento del array
	// Guardar en el segundo casillero el valor 90
	v[1] = 90;
	cout << "\nSegundo elemento= " << v[1];
	cout << "\nListar todos los elementos del vector";

	for(int p = 0; p < 4; p++)	cout << v[p] << "\t";

	cout << endl;

	return 0;
}