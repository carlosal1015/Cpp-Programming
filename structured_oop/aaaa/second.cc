#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	long N, i=1; double S = 0;
	cout << "Ingrese el numero de terminos N"; cin >> N;
	
	while(i<=N){
			S += 1.0*(2*i-1);
			i++;
		}
	cout << "La suma de los primeros N" << S << endl;
	
	return 0;
}
