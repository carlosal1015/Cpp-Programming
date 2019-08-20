//Ordena tres valores desiguales
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long a,b,c,temp;
	cout<<"Ingrese el valor de a= ";cin>>a;
	cout<<"Ingrese el valor de b= ";cin>>b;
	cout<<"Ingrese el valor de c= ";cin>>c;
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	cout<<"Los valores oredandos ascendentemente a="<<a<<endl
		<<"b = "<<b<<endl<<"c= "<<c<<endl;
	system("pause");
}


