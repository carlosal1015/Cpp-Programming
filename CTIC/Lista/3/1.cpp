#include <iostream>
#include <limits>

using namespace std;

int main (){

	int sizeOfNumbers;
	float number, cumulative = 0,
				minNumber = numeric_limits<float>::max(),
				maxNumber = numeric_limits<float>::min(),
				average;

	do{
		cout << "Digite la cantidad de números:" << endl;
		cin >> sizeOfNumbers;
	} while (sizeOfNumbers<1);

	for(int i = 1; i <= sizeOfNumbers; i++){
		cout << "Ingrese el número " << i << ": "; cin >> number;

		if(number > maxNumber)	maxNumber = number;
		if(number < minNumber)	minNumber = number;

		cumulative += number;
	}

	average = (float) cumulative / sizeOfNumbers;	// Conversión a flotante.

	cout << "El promedio de los " << sizeOfNumbers << " números es " << average << ".\n"
					"El mayor de los " << sizeOfNumbers << " números es " << maxNumber << ".\n"
					"El menor de los " << sizeOfNumbers << " números es " << minNumber << ".\n";

	return 0;
}