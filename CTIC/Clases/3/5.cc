//*************************************
// Programa: Uso de la variable bandera
//*************************************
#include <iostream>
using namespace std;

int main(){

	int N, contador = 0, acumulador = 0, number;
	float promedio;
	bool flag = true;
	
	while(flag == true){
		cout << "Ingrese un número:" << endl;
		cin >> number;

		if (number%2==1){
			acumulador = acumulador + number;
			contador = contador + 1;
		}
		else flag = false;
	}

	promedio = acumulador / contador;
	cout << "El promedio es " << promedio << "." << endl;

	return 0;
}