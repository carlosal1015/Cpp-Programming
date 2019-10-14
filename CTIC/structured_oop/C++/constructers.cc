#include <iostream>
#include <cmath>
#define PI 2*asin(1.0)

using namespace std;

class Circle{
public:
	Circle();
	Circle(float P);
	double A(float R);
	double L(float R);
	~Circle()
	{cout << "Liberando memoria " << endl;}
private:
	float R;
};

Circle::Circle(){
	R = 15;
}
Circle::Circle(float p){
	R = p;
}
double Circle::A(float R){
	return PI*pow(R, 2);
}
double Circle::L(float R){
	return 2*PI*R;
}

int main(void){
	float M;
	Circle C2(), C3(100);
	cout << "Ingresa el radio R = ";
	cin >> M;
	Circle C1(M);
	cout << "El area es igual a" << C1.A(M) << endl;
	cout << "La longitud es " << C1.L(M) << endl;

	return 0;
}
