#include <iostream>
#define LENGTH 10
using namespace std;

int main(){

	float ventas[LENGTH], sum = 0.0, average;
	
	int n;
	cout << "Ingrese un número natural: "; cin >> n; 

	cout << "Ingrese los valores de las ventas mensuales de un almacén:\n";

	
	for(int i = 0; i < n; i++){
		cin >> ventas[i];
		sum += ventas[i];
	}

	average = (float) sum / n;

	cout << "El listado de las ventas mayores al promedio es el siguiente." << endl;
	
	for(int j = 0; j < n; j++){
		if (ventas[j] > average)	cout << ventas[j] << endl;
	}

	cout << "**************************" << endl;

	cout << "El promedio es " << average << endl;

	return 0;
}