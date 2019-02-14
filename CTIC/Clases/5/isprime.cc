#include <iostream>
using namespace std;

bool esPrimo (int n){
	bool resul;

	int cdiv = 0;

	for(int i = 0; i < n; i++)		
		if (n%i==0)	cdiv ++;
	if (cdiv == 2) resul = true;
	else resul = false;

	return resul;
}

int main (){

	float u;
	cout << "Ingrese entero n= ";
	cin >> u;

	if (esPrimo(u)) cout << "Es primo." << endl;
	else cout << "No es primo." << endl;

	return 0;
}