#include <iostream>

using namespace std;

int main(){

	const float PI = 3.14159268; char choose; bool condition;

	cout << "¡Bievenido al tutor de Geometría!\n\nLas figuras disponibles son:\n"
					"a.\t Cuadrado.\nb.\tTriángulo.\nc.\tCírculo.\n"
					"Elija la figura para hallar su área: ";
	cin >> choose;

	switch (choose){
		case 'a': case 'A':
		float side;
		cout << "Ingrese el lado del cuadrado: ";	cin >> side;

		condition = side > 0;

		if (condition) {
			cout << "El área del cuadrado es " << side * side
					 << " u2.\n¡Gracias vuelva pronto!\n";
		}
		else{
			cout << "¡Error! El lado debe ser positivo.\n"
							"Lo sentimos, vuelva ejecutar el programa.\n";
		} break;

		case 'b': case 'B':
		float base, height;
		cout << "Ingrese la base del triángulo: ";	cin >> base;
		cout << "Ingrese la altura del triángulo: ";	cin >> height;

		if (base <= 0 || height <= 0){
			cout << "¡Error! Los valores deben ser positivos." << endl; break;
		}
		else{
			cout << "El área del triángulo es " << 0.5 * base * height << " u2." << endl;
			cout << "¡Gracias vuelva pronto!" << endl; break;
		}

		case 'c': case 'C':
		float radius;
		cout << "Ingrese el radio del círculo:" << endl;
		cin >> radius;
		
		condition = radius > 0;

		if (condition) {
			cout << "El área del círculo es " << PI * radius * radius << " u2." << endl;
			cout << "¡Gracias vuelva pronto!" << endl;
		}
		else{
			cout << "¡Error! El radio debe ser positivo." << endl;
			cout << "Lo sentimos, vuelva ejecutar el programa." << endl;
		} break;

		default:
		cout << "¡Error! Opciones disponibles (a, b, c)." << endl;
		cout << "Lo sentimos, vuelva ejecutar el programa." << endl; break;
	}

	return 0;
}