#include <iostream>
using namespace std;

int main(){

	float nota1, nota2, nota3, promedio;
	bool validar;

	cout << "Ingresa las tres notas" << endl;
	cin >> nota1 >> nota2 >> nota3;

	validar = (nota1 >= 0 && nota1 <= 20) && (nota2 >= 0 && nota2 <= 20)
		 && (nota3 >= 0 && nota3 <= 20);

	if (validar) {
		promedio = (nota1 + nota2 + nota3) / 3;
		if (promedio >= 11)
			cout << "Aprobado." << endl;
		else
			cout << "Desaprobado" << endl;
	}
	else
		cout << "Ha ingresado incorrectamente alguna nota." << endl;

	return 0;
}