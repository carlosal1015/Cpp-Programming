#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

unsigned long long int factorial (unsigned int);
long double euler (unsigned int n);

int main(){

	unsigned int n;
	const long double e = exp(1);

	cout << "Ingrese un número entero no negativo: ";
	cin >> n;

	cout << setprecision(50) << e << endl;

	bool condition = abs(e - euler(n)) < 1E-15;
	/*
	do{
		if (condition){
			cout << "El número de iteraciones es " << n << "suficiente." << endl;
			cout << condition;
		}
		else n++;
	} while (condition);
	cout << "El número de iteraciones necesarias es " << n << endl;
*/
	while(not condition == true){
		n++;
	}
	cout << "El número de iteraciones necesarias es " << n << endl;
	return 0; //EXIT_SUCCESS;
}

unsigned long long int factorial (unsigned int n){

	if (n < 21){
		if (n == 0 || n == 1) return 1;
		else 	return n * factorial(n - 1);
	}
	else return 0;//cout << tgamma(n+1);
}

long double euler(unsigned int n){
	long double sum = 0.0;
  for(unsigned int i = 0; i <= n; i ++){
    	const double term = double(pow(factorial(i),-1)); // +1/0!, 1/1!, +1/2! ...
			sum += term;
  }
	return sum;
}