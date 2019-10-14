#include <iostream>
#include <cmath>
using namespace std;

class Calculo{
protected:
	float n1, n2;
};
//el metodo tiene instancia dinamica
class Suma:public Calculo{
	float suma;
public:
	Suma();
	Suma(float a, float b);
	float OptSuma();
	double OptCociente();
	double Raiz();
};

// implementacion
Suma::Suma(){
	n1 = 17;
	n2 = 19;
}

Suma::Suma(float p1, float p2){
	n1 = p1;
	n2 = p2;
}

float Suma::OptSuma(){
	return n1 + n2;
}

double Suma::OptCociente(){
	if (n2 > 0)
		return n1/n2;
	else
		cout << "No es posible la dision" << endl;
}

double Suma::Raiz(){
	return pow(n1,1/n2);
}

int main(void){
	float m1, m2;
	Suma S1;
	cout << "La suma con valores inicializados:" << endl;
	cout << S1.OptSuma() << endl;
	cout << "Ingrese el operando 1:" << endl;
	cin >> m1;
	cout << "Ingrese el operando 2:" << endl;
	cin >> m2;
	Suma S2(m1, m2);
	cout << "La suma es " << S2.OptSuma() << endl;

	return 0;
}
//https://askubuntu.com/questions/696764/exec-format-error-of-gcc-compiled-hello-world-c
//http://cppcheck.sourceforge.net/
