//funciones
#include <iostream>
using namespace std;
int sumar(int a, int b){
	// variables locales
	int resul;
	resul = a + b;
	return resul;
}

int main(){
	
	int x, y, z;
	
	cout << "Primer valor= "; cin >> x;
	cout << "Segundo valor= "; cin >> y;
	
	//invocacion a la función sumar
	
	z = sumar(x,y);
	
	cout << "La suma es = " << z << "." << endl;
	
	return 0;

}