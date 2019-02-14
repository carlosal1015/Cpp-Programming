#include <iostream>

using namespace std;
// Declaracion de prototipos
int factorial (int n);
float potencia (float x, int n);
float suma (float x, int n);

int main (){

	int n;
	float x;

	cout << "Ingrese un número natural: " ;
	cin >> n;

	cout << "Ingrese un número flotante: " ;
	cin >> x;

	cout << "La suma es " << suma(x, n) << "." << endl;
	//cout << factorial(n) << endl;
	//cout << potencia(x,n) << endl;

	return 0;
}

int factorial (int n){

	int f = 1;
	
	for(int i = n; n > 1; i--)
		f *= i;
	
	return f;
}

float potencia (float x, int n){

	float prod = 1;

	for(int i = 1; i <= n; i++)
		prod *= i;

	return prod;
}

float suma(float x, int n){
	float sum = 1;
	
	for(int i = 1; i <=n; i++)
		sum += potencia(x,1) / factorial(i);

	return sum;
}