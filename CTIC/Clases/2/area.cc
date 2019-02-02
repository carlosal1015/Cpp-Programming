// switch con enteros
#include <iostream>
using namespace std;
int main(){
	cons float PI = 3.14159268;
	int option;
	float area, width, height, radius;

	cout << "*** Menú de áreas ***\n(1)\t Área del círculo.\n(2)\tÁrea del triángulo.\n(3)\n Salir." << endl;
	cin >> option;

	switch (option){
		case 1:
			cout << "Ingrese el radio" << endl;
			cin >> radius;
			area = PI * radius * radius
	
	break;
		case 2: break;
		case 3: break;

		default: 
	}

	return 0;
}
