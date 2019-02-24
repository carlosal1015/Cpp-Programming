#include <iostream>

using namespace std;

int main(){

	int a = 15, b = 19;
	int *ptr;

	cout << "El contenido de a es " << a << "." << endl;
	cout << "La dirección de a es " << &a << "." << endl;
	ptr = &a;

	cout << "El contenido de ptr es " << ptr <<  "." << endl;
	cout << "La dirección de ptr es " << &ptr << "." << endl;
	cout << "La indirección de ptr es " << *ptr << "." << endl;

	return 0;

}