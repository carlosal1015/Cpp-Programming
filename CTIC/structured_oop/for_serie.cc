#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long N, F = 1;
	double S = 0;

	cout << "Ingrese un número de varias cifras: ";
	cin >> N;

	for(int i = 1; i<=N; i++)
	{
		F *= i;
		S += pow(-1, i + 1)*(2*i - 1)/(pow(sqrt(F), 1.0/(2*i - 1)));
	}
	cout << "La suma de la serie es " << S << endl;

	return 0;
}