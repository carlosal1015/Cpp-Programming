#include <iostream>

using namespace std;

int main()
{
	long N, i, S = 0, mayor, V[100];
	float prome;

	cout << "Por favor ingrese el tamaño del arreglo: ";
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		cout << "Ingrese el elemento " << i + 1 << ": ";
		cin >> V[i];
	}

	cout << '[';
	for(int i = 0; i < N; i++)
		cout << V[i] << ' ';
	cout << ']' << endl;

	for(int i = 0; i < N; i++)
		S = S + V[i];

	prome = S*1.0/N;
	cout << "Halla el mayor ";
	mayor = V[1];

	for(int i = 0; i < N; i++)
		if(V[i] > mayor)
			mayor = V[i];

	cout << "El promedio es " << prome << endl;
	cout << "El mayor valor es "<< mayor << endl;
	cout << "La suma es " << S << endl;

	return 0;
}