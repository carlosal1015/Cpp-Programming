#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long factorial (int n);
double euler (int n);

int main(){

	int n;
	const double e = exp(1);
	bool condition;

	cout << "Ingrese la cantidad de bucles: ";
	cin >> n;

	cout << setprecision(50) << e << endl;
	//cout << factorial(n) << endl;
	cout << euler(n) << endl;
	//if (condition) cout << "El número de iteraciones es " << << "." << endl;

	return 0;
}

long factorial (int n){
	int f;

	if (n == 0 || n == 1) f = 1;
	else f = n * factorial(n - 1);

	return f;
}

double euler(int n){
	double sum = 1.0;
	const int upper_bound = n;

  for(int i = 1; i < upper_bound; n ++){
    	const double term = double(pow(factorial(i),-1)); // +1/1!, 1/2!, +1/3! ...
			sum += term;
  }

	return sum;
}