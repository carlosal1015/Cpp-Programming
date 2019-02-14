#include <iostream>

using namespace std;

void Mensaje (){
	cout << "Bienvenido a las funciones con retorno void" << endl;
}

void Tabla (int n){
	
	for(int i = 0; i < 12; i++)
		cout << n << " x " << i + 1 << " =" << n * (i + 1) << endl;
}

int main (){

	int n;

	Mensaje();
	cout << "Ingrese un valor natural = ";
	cin >> n;
	Tabla(n);

	return 0;
}