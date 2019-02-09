#include <iostream>
#include <limits>
using namespace std;

int main (){

	/*
	*************************************
	*	Declarando variables.							*
	*************************************
	*/

	int sizeOfNumbers;															// Input
	float number, cumulative = 0,										// Middle
				minNumber = numeric_limits<float>::max(),	// cout << minNumber << endl;
				maxNumber = numeric_limits<float>::min(),	// cout << maxNumber << endl;
				average;																	// Output

	/*
	*************************************
	*	Validando entrada natural.				*
	*************************************
	*/

	do{
		cout << "Digite la cantidad de números:" << endl;
		cin >> sizeOfNumbers;
	} while (sizeOfNumbers<1);

	/*
	*************************************
	*	Mayor, menor y promedio.					*
	*************************************
	*/

	for(int i = 1; i <= sizeOfNumbers; i++){
		cout << "Ingrese el número " << i << ":" << endl;
		cin >> number;

		while(number > maxNumber){//Poner un if
			maxNumber = number; break;
		}

		while(number < minNumber){//Poner un if
			minNumber = number; break;
		}

		cumulative += number;													//Equivalente a cumulative = cumulative + number;
	}

	average = (float) cumulative / sizeOfNumbers;		// Conversión a flotante.

	cout << "El promedio de los " << sizeOfNumbers << " números es " << average << "." << endl;
	cout << "El mayor de de los " << sizeOfNumbers << " números es " << maxNumber << "." << endl;
	cout << "El menor de de los " << sizeOfNumbers << " números es " << minNumber << "." << endl;

	return 0;
}