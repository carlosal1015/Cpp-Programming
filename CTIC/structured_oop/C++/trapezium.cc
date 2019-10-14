#include <iostream>
#include <cmath>

using namespace std;

class Trapecio{
	float B, b, h;
public:
	void leeBbh(float m, float n, float p);
	double area(float B, float b, float h);
};

// Implementacion 
void Trapecio::leeBbh(float m, float n, float p)
{B = m; b = n; h = p;}

double Trapecio::area(float B, float b, float h)
{return (B + b)*h/(2.0);}


int main(void){
	float x, y, z;
	Trapecio T1;
	
	cout << "Ingrese la base mayor"; cin >> x;
	cout << "Ingrese la base menor"; cin >> y;
	cout << "Ingrese la altura"; cin >> z;
	
	T1.leeBbh(x, y, z);
	cout << "El area del trapecio es " << T1.area(x, y, z) << endl;
	
	return 0;
}
