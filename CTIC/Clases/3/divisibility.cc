//Uso de for
#include <iostream>
using namespace std;

int main(){
	
	int N, cantidadDivisores = 0, sumaDivisores = 0;

	cout << "Ingrese un número:" << endl;
	cin >> N;

	cout << "a) Divisores:\n";

	for(int i = 1; i <= N; i++)
		if (N % i == 0) cout << i << "\t";

	cout << "\nb) Es primo?\n" << endl;
	
	for(int j = 1; j <= N; j++)
		if (N % j == 0)	cantidadDivisores ++;
		
		if (cantidadDivisores == 2)	cout << N << " es primo." << endl;
		else cout << N << " no es primo." << endl;

	cout << "\nc) Es un número perfecto?\n" << endl;

	
	for(int k = 1; k < N; k++){
			if (N % k == 0) sumaDivisores = sumaDivisores + k;
	}
		if (N == sumaDivisores) cout << "El número es perfecto" << endl;
		else cout << "El número no es perfecto." << endl;

	return 0;
}