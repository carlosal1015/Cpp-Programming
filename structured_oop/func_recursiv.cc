#include <iostream>
#include <cmath>

using namespace std;

void LeeN(long &N)
{
	cout << "Por favor ingrese el valor de N: ";
	cin >> N;
}

long double facto(long N)
{
	if (N == 0 || N == 1)
		return 1;
	else
		return N*facto(N - 1);
}
//TODO: Corregir el valor de e
double num_e(long N)
{
	double S = 0;
	for(long i = 1; i <= N; i++)
	S += pow(-1, i + 1)*(2*i - 1)*1.0/(pow(facto(2*i - 1), 1.0/(2*i - 1)));

	return S;
}

int main(){

	long M;
	LeeN(M);
	cout << "n! es " << facto(M) << endl;
	cout << "e es aproximadamente " << num_e(M) << endl;

	return 0;
}