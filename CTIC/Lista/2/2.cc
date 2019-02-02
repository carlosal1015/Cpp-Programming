#include <iostream>
using namespace std;

int main(){
	
	int number1, number2, sum;
	/*
		TODO: No puede ser flotante.
	*/
	cout << "Ingrese dos valores positivos:" << endl;
	cin >> number1 >> number2;

	sum = number1 + number2;

	if (sum % 2 == 0)	cout << "La suma es par." << endl;
	else	cout << "La suma es impar." << endl;

}