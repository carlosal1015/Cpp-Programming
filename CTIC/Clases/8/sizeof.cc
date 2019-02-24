#include <iostream>

using namespace std;

int main(){

	int a = 3;
	char s = 'z';
	double d = 1.03;

	int *pa = &a;
	char *ps = &s;
	double *pd = &d; // % sizeof retorna 

	cout << "La longitud en bits de " << pa << " es " << sizeof(pa) << " y la longitud en bits de " << a << " es " << sizeof(*pa) << "." << endl;
	cout << "La longitud en bits de " << ps << " es " << sizeof(ps) << " y la longitud en bits de " << s << " es " << sizeof(*ps) << "." << endl;
	cout << "La longitud en bits de " << pd << " es " << sizeof(pd) << " y la longitud en bits de " << d << " es " << sizeof(*pd) << "." << endl;

	return 0;

}