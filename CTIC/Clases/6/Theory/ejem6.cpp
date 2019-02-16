#include <iostream>
#include <cstdlib>
#include <time.h>
#define TAM 80
using namespace std;
void Generar(int v[],int n);
void Listar(int v[],int n);
void Busqueda(int v[],int n,int clave);
int main(){
	int v[TAM],n,clave;
	cout<<"Cantidad de elementos del vector: ";
	cin>>n;
	Generar(v,n);
	cout<<"Ingrese la clave= ";
	cin>>clave;
	Listar(v,n);	
	Busqueda(v,n,clave);	
	return 0;
}
void Busqueda(int v[],int n,int clave){
	bool hallado=false; //suponemos que la clave no esta en la lista
	int pos=-1;
	for (int i=0;i<n;i++)
	   if ( clave == v[i] ){
	        hallado=true;
	        pos=i;
       }
	if (hallado==true)	
	    cout<<"Encontrado en la posicion "<<pos;
	else
		cout<<"Clave no fue encontrada."<<endl;
}
void Listar(int v[],int n){
	for (int i=0;i<n;i++)
	    cout<<v[i]<<"\t";
    cout<<endl;
}
void Generar(int v[],int n){
	//Genera n valores entre 3 y 12
	float x;
	srand(time(NULL));
	for (int i=0;i<n;i++){
	    x= rand()%10 + 3; 
	    v[i]=x;
    }
}
