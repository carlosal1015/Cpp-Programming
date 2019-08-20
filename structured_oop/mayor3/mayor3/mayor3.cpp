//Halla el mayor de 3 valores
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long a,b,c,M;
	cout<<"Ingrese el valor de a= ";cin>>a;
	cout<<"Ingrese el valor de b= ";cin>>b;
	cout<<"Ingrese el valor de c= ";cin>>c;
	if(a>b)
		if(a>c)
			M=a;
		else
			M=c;
	else
		if(b>c)
			M=b;
		else
			M=c;
	cout<<"El mayor de "<<"a= "<<a<<endl<<"b = "<<b<<endl
		<<"c = "<<c<<endl<<"es "<<M<<endl;
	system("pause");
}
