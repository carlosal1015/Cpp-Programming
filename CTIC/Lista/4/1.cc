#include <iostream>
#include <cmath>

using namespace std;

void realesDiferentes(float, float, float);
void realesIguales(float, float);
void complejas(float, float, float);

int main (){

	float a, b, c, x1, x2, Delta, realPart, imaginaryPart;

	do{
		cout << "Ingrese los coeficientes de la ecuación de segundo grado:" << endl;
		cin >> a >> b >> c;
	} while (a == 0);

	Delta = b*b - 4*a*c;

	if (Delta > 0)	realesDiferentes(a, b, Delta);
	else if (Delta == 0)	realesIguales(a, b);
	else complejas(a, b, Delta);

	return 0;
}

void realesDiferentes(float a, float b, float Delta){
	float x1 = (-b + sqrt(Delta)) / (2*a);
	float x2 = (-b - sqrt(Delta)) / (2*a);
	cout << "Las raíces son diferentes: " << x1 << " y " << x2 << "." << endl;
}

void realesIguales(float a, float b){
	float x = -b / (2*a);
		cout << "Las raíces son iguales: x1=x2= " << x << endl;
}

void complejas(float a, float b, float Delta){
	float x1, x2, realPart, imaginaryPart;
		realPart = -b/(2*a);
    imaginaryPart =sqrt(-Delta)/(2*a);
    cout << "Las raíces son complejas."  << endl;
    cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
}