//Instruccion de control Multiple
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long a,b,op;
	cout<<"[1] Suma (a+b)"<<endl
		<<"[2] Diferencia (a-b)"<<endl
		<<"[3] Cociente (a/b)"<<endl
		<<"[4] Residuo (a/b)"<<endl
		<<"[5] Salir"<<endl;
	cout<<"Ingrese el valor de a= ";cin>>a; 
	cout<<"Ingrese el valor de b= ";cin>>b;
	cout<<"Ingrese su opcion <1> , <2> , <3> , <4> , <5> "<<endl;
	cin>>op;
	switch(op){
	case 1:cout<<" Suma= "<<(a+b);break;
	case 2:cout<<" Diferencia"<<(a-b);break;
	case 3:if(b!=0)
			   cout<<"El cociente= "<<(a/b);
			else{
				cout<<"No es posible la division ";
				system("pause");
				exit(0);}break;
	case 4:if(b!=0)
			   cout<<"El residuo= "<<(a%b);
			else{
				cout<<"No es posible hallar el residuo ";
				system("pause");
				exit(0);}break;
	case 5:cout<<"Saliendo de la aplicacion "<<endl;system("pause");exit(1);break;
	default:cout<<"No es una Opcion";break;
	}
	cout<<endl;
	system("pause");
}



