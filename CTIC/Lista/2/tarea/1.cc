#include <iostream>
using namespace std;
int main(){
	const float PI = 3.14159268;
	char choose;
	bool condition;

	cout << "¡Bievenido al tutor de Geometría!\n Las figuras disponibles son:" << endl;
	cout << "a.\t Cuadrado.\nb.\tTriángulo.\nc.\tCírculo." << endl;
	cout << "Elija la figura para hallar su área:" << endl;
	cin >> choose;

	switch (choose)
	{
		case 'a':
		case 'A':
			float side;
			cout << "Ingrese el lado del cuadrado:" << endl;
			cin >> side;

			condition = side > 0;

			if (condition) {
				cout << "El área del cuadrado es " << side * side << endl;
				cout << "¡Gracias vuelva pronto!" << endl;
			}
			else{
				cout << "¡Error! El lado debe ser positivo." << endl;
				cout << "Lo sentimos, vuelva ejecutar el programa." << endl;
			}
			break;

		case 'b':
		case 'B':
			float base, height;
			cout << "Ingrese la base del triángulo:" << endl;
			cin >> base;
			if (base < 0)
				cout << "¡Error! Los valores deben ser positivos." << endl; break;
			cout << "Ingrese la altura del triángulo:" << endl;
			cin >> height;
			if (height < 0)
				cout << "¡Error! Los valores deben ser positivos." << endl; break;
/*
	TODO: Pasar en un switch al default.
	goto default switch break
*?
			if (condition) {
				cout << "El área del triángulo es " << 0.5 * base * height <<endl;
				cout << "¡Gracias vuelva pronto!" << endl;
			}
			break;

		case 'c':
		case 'C':
			float radius;
			cout << "Ingrese el radio del círculo:" << endl;
			cin >> radius;

			condition = radius > 0;
			if (condition) {
				cout << "El área del círculo es " << PI * radius * radius <<endl;
				cout << "¡Gracias vuelva pronto!" << endl;
			}
			else{
				cout << "¡Error! El radio debe ser positivo." << endl;
				cout << "Lo sentimos, vuelva ejecutar el programa." << endl;
			}
			break;

		default:
			cout << "¡Error! Opciones disponibles (a, b, c)." << endl;
			cout << "Lo sentimos, vuelva ejecutar el programa." << endl;
			break;
	}

	return 0;
}