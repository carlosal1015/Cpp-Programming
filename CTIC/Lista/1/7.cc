/*
    Pida un valor del radio y obtenga el área del círculo.
*/
#include <iostream>
using namespace std;

int main(){

	float radius, area, pi = 3.141592568;

	cout << "Ingrese el radio del círculo:" << endl;
	cin >> radius;

	area = pi * radius * radius;

	cout << "El área del círculo es " << area << "." << endl;

	return 0;
}