//Problemas de digitos
#include<iostream>
#include<stdlib.h>
#define mensaje "\n Otra Prueba [S][N]"
using namespace std;
void main(){
	long N,dM=0,inv=0,dg,sd=0;char opc;
	do{system("cls");sd=0,inv=0,dM=0;
	cout<<"Ingrese un numero de varias cifras ";cin>>N;
			do{
				dg=(N%10);
				inv=inv*10+dg;
				sd=sd+dg;
				if(dg>dM)
				dM=dg;
				N=N/10;
			}while(N>0);
	cout<<"El digito Mayor= "<<dM<<endl
		<<"La Suma de Digitos= "<<sd<<endl
		<<"El numero Invertido= "<<inv<<endl
		<<mensaje;
	cin>>opc;}while(opc=='s'||opc=='S');system("pause");}
