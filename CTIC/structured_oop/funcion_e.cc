#include <iostream>

using namespace std;

void LeeN(long &N)
{
	cout << "Ingrese el valor de N= ";
	cin >> N;
}

long double facto(long N)
{
	long F = 1;

	for(long i = 1; i <= N; i++)
		F *= i;
	return F;
}

double num_e(long N)
{
	double S = 1;

	for(long i = 1; i <= N; i++)
	S += 1.0/facto(i);

	return S;
}

int main()
{
	long M;
	LeeN(M);

	cout << "El factorial es " << facto(M) << endl;
	cout << "El número e es aproximadamente a " << num_e(M) << endl;

	return 0;
}