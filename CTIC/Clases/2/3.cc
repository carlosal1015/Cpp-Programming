/*
	if doble, ejercicio 3
*/

#include <iostream>
using namespace std;

int main(){
	
	float nota1, nota2, nota3, promedio;

	cout << "Ingrese las notas:" << endl;
	cin >> nota1 >> nota2 >> nota3;
	
	promedio = (nota1 + nota2) * 0.30 + (nota3 * 0.40);

	if (promedio >=11)
		cout << "Aprobado!" << endl;
	else	// promedio es menor que 11.
		cout << "Desaprobado." << endl;

	return 0;
}
