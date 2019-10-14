// Serie 1 con while
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long N, F = 1, i = 1;
	double S = 0;

	cout << "Ingrese el numero de terminos N = "; cin >> N;
	while(i<=N){
		F = F*i;
		S += pow(-1, i + 1)*(2*i - 1)*1.0/pow(F, 1.0/2);//sqrt(F)
		i ++;
	}
	cout << "La suma de los primeros N terminos es " << S << endl;
	cout << "El factorial de N es " << F << endl;
	return 0;
}
