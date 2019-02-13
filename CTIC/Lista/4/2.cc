#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long factorial (short int n);

int main(){

	const double e = exp(1);

	short int n = 4;

	cout << setprecision(50) << e << endl;
	cout << factorial(n) << endl;

	return 0;
}

long factorial (short int n){
	int f;
	
	if (n == 0 || n == 1) f = 1;
	else f = n * factorial(n - 1);

	return f;
}

