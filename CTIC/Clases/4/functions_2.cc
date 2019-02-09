#include <iostream>
using namespace std;
int MCD (int a, int b){
	// variables locales
	int r = a % b;
	
	while (r != 0){
		a = b;
		b = r;
		r = a % b;
	}
	
	return b;
}

int main(){
	
	int x, y, z;
	
	cout << "Primer valor = " ; cin >> x;
	cout << "Segundo valor = "; cin >> y;
	
	//invocacion a la funcion
	
	cout << "El MCD es = " << MCD(x,y) << endl;
	
	return 0;

}