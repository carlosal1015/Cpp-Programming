// operadores booleanos
#include <iostream>
using namespace std;

int main(){

	float x, y;

	cout << "Ingrese las coordenadas de un punto" << endl;
	cin >> x >> y;

	if (x>0 && y>0)
		cout << "(" << x << y << ")" << " se encuentra en el primer cuadrante." << endl;
	if (x<0 && y>0)
		cout << "(" << x << y << ")" << " se encuentra en el segundo cuadrante." << endl;
	if (x<0 && y<0)
		cout << "(" << x << y << ")" << " se encuentra en el tercer cuadrante." << endl;
	if (x>0 && y<0)
		cout << "(" << x << y << ")" << " se encuentra en el cuarto cuadrante." << endl;
/*
	// TODO Mejorar el ejercicio.

	if !=(x==0 || y==0)
		cout << "(" << x << y << ")" << " se encuentra en el origen de coordenadas." << endl;
	else 
		if y != 0
			cout << "(" << x << y << ")" << " se encuentra en el eje X." << endl;	
		else
			cout << "(" << x << y << ")" << " se encuentra en el eje Y." << endl;
*/
	return 0;
}
