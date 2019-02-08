#include <iostream>
#include <limits>
using namespace std;

int main (){

	const float MAXIMO = numeric_limits<float>::max();
	const float MINIMO = numeric_limits<float>::min();

	/*
	*************************************
	*	Declarando variables							*
	*************************************
	*/

	int sizeOfNumbers;										// Input
	float number,													// Input
				cumulative = 0,									// Middle
				average, maxNumber, minNumber; 	// Output

	/*
	*************************************
	*	Validando entrada natural					*
	*************************************
	*/

	do{
		cout << "Digite la cantidad de números:" << endl;
		cin >> sizeOfNumbers;
	} while (sizeOfNumbers<1);

	/*
	*************************************
	*	Validando entrada natural					*
	*************************************
	*/

	for(int i = 1; i <= sizeOfNumbers; i++){
		cout << "Ingrese el número " << i << ":" << endl;
		cin >> number;

		maxNumber = MINIMO;
		while(number > maxNumber){
			maxNumber = number;
		}

		minNumber = MAXIMO;
		while(number < minNumber){
			minNumber = number;
		}
		
		cumulative += number;												//Equivalente a umulative = cumulative + number;
	}

	average = (float) cumulative / sizeOfNumbers;	// Conversión a flotante.

	cout << "El promedio de los " << sizeOfNumbers << " números es " << average << "." << endl;
	cout << "El mayor de de los " << sizeOfNumbers << " números es " << maxNumber << "." << endl;
	cout << "El menor de de los " << sizeOfNumbers << " números es " << minNumber << "." << endl;
	/*
	cout << MAXIMO << endl;
	cout << MINIMO << endl;
	*/
	return 0;
}