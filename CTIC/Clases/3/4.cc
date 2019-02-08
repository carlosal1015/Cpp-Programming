#include <iostream>
using namespace std;

int main(){

	int N, number, contador = 1, sumPositivo = 0, sumNegativo = 0, cantPositivo = 0, cantNegativo = 0;

	cout << "Ingrese el total de nùmeros:" << endl;
	cin >> N;

	
	if (N>0) {
		while(contador<=N){

			cout << "Ingrese los " << N << " números uno por uno, todos distintos de cero:" << endl;
			cin >> number;

			if (number<0) {
				sumNegativo = sumNegativo + number;
				cantNegativo = cantNegativo + 1;
			//if (number == 0)
			}
			else{
				sumPositivo = sumPositivo + number;
				cantPositivo = cantPositivo + 1;
			}
			contador = contador + 1;
		}
	}else	cout << "Debe ingresar un número natural" << endl;
	
	cout << "La cantidad de los números negativos es " << cantNegativo << "." << endl;
	cout << "La suma de los números negativos es " << sumNegativo << "." << endl;
	cout << "La cantidad de los números positivos es " << cantPositivo << "." << endl;
	cout << "La suma de los números positivos es " << sumPositivo << "." << endl;

	return 0;
}