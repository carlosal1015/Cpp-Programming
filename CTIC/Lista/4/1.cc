#include <iostream>
#include <cmath>

using namespace std;

/*
*************************************
*	Prototipo de las funciones.				*
*************************************
*/

void realesDiferentes(float a, float b, float Delta);
void realesIguales(float a, float b);
void complejas(float a, float b, float Delta);

int main (){

	float a, b, c, x1, x2, Delta, realPart, imaginaryPart;

	do{
		cout << "Ingrese los coeficientes de la ecuación de segundo grado:" << endl;
		cin >> a >> b >> c;
	} while (a == 0);

	realesDiferentes(a, b, Delta);
	realesIguales(a, b);
	complejas(a, b, Delta);

	return 0;
}

void realesDiferentes(float a, float b, float Delta){
	float  c, x1, x2, realPart, imaginaryPart;
	Delta = b*b - 4*a*c;
	if (Delta > 0) {
		x1 = (-b + sqrt(Delta)) / (2*a);
    x2 = (-b - sqrt(Delta)) / (2*a);
		//return 	false;
		cout << "Las raíces son " << x1 << " y " << x2 << "." << endl;
	}
}

void realesIguales(float a, float b){
	float c, x1, x2, Delta, realPart, imaginaryPart;
	Delta = b*b - 4*a*c;
	if (Delta == 0) {
		cout << "Roots are real and same." << endl;
    x1 = (-b + sqrt(Delta)) / (2*a);
  	//return false;
		cout << "x1 = x2 =" << x1 << endl;
	}
}

void complejas(float a, float b, float Delta){
	float c, x1, x2, realPart, imaginaryPart;
	Delta = b*b - 4*a*c;
	if (Delta < 0) {
		realPart = -b/(2*a);
    imaginaryPart =sqrt(-Delta)/(2*a);
		//return false;
    cout << "Roots are complex and different."  << endl;
    cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}
}