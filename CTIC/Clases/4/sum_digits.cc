#include <iostream>
using namespace std;

int main(){
	
	long int number, dig, sumadig = 0;
	do{
		cout << "Ingrese un entero positivo: ";
		cin >> number;
	}while(number <= 0);

	while(number != 0){
		
		dig = number % 10;
		number /=  10;
		
		sumadig += dig;
	}

	cout << "La suma de dígitos es " << sumadig << "." << endl;
	
	return 0;

}