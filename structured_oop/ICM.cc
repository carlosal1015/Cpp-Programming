#include <iostream>

using namespace std;

int main()
{
	long a, b, op;

	cout << "[1] Suma a + b" << endl;
	cout << "[2] Diferencia a - b" << endl;
	cout << "[3] Cociente a/b" << endl;
	cout << "[4] Residuo a % b" << endl;
	cout << "[5] Salir" << endl;

	cout << "Ingrese el valor de a: ";
	cin >> a; 
	cout << "Ingrese el valor de b: ";
	cin >> b;
	cout << "Ingrese su opción <1> , <2> , <3> , <4> , <5>." << endl;
	cin >> op;

	switch(op)
	{
	case 1:
		cout << "La suma es " << a + b;
		break;
	case 2:
		cout << "La resta es " << a - b;
		break;
	case 3:
		if (b != 0)
			cout << "El cociente es " << float(a)/b;
		else
			cout << "No es posible la división";			
		break;
	case 4:
		if (b != 0)
			cout << "El residuo es " << a % b;
		else
			cout<<"No es posible hallar el residuo.";
		break;
	case 5:
		cout << "Saliendo de la aplicación." << endl;
		break;
	default:
		cout << "No es una opción.";
		break;
	}
	cout << endl;

	return 0;
}