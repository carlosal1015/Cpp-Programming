//problema 7: Funciones y arrays
#include <iostream>
#define TAM 80
using namespace std;
void LeerEstaturas(float v[],int n);
float EstaturaMedia(float v[],int n);
void Listado(float v[],int n);
int main(){
	int n,acum=0;	
	float v[TAM],prom;
	do{
		cout<<"Cantidad de alumnos= ";
		cin>>n;
    } while(n>TAM);
    LeerEstaturas(v,n);
    prom=EstaturaMedia(v,n);
	cout<<"Estatura Media= "<<prom<<endl;
	Listado(v,n);	
    return 0;
}
void Listado(float v[],int n){
	float p;
	int altos,bajos;
	altos=bajos=0;
	p=EstaturaMedia(v,n);   //llamada a la funcion EstaturaMedia desde Listado
	cout<<"Mas Bajos que la media\n";
	for (int i=0;i<n;i++)
	    if (v[i]<p){
	    	cout<<v[i]<<"\t";
	    	bajos++;
		}
	cout<<"Total= "<<bajos<<endl;		
	cout<<"Mas Altos que la media\n";
	for (int i=0;i<n;i++)
	    if (v[i]>p){
	    	cout<<v[i]<<"\t";
	    	altos++;
		}
	cout<<"Total= "<<altos<<endl;				       
}
float EstaturaMedia(float v[],int n){
	float acum=0,p;
	for (int i=0;i<n;i++)
	    acum=acum+v[i];
	p=acum/n;	    	    	
	return p;
}
void LeerEstaturas(float v[],int n){
	//Lectura: 2da forma
	cout<<"Ingrese las estaturas de los alumnos(en mt) uno por uno\n";
	for (int i=0;i<n;i++){
		cout<<"Alumno "<<i+1<<": ";
	    cin>>v[i];
    }	
}
















/*
	cout<<"elementos del vector=\n";
	cout<<"\nPromedio="<<(float)acum/n;	    
	return 0;
}
*/
