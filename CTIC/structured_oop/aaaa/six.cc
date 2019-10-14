//Creando una funcion
#include <iostream>
#include <cmath>
using namespace std;

void LeeN(long &N){
	cout << "Ingrese el valor de N = ";
	cin >> N;
}

long double facto(long &N){
/*
	long F = 1;
	for (long i = 1; i<=N; i++)
		F = F*i;
	return F;
*/
	if (N == 0 || N == 1)
		return 1;
	else
		return N*facto(N - 1);
}

double num_0(long N){
/*
	double S = 0;
	for(long i = 1; i<=N; i++)
		S = S + 1.0 / facto(N);
	return S;
*/
	double S = 0;
	for(long i = 1; i <= N; i++)
		S = S + pow(-1, i + 1)*(2*i)*1.0/(pow(2*i+1, 1.0/(2*i-1)));
		
	return S;
}

int main(){
	long N;
	cin >> N;
	cout << "El factorial de N = " << facto(N) << endl;
	
	return 0;
}
//tarea, hacer el mismo ejercicio con punteros
