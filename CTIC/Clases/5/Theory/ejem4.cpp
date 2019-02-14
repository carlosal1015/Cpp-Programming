#include <iostream>
using namespace std;
//declaracion de prototipos
int factorial(int n);
float potencia(float x,int n);
float suma(float x,int n);
int main(){
	int n;float x;
	cout<<"Ingrese un valor real(x) =";
	cin>>x;
	cout<<"Ingrese un valor entero(n)) =";
	cin>>n;
	cout<<"La suma es= "<<suma(x,n);
	return 0;
}
float suma(float x,int n){
	float s=1;
	for (int i=1;i<=n;i++)
	     s=s+potencia(x,i)/factorial(i);
	return s;
}
int factorial(int n){
	int f=1,i;
	for (i=n;i>=1;i--)
	   f=f*i;
	return f;
}
float potencia(float x,int n){
	float acum=1;
	for (int i=1;i<=n;i++)
	    acum=acum*x;
	return acum;    
}
