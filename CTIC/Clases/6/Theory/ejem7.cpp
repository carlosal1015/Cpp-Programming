#include <iostream>
#include <cstdlib>
#include <time.h>
#define TAM 80
using namespace std;
void Generar(int v[],int n);
void Listar(int v[],int n);
void Ordenar(int v[],int n);
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
	Ordenar(v,n);
	cout<<"\nLista Ordenada\n";
	Listar(v,n);		
	return 0;
}
void Ordenar(int v[],int n){
	int i,j,temp;
	for (i=0;i<n;i++)
		for (j=0;j<n-1-i;j++)
		   if (v[j+1]>v[j]){
		   	  temp=v[j+1];
		   	  v[j+1]=v[j];
		   	  v[j]=temp;
		   }
}
void Busqueda(int v[],int n,int clave){
	bool hallado=false; //suponemos que la clave no esta en la lista
	int pos=-1,w[TAM],k=0; //w guarda todas las posiciones donde esta la clave
	for (int i=0;i<n;i++)
	   if ( clave == v[i] ){
	        hallado=true;
	        pos=i;
	        w[k]=pos;
	        k++;
       }
	if (hallado==true){
	    cout<<"Encontrado en la posicion ";
	    for (int j=0;j<k;j++)
	       cout<<w[j]<<"\t"; 
	}
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
