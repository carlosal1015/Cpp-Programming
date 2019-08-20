//Calcula el Area y Longitud de una circunferncia
#include<iostream>
#include<stdlib.h>
#include<math.h>
#define pi 2*asin(1.0)
using namespace std;
void main(){
	float R;double A,L;
	cout<<"Ingrese el radio= ";cin>>R;
	A= pi*powf(R,2);
	L= pi*2*R;
	cout<<"El area de la circunferencia de radio= "<<R
		<<" Es "<<A<<endl<<"La longitud= "<<L<<endl;
	system("pause");
}