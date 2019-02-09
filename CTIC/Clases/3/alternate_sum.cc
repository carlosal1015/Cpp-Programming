#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int sizeOfNumber;
	float sum = 1;

	do{
		cout << "Ingrese un número natural: " << endl;
		cin >> sizeOfNumber;
	} while (sizeOfNumber < 1);

	for(int i = 2; i <= sizeOfNumber; i++){

		sum += (float) pow(-1,i+1) * 1/i;
	}

	cout << "La sumas parciales es " << sum << endl;

	return 0;
}