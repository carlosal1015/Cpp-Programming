#include <iostream>
using namespace std;

int main(){

	unsigned long int sizeOfDigits, denominator = 1, term;
	double sum = 0.0;

	do{
		cout << "Enter the value of n: ";	cin >> sizeOfDigits;
	} while (sizeOfDigits < 1);

	for(int i = 1; i < 2 * sizeOfDigits; i++){
		denominator *= -1;
		const double term = denominator / double(i);
		sum += term;
	}

	cout << endl << "pi = " << sum << endl;

	return 0;

}