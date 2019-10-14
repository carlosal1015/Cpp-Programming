//Dice si un numero ingresado desde teclado es par
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long N;
	cout<<"Ingrese el valor de N entero = ";
	cin>>N;
	if(N%2==0)
		cout<<"El numero es Par "<<endl;
	system("pause");
}