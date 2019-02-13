#include <iostream>
#include <cmath>
//#include <complex>

using namespace std;

	/*
	*************************************
	*	Prototipo de las funciones.				*
	*************************************
	*/
float a, b, c, x_1, x_2;
float Delta = pow(b,2) - 4 * a * c;

void realesDiferentes(float a, float b, float c);
void realesIguales(float a, float b, float c);
//void complejas(float a, float b, float c);

int main (){

	do{
		cout << "Ingrese los coeficientes de la ecuación de segundo grado:" << endl;
		cin >> a >> b >> c;
	} while (a != 0);
	
	//realesDiferentes(a, b, c);
	//realesIguales(a, b, c);
	//complejas(a, b, c);

	return 0;
}

realesDiferentes(float a, float b, float Delta, float& x_1, float& x_2){
	if (Delta > 0) {
		x_1 = (-b + sqrt(Delta)) / 2 * a;
		x_2 = (-b - sqrt(Delta)) / 2 * a;
		cout << "Las raíces son " << x_1 << " y " << x_2 << "." << endl;
	}
}

realesIguales(float a, float b, float& x_1, float& x_2){
	if (Delta == 0) {
		x_1 = (x_2 = -b / (2 * a));
		cout << "La raíz tiene multiplicidad dos y es " << x_1 << endl;
	}
}
/*
complejas(float a, float b, float Delta, complex<float>& x_1, complex<float>& x_2){
	if (Delta < 0) {
		x_1 = (-b + sqrt(Delta)) / 2 * a;
		x_2 = (-b - sqrt(Delta)) / 2 * a;
	}
}
*/