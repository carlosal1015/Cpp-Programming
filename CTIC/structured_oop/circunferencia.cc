#include <iostream>
#include <cmath>
#define PI 2*asin(1.0)

using namespace std;

int main()
{
	float R;
	double A, L;

	cout << "Por favor ingrese el valor del radio (en metros): ";
	cin >> R;
	A = PI*pow(R, 2);
	L = 2*PI*R;
	cout << "El área es " << A << " (metros cuadrados)." << endl;
	cout << "El perímetro es " << L << " (metros)." << endl;

	return 0;
}
