//paso por valor
#include <iostream>
using namespace std;
void intercambio(int a,int b){
	int aux;
	aux=a;
	a=b;
	b=aux;
	cout<<"Dentro de intercambio\n";
	cout<<"a= "<<a<<" b= "<<b<<endl;	
}
int main(){
	int a = 3; 
	int b = 5; 	
	cout<<"Antes del intercambio\n";
	cout<<"a= "<<a<<" b= "<<b<<endl;
	intercambio(a,b);
	cout<<"Luego de intercambio\n";
	cout<<"a= "<<a<<" b= "<<b<<endl;		
	return 0;
}
