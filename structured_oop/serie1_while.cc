#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long N, i = 1, F = 1;
	double S = 0;

	cout << "Ingrese el número de términos: ";
	cin>>N;

	while(i<=N)
	{
		F *= i;
		S += pow(-1, i + 1)*(2*i - 1)*1.0/sqrt(F);
		i++;
	}

	cout << "La suma de los primeros n términos es "<< S << endl;
	cout << "n! es " << F << endl;

	return 0;
}