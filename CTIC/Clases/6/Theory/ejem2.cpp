#include <iostream>
#define TAM 80
using namespace std;
int main(){
	int v[TAM],n,acum=0;	
	cout<<"Cantidad de elementos del vector= ";
	cin>>n;
	//Lectura: 1ra forma
	cout<<"Ingrese los elementos del vector separados por un espacio\n";
	for (int i=0;i<n;i++){
	    cin>>v[i];
	    acum=acum+v[i];
    }
	cout<<"elementos del vector=\n";
	for (int i=0;i<n;i++)
	    cout<<v[i]<<"\t";
	cout<<"\nSuma="<<acum;	    	    
	cout<<"\nPromedio="<<(float)acum/n;	    
	return 0;
}
