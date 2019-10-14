#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long N, S = 0, Mayor, V[100];
	
	cout << "Ingrese el valor de N ";
	cin >> N;
	// Almacena el array.
	for(int i = 0;i < N;i++)
		cin >> V[i];
	
	cout << endl;
	//Imprime el arreglo.
	for(int i = 0; i < N; i++)
		cout << V[i] << endl;


	for(int i = 0; i < N; i++)
		S = S + V[i];
	
	cout << "La suma" << S << endl;
	
	cout << "El promedio es " << S/float(N) << endl;

	return 0;
}
