//Opreaciones simples
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	float a;int b,c;double S,S1;//Declaracion de Variables
	cout<<"Ingrese el valor de a= ";cin>>a; 
	cout<<"Ingrese el Valor de b= ";cin>>b;
	cout<<"Ingrese el Valor de c= ";cin>>c;
	S=(a+b)*c/(a+5);
	S1=((a+c)/1.0/(b+c))+(a+b)/5;
	cout<<"El valor de la expresion S= "<<S<<endl
	<<"Valor de la expresion S1= "<<S1<<endl;
	system("pause");
}
