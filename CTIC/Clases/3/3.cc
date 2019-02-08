#include <iostream>
using namespace std;

int main(){

	int N, contador = 1 , acumulador = 0, number;

	cout << "Total de datos a sumar:" << endl;
	cin >> N;

	
	while(contador <= N){
		cout << "Ingrese un dato:" << endl;
		cin >> number;
		acumulador = acumulador + number;
		contador = contador + 1;
	}

	cout << "La suma es " << acumulador << "." <<endl;
 
	return 0;
}