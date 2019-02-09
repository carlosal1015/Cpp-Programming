#include <iostream>
using namespace std;

int main(){

	int number;
	float sum = 1;

	do{
		cout << "Ingrese un número natural: ";
		cin >> number;
	} while (number < 1);

	for(int i = 2; i <= number; i++)
	{
	sum += (float) 1 / i;
	}
	
	cout << "La suma es " << sum << endl;
	

	return 0;
}