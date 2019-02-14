//recursividad
#include <iostream>
using namespace std;
int factorial(int n);
float potencia(float x,int n);
int main(){
	int n;float x;
	cout<<"Ingrese un valor real(x)) =";
	cin>>x;
	cout<<"Ingrese un valor entero(n)) =";
	cin>>n;
	cout<<"factorial= "<<factorial(n);
	cout<<"\npotencia= "<<potencia(x,n);	
	return 0;
}
float potencia(float x,int n){
	if (n==0)
	   return 1;
	else{
		if (n>0)
		   return x*potencia(x,n-1);
		else
		   return potencia(x,n+1)/x;
	    }
}
int factorial(int n){
	if (n<=0)                           //caso base
	   return 1;
	else
	   return n*factorial(n-1);        //parte recursiva  
}
