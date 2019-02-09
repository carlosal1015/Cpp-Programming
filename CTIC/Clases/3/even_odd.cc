#include <iostream>
#include <typeinfo>
using namespace std;

int main (){

	int sizeOfNumbers, number, even = 0, odd = 0, zero = 0;
	do{
		cout << "Ingrese un número natural: ";
		cin >> sizeOfNumbers;
	} while (sizeOfNumbers < 1);

	for(int i = 0; i < sizeOfNumbers; i++){
		cout << "Ingrese el N° " << i + 1 << endl; cin >> number;
		if (number == 0){
			zero ++; even ++;
		}	
		else if (number % 2 == 0) even ++;
		else odd ++;
	}
	cout << "La cantidad de números impares es " << odd << endl;
	cout <<	"La cantidad de números pares es " << even << endl;
	cout <<	"La cantidad de ceros es " << zero << endl;
	return 0;
}