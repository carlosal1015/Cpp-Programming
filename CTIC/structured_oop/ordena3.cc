#include <iostream>

using namespace std;

int main()
{
	long a, b, c, temp;

	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	cout << "Ingrese el valor de c: ";
	cin >> c;

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	cout << "Los valores ordenados ascendentemente a: " << a << " b: " << b << " c: " << c << endl;

	return 0;
}