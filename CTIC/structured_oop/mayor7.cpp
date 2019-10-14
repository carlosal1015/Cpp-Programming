//Halla el mayor de 7 valores
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
int a,b,c,d,e,f,g,M;
cout<<"Ingrse el valor de a= ";cin>>a;
cout<<"Ingrse el valor de b= ";cin>>b;
cout<<"Ingrse el valor de c= ";cin>>c;
cout<<"Ingrse el valor de d= ";cin>>d;
cout<<"Ingrse el valor de e= ";cin>>e;
cout<<"Ingrse el valor de f= ";cin>>f;
cout<<"Ingrse el valor de g= ";cin>>g;
M=a;
if(b>M)	M=b;
if(c>M)	M=c;
if(d>M)	M=d;
if(e>M)	M=e;
if(f>M)	M=f;
if(g>M)	M=g;
cout<<"El mayor es "<<M<<endl;
system("pause");
}